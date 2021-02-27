#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
Code snippet 3: Input/output
    - This function takes a string input and outputs hello + string.
*/
// int main()
// {
//     cout << "Enter your name: \n";
//     string first_name; // declare var, sets aside memory to receive name
//     cin >> first_name;
//     cout << "Hello, " << first_name << ".\n";
// }

/*
Code Snippet 4: Read and compare names
*/

int main()
{
    cout << "Please enter two names \n";
    string first;
    string second;

    cin >> first >> second; // read two strings
    if (first == second)
        cout << "that's the same name twice.\n";
    if (first < second)
        cout << "the first name is before the second, alphabetcally.\n";
    if (first > second)
            cout << "the first name is after the second, alphabetcally.\n";
}





