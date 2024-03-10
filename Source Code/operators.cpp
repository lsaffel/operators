#include <iostream>
using namespace std;

int main()
{
    // +, -, *, /, %
    // these are binary operators, i.e. used on two operands
    cout << 5 + 2 << endl;      // result is 7
    cout << 5 / 2 << endl;      // result is 2, a whole number
    cout << 5.0 / 2 << endl;      // result is 2.5. To get that, make one or 
                            //both into a floating point number by adding a decimal point
    cout << 5 % 2 << endl;  // 5 modulo 2, result is the remainder, which is 1

    // unary operators
    // ++, --       increment and decrement

    int counter = 7;
    counter++;
    cout << counter << endl;        // result is 8 is printed

    counter--;
    cout << counter << endl;        // result is 7 is printed

    int counter2 = 7;
    cout << counter2++ << endl;        // result is 7 is printed, not 8, since 
                                    // this is post increment
                                    
    cout << counter2 << endl;        // result is 8 is printed

    cout << ++counter2 << endl;        // result is 9 is printed. 
                // This is pre-increment. The counter is incremented 
                // and THEN it is written out

    cout << counter2-- << endl;     // result is 9 is printed. Post-decrement
    cout << counter2 << endl;        // result is 8 is printed

    // system("cls");       // does not work for me. 
            // It says sh: cls: command not found

    // system("clear");        // this one doesn't clear my screen on my debug 
                     // console, but it doesn't say command not found, either

    // relational operators
    // <, >, <=, >=, ==, !=
    int a = 5, b = 5;
    cout << (a < b) << endl;     // result is 0, meaning false
    cout << (a > b) << endl;     // result is 0, meaning false
    cout << (a <= b) << endl;    // result is 1, meaning true   
    cout << (a != b) << endl;    // result is 0, meaning false
    cout << (a == b) << endl;    // result is 1, meaning true

    // logical operators
    // &&  ||  !        those are and, or and not

    b = 8;      // a is already 5
    cout << (a == 5 && b == 5) << endl;    // and. result is 0, meaning false

    cout << (a == 5 || b == 5) << endl;    // or. result is 1, meaning true

    // not  !
    cout << !(a == 5 || b == 5) << endl;   // not or. result is 0, meaning false

    cout << (a == 5 && b == 5+3) << endl;    // 5+3 executes before the ==, 
            // so this is 1, or true, since b == 8

}