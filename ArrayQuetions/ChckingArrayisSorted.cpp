#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            return false;
        }
    }
    return true;
}


//main
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,5,2,4,3};
    if(issorted(arr2, 5)){
        cout<<"Sorted !!"<<endl;
    }else{
        cout<<"Not Sorted !!"<<endl;
    }
    return 0;
}