#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    int a[1000];
    string s[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> a[i];
        mp[s[i]] += a[i];
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mp[s[i]], mx);
    }
    map<string, long int> mp2;
    string ans;
    for (int i = 0; i < n; i++)
    {
        mp2[s[i]] += a[i];
        if (mp2[s[i]] >= mx && mp[s[i]] == mx)
        {
            ans = s[i];
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;
    // int t = 1;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}
