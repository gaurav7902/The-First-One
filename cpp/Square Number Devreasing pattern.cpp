#include <bits/stdc++.h>
using namespace std;
int mini(int a, int b, int c, int d)
{
    int min = INT_MAX;
}
void printp(int n)
{
    int sub = n;
    int a = 0, b = n;

    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            int x = sub - min(min(i, j), min(2 * n - 1 - 1 - j, 2 * n - 1 - 1 - i));
            cout << x << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printp(n);
}
