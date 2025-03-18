
#include <bits/stdc++.h>
using namespace std;

void finds(bool lays[],int n) {
	int start=-1;
	for(int i=0;i<n;i++)
	{
		if(lays[i])
		{
			if(start==-1)
			start=i;
			
		}
		else {
			if(start != -1){
			cout << "[" << start << "," << i-1 << "]";
			start = -1;
							}	
			}
	}
	
	if(start!=-1){
		cout << "[" << start << "," << n << "]";
	}
}

int main() {
    int x, y;
    int index = 0;
    bool lays[1000] = {false};

    while (true) {
        cout << "Input with space #_enter 0 0 to stop_#\n";
        cin >> x >> y;

        if (x == 0 && y == 0) {
            break;
        }

        for (int j = x; j <= y; j++) {
            lays[j] = true;
        }

        index = max(index, y);
    }
    int n= sizeof(lays) / sizeof(bool);
	
	finds(lays,n);

    

    return 0;
}
