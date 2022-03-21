/**
 * main program for mat exercise.
 * 
 * Author: yakov elkobi
 * Since : 2022-03
 */
#include "mat.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;
using namespace ariel;

int main() {
	cout << ariel::mat(9, 7, '@', '-') << endl;
    cout << "\n" << endl;
/* Should print:
@@@@@@@@@
@-------@
@-@@@@@-@
@-@---@-@
@-@@@@@-@
@-------@
@@@@@@@@@
*/
	cout << ariel::mat(13, 5, '@', '-') << endl; 
    cout << "\n" << endl;
/* Should print:
@@@@@@@@@@@@@
@-----------@
@-@@@@@@@@@-@
@-----------@
@@@@@@@@@@@@@
*/
	try {
		cout << ariel::mat(10, 5, '$', '%') << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Mat size is always odd"
         cout << "\n" << endl;
	}
    int t = 1;
    while (t){
         int col, row;
         char a, b;
         cout <<"Please enter add number for columns:"<< endl;
         cin >> col;
         cout <<"Please enter add number for rows:"<< endl;
         cin >> row;
         cout <<"Please enter a symbol 1:"<< endl;
         cin >> a;
         cout <<"Please enter a symbol 2:"<< endl;
         cin >> b;
        cout << mat(col, row, a, b)<< endl;
        cout <<"if you want to continue press 1:" << endl;
        cin >> t;
        if(t!=1){
          break;
        }
    }
    return 0;
}
