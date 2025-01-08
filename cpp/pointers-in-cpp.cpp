#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    cout << a << endl;
    cout << &a << endl;
    int &ax = a ; // ax just behave like a and both same address just 2 diff identities
    cout << ax << endl ;
    cout << &ax << endl;
    int *ptr = &a;
    cout << *ptr << endl;
    cout << ptr <<endl;
    
}