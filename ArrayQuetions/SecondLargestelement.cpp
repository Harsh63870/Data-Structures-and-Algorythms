#include <bits/stdc++.h>

using namespace std;
/*
Time Comp is O(2n);
*/
int secondlargestap1(int arr[], int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int largest=arr[0];
    for(int j=1;j<n;j++){
        if(largest < arr[j] && arr[j]!=max){
            largest = arr[j];
        }
    }
    return largest;
}
/*
Time complexity is O(n);
*/
int secondlargestoptimal(int arr[], int n){
    int large=arr[0];
    int seclarge=INT_MIN;
    for(int  i =1;i<n;i++){
        if(arr[i] > large){
            seclarge=large;
            large=arr[i];
        }
    }
    return seclarge;
}
//main
int main(){
    int arr[7]={1,4,2,3,6,7,7};
    cout<<"Second Largest is "<<secondlargestap1(arr,7)<<endl;
    cout<<"Second Largest is "<<secondlargestoptimal(arr,7)<<endl;
    return 0;
}