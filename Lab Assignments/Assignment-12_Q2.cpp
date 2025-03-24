  
#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<pair<int, int>> v;
    
    while (true) {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
            break;
        v.push_back(make_pair(x, y));
    }

    vector<int> v1;
    for (int i = 0; i < v.size(); i++) {
        for (int j = v[i].first; j <= v[i].second; j++) {
            v1.push_back(j);
        }
    }

    sort(v1.begin(), v1.end());
    v1.erase(unique(v1.begin(), v1.end()), v1.end());

    vector<int> arr;
    for (int i = 0; i < 10; i++) {
        int x; cin >> x;
        if(x==-1)
		break;
		arr.push_back(x);
    }

	for (int i = 0; i < arr.size(); i++)
	{
		if(arr[i]>=v1.size())
		cout << -1 << "\n";
		else
		cout << v1[arr[i]-1] << "\n";
		
	}

    return 0;
}
