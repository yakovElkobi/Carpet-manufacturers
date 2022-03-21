<div dir="rtl" lang="he">

# יצרני השטיחים חלק א

כיתבו תוכנית העוזרת למנהל המפעל לתכנן את השטיחים שלו!  
פירוט מדוייק של קלטים ופלטים נמצא כאן:
https://codegolf.stackexchange.com/questions/241219/mat-printing-matrix

כדי לראות איך הפונקציה אמורה לעבוד, ראו בקובץ
[Demo.cpp](Demo.cpp)
המצורף.

בשלב א עליכם לכתוב את הקבצים הדרושים כך שהפקודות הבאות יעבדו ללא שגיאות קימפול:

<div dir='ltr'>

    make demo
    ./demo
	make test
    ./test

</div>

עליכם לכתוב את  הקבצים הבאים:

* mat.hpp - כותרות לפונקציות שבתכנית.
* mat.cpp - מימוש בסיסי של הפונקציות - לא חייב להיות מלא - צריך רק להתקמפל.
* Test.cpp - בדיקות-יחידה בפורמט doctest. יש לכתוב בדיקות מפורטות ולהתייחס למקרי קצה.
   * ניתן לראות דוגמה לבדיקות בקובץ TestExample.cpp, אבל יש לכתוב הרבה בדיקות נוספות.
   * במטלות בקורס זה אנחנו כותבים את הבדיקות לפני המימוש, ולכן רוב הבדיקות ייכשלו וזה בסדר - המימוש המלא ייכתב בחלק ב של המטלה.

מומלץ לוודא שהפקודה הבאה רצה ללא אזהרות (כדי להריץ יש להתקין את  clang-tidy):

<div dir='ltr'>

    make tidy

</div>

שימו לב:
אין לשנות קבצים קיימים, אלא רק להוסיף קבצים חדשים.
מערכת הבדיקה האוטומטית מעתיקה מחדש את כל הקבצים הקיימים על-גבי הפתרון שאתם מגישים,
ולכן כל שינוי שתעשו בקבצים הקיימים יימחק.

</div>

# יצרני השטיחים חלק ב

כיתבו תוכנית העוזרת למנהל המפעל לתכנן את השטיחים שלו!
פירוט מדוייק של קלטים ופלטים נמצא כאן: https://codegolf.stackexchange.com/questions/241219/mat-printing-matrix



בשלב ב עליכם לכתוב מימוש מלא. המימוש צריך לעבור את כל הבדיקות (75% מהציון):

<div dir='ltr'>

    make test
    ./test

</div>

הסקריפט משתמש בתוכנה curl - ייתכן שתצטרכו להתקין אותה ע"י `sudo apt install curl`.

בנוסף, הקוד צריך לעבור בהצלחה את מבחן הקריאות (25% מהציון):

<div dir='ltr'>

    make tidy

</div>

הסקריפט משתמש בתוכנה clang-tidy - ייתכן שתצטרכו להתקין אותה ע"י `sudo apt install clang-tidy`.

בנוסף, יש לכתוב **תוכנית ראשית** כלשהי המדגימה את הפתרון שלכם.
תוכן התוכנית לבחירתכם - תהיו יצירתיים. התוכנית לא תיבדק אוטומטית אלא רק בהצגה.

כשהגעתם למצב ששתי הפקודות רצות בלי שגיאות, תוכלו לבדוק את הציון שלכם ע"י הפקודה:

<div dir='ltr'>

    bash grade

</div>

עצה: כדי שהסקריפט grade ירוץ מהר יותר במהלך הפיתוח, מומלץ להגדיר את משתנה-הסביבה DEBUG:
<div dir='ltr'>

    export DEBUG=1

</div>



אין לשנות קבצים קיימים, אלא רק להוסיף קבצים חדשים.
מערכת הבדיקה האוטומטית מעתיקה מחדש את כל הקבצים הקיימים על-גבי הפתרון שאתם מגישים,
ולכן כל שינוי שתעשו בקבצים הקיימים יימחק.
</div>