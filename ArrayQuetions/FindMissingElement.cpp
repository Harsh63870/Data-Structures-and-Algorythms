#include <bits/stdc++.h>
using namespace std;
// using two pointers approach 
int missingEle(int arr[], int n){
    // time comp is O(n) .
    int i = 0, j = 1;
    while(j<n){
        if(arr[i]+1!=arr[j]) return (arr[j]-1);
        i++;
        j++;
    }
    return -1;
}

// using hashing 
int missingeleBetter(int arr[], int n){
    int hash[n]={0};
    for(int i=0 ; i<n ; i++){
        hash[arr[i]]++;
    }
    for(int i=0 ; i<n ; i++){
        if(hash[arr[i]]==0) return i;
    }
    return -1;
}
int main(){
    return 0;
}