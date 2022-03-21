#include<stdexcept>
#include<iostream>
#include<vector>
#include "mat.hpp"
using namespace std;
 namespace ariel{

/**
 * @brief first loop puts into arr min of index.
 *        Second loop takes the min(of arr[i][j] and reverse of arr[i][j])mod 2.
 *        Thrid loop fill the string.
 * @return string Carpet.
 * For example: matrix 5x5, symbol 1:@ 
 *                          symbol 2:-
 * 
 *              0 0 0 0 0     4 3 2 1 0   0 0 0 0 0          0 0 0 0 0        @@@@@
 *              0 1 1 1 1     3 3 2 1 0   0 1 1 1 0          0 1 1 1 0        @---@
 *              0 1 2 2 2 min 2 2 2 1 0 = 0 1 2 1 0 mod 2 =  0 1 0 1 0 result @-@-@ 
 *              0 1 2 3 3     1 1 1 1 0   0 1 1 1 0          0 1 1 1 0        @---@
 *              0 1 2 3 4     0 0 0 0 0   0 0 0 0 0          0 0 0 0 0        @@@@@
 */
string fill(int col, int row, char a, char b){   // O(n^2)
    vector<vector<int>> arr(row, vector<int>(col));
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            arr[i].at(j) = min(i,j);
        }
    }
    int k = row-1;
    int l = col-1;
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            arr[i].at(j) = min(arr[i].at(j), arr[k].at(l));
            arr[i].at(j) = arr[i].at(j)%2;
            l--;
        }
        l = col-1;
        k--;
    }
    string str;
     for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            if(arr[i].at(j) == 0){
                str += a;
            }
            else{
                str += b;
            }
        }
        if(i != row-1){
        str += "\n";
        }
    }
    return str;
}
/**
 * @brief return carpet of the two symbols.
 * @param col Number of columns if the number that received is negative/even throw exception.
 * @param row Number of rows if the number that received is negative/even throw exception.
 * @param a First symbol if is not a symbol from the ascii table throw exception.
 * @param b Second symbol if is not a symbol from the ascii table throw exception.
 * @return string Carpet
 */
string mat(int col, int row, char a, char b){
    int const minSymbol = 33;
    int const maxSymbol = 126;
    if(col < 0 || row < 0){
        throw out_of_range("colum and row most be positive numbar");
    }
    if(col%2 == 0 || row%2 == 0){
         throw out_of_range("Mat size is always odd");
    }
    if(a < minSymbol || a > maxSymbol || b < minSymbol || b > maxSymbol){
        throw out_of_range("unvaild symbol");
    }
    string ans;
    ans = fill(col, row, a, b);
    return ans;
   }
}