#include <bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<< endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // int n;
    // cout<<"Enter the Number :";
    // cin>>n;
    cout<<"The Pattern :"<<endl;
    print(5);
    return 0;
}