#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int s;
        cin>>n;
        cin>>s;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        for(int i=0 ; i<n ; i++){
            if(abs(s-arr[i]) < abs(s-arr[n-1])){
                cout<<abs(2*(s-arr[i]))+abs(arr[n-1] - s);
            }
            else if(abs(s-arr[i]) > abs(s-arr[n-1])){
                cout<<2*abs(arr[n-1]-s) + abs(s-arr[i]);
            }
        }
        // 1 2 3 4 5 6 7 8 9 10
    }
}