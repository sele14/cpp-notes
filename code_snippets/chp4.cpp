#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

// Code Snippet 7: If statements
// int main()
// {
//     int a = 0;
//     int b = 0;
//     cout << "Please enter two integers: \n";
//     cin >> a >> b; // take two inputs

//     if (a < b)
//         cout << "max(" << a <<","<<b<<") is " << b << "\n";
//     else
//         cout << "max(" << a << "," << b <<") is " << a << "\n";
 
// }

// Code snippet 8: converting units of length to illustrate switch statement
int main()
{
    // define ratio between cm to inch
    double cm_per_inch = 2.54;
    double length = 1; // set a default val to length

    char unit = 'a';

    cout << "Please enter a length followed by a unit (c or i):\n";
    cin >> length >> unit;

    // i = inch, c = cm
    switch (unit) {
        case 'i':
            cout << length << "in is " << cm_per_inch*length << "cm\n";
            break;
        case 'c':
            cout << length << "cm is " << length/cm_per_inch << "in\n";
            break;
        default:
            cout << "Sorry, I don't know a unit called " << unit << "\n";
            break;
    }
}