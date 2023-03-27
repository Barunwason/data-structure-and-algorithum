#include<iostream>
using namespace std;
int main(){
    int a[]={4,7,2,5,9,1};
    int st=0,en=0,currsum=0,s,n=6,p,b;
    bool found=false;
    cout<<"enter the number";
    cin>>s;
    while(en<n){
        if(currsum==s){
            found=true;
            break;
        }
        else if(currsum<s){
            
            if(en<n){
                currsum+=a[en];
            }
            en++;
        }
        else if(currsum>s){
            currsum-=a[st];
            st++;
        }
    }
    if(found==true){
        p=st+1;
        cout<<p<<" ";
        b=en-1;
        cout<<b<<" ";
    }
}
    





