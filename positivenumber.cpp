/*find out the smallest positive integer missing from the array*/
#include<iostream>
using namespace std;
int main(){
	int a[]={0,4,-6,1,2,3};
	const int n= 1e6+2;
	bool b[n];
	for(int i=0;i<n;i++){
		b[i]=false;
	}
	for(int j=0;j<6;j++){
		if(a[j]>=0){
			b[a[j]]=true;
		}
	}
	for(int k=0;k<n;k++){
		if(b[k]==false){
			cout<<"the missing smallest positive integer is  "<<k;
			break;
		}
		
	}
}
