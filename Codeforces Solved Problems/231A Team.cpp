#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n < 1 || n > 1000)
    return 1;
    int arr[4];
    arr[3] = 0;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        cin >> arr[j];
        if((arr[2]+arr[0]+arr[1])>=2)
        arr[3]++;
    }
    cout << arr[3];
}
