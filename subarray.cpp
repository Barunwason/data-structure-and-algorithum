/*find the subarray whose sum is given(brute force approach)*/
#include <iostream>
using namespace std;

int main(){
    int a[]={8,7,3,4,9,1};
    int s,sum;
    cout<<"enter the number";
    cin>>s;
    for(int i=0;i<6;i++){
        sum=0;
        for(int j=i;j<6;j++){
            sum+=a[j];
            if(sum==s){
                cout<<"index of that subarray="<<i<<" "<<j-1<<endl;
                for(int l=i;l<j+1;l++){
                    cout<<a[l]<<endl;
                }
            }
        }
    }
}
