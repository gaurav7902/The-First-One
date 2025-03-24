
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	vector<int> v;
	//while(true){
		//int x; cin >>x;
		/*if(x==-1)
		break;
		v.push_back(x);
	}
	bool flag = false;
	for(int i=1;i<v.size()-1;i++){
		if(v[i-1] < v[i] && v[i] > v[i+1] ){
			cout << i << "\n";
			flag = true;
		}
	}
	if(!flag){
		cout << -1;
	}
}
*/

#include<bits/stdc++.h>
using namespace std;



int fin(vector<int>& v){
	int left =1,right = v.size() -2;
	
	while(left<=right){
		int mid = (left+right)/2;
		if(v[mid] > v[mid-1] && v[mid] > v[mid+1])
		return mid;
		if(v[mid] < v[mid-1])
		right = mid-1;
		else
		left = mid+1;
	}
	return -1;
}
int main(){
	vector<int> v;
	while(true){
		int x; cin >>x;
		if(x==-1)
		break;
		v.push_back(x);
	}

 cout << fin(v);
	
	
		
}
