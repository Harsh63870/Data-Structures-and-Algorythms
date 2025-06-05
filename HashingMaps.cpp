/*
--HASHING MAPS AND TIME COMPELXITY
COLLISIONS DIVISIONS AND RULE OF HASHING
*/
/*
                THEORY
1. jaise hum array ko full traverse krke dekhte the waise ab hum 
ek hash array banyenge 0 se 12 tak ka [0,1,2,...,12] ka aur when we 
want ki how many times 1 appear we dont have to traverse we just need
to find hash[1] === it will give occurence of 1.

2. But we can only declare array of size 10^7
and we can declare only arr[10^7] if globally either arr[10^5]
,this is the problem so we proceed further in the hashing.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // preompute
    int hash[13]={0};
    for(int i=0;i<n ;i++){
        hash[arr[i]]+=1;
    }
    int q;cin>>q;
    for(int j=0;j<q;j++){
        int data;
        cin>>data;
        
        // fetch method 
        cout<<hash[data]<<endl;
    }
    return 0;

}