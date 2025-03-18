
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[100]={0};
	int n,index; 
	cout << "input n " ;
	cin >> n;
	for(int i=0;i<100;i++)
	{
		cin >> arr[i];
		if(arr[i] == -1)
		{
			index = i;
			break;
		}
	}
	

	bool found=false;
	for(int i=0;i<index;i++){
		for(int j=i+1;j<index;j++){
			if(abs(arr[i]-arr[j]) == n);
			found = true;
		}
	}
	
	if(!found)
	cout << "NOT found";
	else
	cout << "found";
}