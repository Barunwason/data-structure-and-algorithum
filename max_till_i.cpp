#include<iostream>
using namespace std;
int max(int a, int b){
	int ans;
	if(a>b)
	ans=a;
	else
	ans=b;
	return ans;
}
int main(){
	int n;
	cout<<"enter the no. of element  ";
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	int mx=arr[0];
	for(int i=0;i<n;i++){
		mx=max(mx,arr[i]);
		cout<<mx<<endl;
	}
}
