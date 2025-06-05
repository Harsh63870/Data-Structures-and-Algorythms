#include <bits/stdc++.h>
using namespace std;
void evaluate(vector<vector<int>>& arr, int n){
    // O(n2)
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void rot(vector<vector<int>>&arr , int n){
    // O(n2)
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n/2 ; j++){
            swap(arr[i][j], arr[i][n-j-1]);
        }
    }
}
void display(vector<vector<int>> arr, int n){
    // O(n2)
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
// total TC is O(n2)
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int> (n));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    evaluate(arr, n);
    rot(arr, n);
    display(arr, n);
    return 0;
}
