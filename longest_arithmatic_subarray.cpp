/*find the length of the subarray such that the difference between the adjacent elements of that subarray is same*/
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
	int a[]={5,4,3,2,1,5,6,7,8};
	int pd=0;
	int curr=2;
	int ans=2;
	for(int i=0;i<9;i++){
		if (a[i+1]-a[i]==pd){
			curr++;
			ans=max(curr,ans);
		}
		else{
			pd=a[i+1]-a[i];
			curr=2;
		}
	}
	cout<<"max subarray length="<<ans;
}
