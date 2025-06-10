/*
Character Hashing : use of ASCII code
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // precompute 
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        char ch;
        cin>>ch;
        // fetching the occurence 
        cout<<hash[ch-'a']<<endl;
    }
    return 0;
}