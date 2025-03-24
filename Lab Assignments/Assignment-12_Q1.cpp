#include<iostream>
using namespace std;

int nmax(int arr[],int n){
	int tmax=0;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[tmax]){
		tmax=i;
		}
	}
	return tmax;
}
int nmin(int arr[],int n){
	int tmin=0;
	for(int i=1;i<n;i++){
		if(arr[i]<arr[tmin]){
		tmin=i;
		}
	}
	return tmin;
}

int main(){
	int n,k;
	cout << "Enter N : ";
	cin >> n;
	cout << "Enter  K: ";
	cin >> k;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	int max,min,count =0;
	max= nmax(arr,n);
	min = nmin(arr,n);
		
	while(arr[max]-arr[min]>k){
		count++;
	
		arr[max]-=1;
		
		max = nmax(arr,n);
		min = nmin(arr,n);
		
	}
	
	cout << endl << count;
	
	
	return 0;
}
