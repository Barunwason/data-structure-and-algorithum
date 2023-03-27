#include<iostream>
using namespace std;
int main(){
    int a[]={8,7,3,4,9,1};
    int st=0,en=0,currsum=0,s;
    cout<<"enter the number";
    cin>>s;
    
    while (currsum+a[en]<=s){
        currsum+=a[en];
        en++;
        if(currsum==s){
            cout<<st;
        }
    }
    /*while (currsum>s){
        currsum-=a[st];
        st++;
        if(currsum==s){
            cout<<st;
    }
    }*/
       
}


