#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a<1 || a > 1000000000 || c<1 || c> 1000000000 || b<1 || b > 1000000000)
    return 0;
    int x=(a+c-1)/c,y=(b+c-1)/c;
    long long ans = (long long)x*(long long)y ;
    cout << ans;
    return 0;
}