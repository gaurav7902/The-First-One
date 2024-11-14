#include <bits/stdc++.h>
using namespace std;
int info (int a,int b); //prototype (needed only if function is written below the main)
int main()
{
    cout << "Hello wolrd \n";
    string str;
    getline(cin, str); // until enter pressed
    cout << '\n'
         << str << '\n';
    cin >> str; // until space 
    cout << '\n' 
         << str << '\n';
         int x , y;
         cin >>x>>y ;
    cout << info(x,y) << '\n';
    const int z= 5;
    cout << z << '\n';
    int a=7,b=5;
    swap(a,b);
    cout << a <<" "<<b;

    return 0;
}





int info(int a, int b)
{
    int sum = a + b;
    return sum;
}
