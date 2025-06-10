#include <bits/stdc++.h>
using namespace std;
//we will do functional recursion and parametrised recursion 

void fx(int i , int sum){
    if(i<1){
        cout<<"Sum is "<<sum<<endl;
        return;
    }
    fx(i-1,sum+i);
}

//factorial
void factorial(int i, int fact){
    if(i<1){
        cout<<"factorial is "<<fact<<endl;
        return;
    }
    factorial(i-1, fact*i);
}
//factorial using functional recursion
int Factirial(int n){
    if(n==0){
        return 1;
    }
    return n*Factirial(n-1);
}
//problems on Recurssion
//solved : using two pointers one pointing to the first index and other to the last i dex and saping till the low pointer reached the middle index 
/*
Time Complexity is O(n)
Space Complexity is O(n)
*/
void reverse(int arr[],int n, int l, int h){
    if(l==n/2){
        return;
    }
    swap(arr[l], arr[h]);
    reverse(arr,n,l+1,h-1);
}
/*
for the fx reverse part 2
Time complexity is O(n)
Space Complexity is O(1)
*/
void reversePart2(int arr[], int n){
    int low=0;
    int high=n-1;
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//checking for a given String is pallindrome or Not
/*
time complexity is O(N)
space complexity is O(1)
*/
bool pallindrome(string n){
    int size=n.size();
    for(int i=0;i<size;i++){
        if(n[i]!=n[size-(i+1)]){
            return false;
        }
    }
    return true;
}
/*
checking pallindrome using recursive approach
*/
bool checkPallindrome(string name, int i){
    int r=name.size()-1;
    if(name[i]!=name[r]){
        return false;
    }
    checkPallindrome(name, i+1);
}
int main(){
    int num;
    cout<<"Enter the Number : ";cin>>num;
    fx(num, 0);
    factorial(num,1);
    cout<<Factirial(num);
    cout<<endl;
    int n;
    cout<<"Enter Size : ";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversePart2(arr,n);
    display(arr,n);
    cout<<endl;
    string name;
    cout<<"Enter the String is ";cin>>name;
    if(pallindrome(name)){
        cout<<"YES pallindrome"<<endl;
    }else{
        cout<<"Not A Pallindrome!!"<<endl;
    }
    return 0;
}