#include <iostream>
using namespace std;

void modify(int &x)
{
    x = x * 2; // Modify the original variable
}

int main()
{
    int a = 5;
    cout << "Before function call: " << a << endl;

    modify(a); // Pass by reference

    cout << "After function call: " << a << endl; // The value of 'a' is modified
    return 0;
}
// x will be having the memory location as of a in this case