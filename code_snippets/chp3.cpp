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

// int main()
// {
//     cout << "Please enter two names \n";
//     string first;
//     string second;

//     cin >> first >> second; // read two strings
//     if (first == second)
//         cout << "that's the same name twice.\n";
//     if (first < second)
//         cout << "the first name is before the second, alphabetcally.\n";
//     if (first > second)
//             cout << "the first name is after the second, alphabetcally.\n";
//     return 0;
// }

/*
Code snippet 5: Detect repeated words
    - Will keep running until you ctrl+c out
    - Lets the user enter strings repeatedly
    - Prints "repeated word" if you enter two equal words after each other
*/

int main()
{
    string previous = " "; // previous word, initialised
    string current; // current workd
    while (cin >> current) { // read a stream of words
        if (previous == current) // check if word is same as last
            cout << "repeated word:" << current << '\n';
        previous = current;
    }
}

/*
Code snippet 6: Detect repeated words
    - Will keep running until you ctrl+c out
*/