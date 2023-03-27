#include <iostream>
using namespace std;
int main(){
    int a[]={2,4,1,6,3};
    for (int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            cout<<endl;
            for(int k=i;k<j+1;k++){
                cout<<a[k];
            }
        }
    }
}