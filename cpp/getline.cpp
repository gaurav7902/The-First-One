#include <bits/stdc++.h>
using namespace std;

int main()
{
    string fname;
    string lname;
    cout << " Enter first name:";
    cin >> fname;
    cout << " Enter last name: ";
    cin >> lname;
    cout << "Full name is " << fname << " " << lname << '\n';
    cin.ignore(); // prevents from getline problem
    string college;
    cout << " Enter college name:";
    getline(cin, college); // getline stops reading input when "Enter key" is pressed return 0;
}