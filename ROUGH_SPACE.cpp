#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n;
        cin>>k;
        string s;
        cin>>s;
        bool res = false;
        for(int i=0 ; i<k ; i++){
            if(s[i]!=s[n-1-i]){
                res = false;
                break;
            }
            res = true;
        }
        if(res && k*2 < n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
6
6 2
000000
2 1
01
4 1
1011
10 2
1101011001
10 1
1101011001
2 1
11

/*
int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int count = 0;
        for(int i=0 ; i<(n-1) ; i++){
            if(arr[i]+1 < arr[i+1]){
                count ++;
            }
        }
        cout<<count<<endl;
*/