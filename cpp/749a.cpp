#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0;
    cin >> n;
    if(n< 2 || n > 100000)
    return 1;
    for (; !(n<4);k++)
    n -=2;
    cout << k+1 << "\n";
    for(int i=0 ;i<k;i++ )
    cout << "2 ";
    cout  << n;
    return 0;

}