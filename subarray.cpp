#include <iostream>
using namespace std;

int main(){
    int a[]={8,7,3,4,9,1};
    int s,sum;
    cout<<"enter the number";
    cin>>s;
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
         
            if(sum==s){
                cout<<i<<j-1<<endl;
                for(int l=i;l<j;l++){
                    cout<<a[l];
                }
            }
            sum=0;
            
            for(int k=i;k<j+1;k++){
                sum+=a[k];
                
            }
        }
    }
}
