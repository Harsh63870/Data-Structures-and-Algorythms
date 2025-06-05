#include <bits/stdc++.h>
using namespace std;
//Recursion basically means function calls function until the base condition fullfills
/// @brief 
/// @param name 
/// @param i 
/// @param n 
void f1(string name,int i, int n){
    if(i==n){
        return;
    }
    cout<<name<<" ";
    f1(name,i+1,n);
}
/// @brief 
/// @param i 
/// @param n 
void f2(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    f2(i+1, n);
}
/// @brief 
/// @param i 
void f3(int i){ 
    if(i<=0){
        return;
    }
    cout<<i<<" ";
    f3(i-1);
}
/// @brief 
/// @param i 
/// @param n 
//print from 1 TO n using backtracking 
void f4(int i, int n){
    if(i<1){
        return;
    }
    f4(i-1,n);
    cout<<i<<" ";
}
//printing N to 1 using bactracking
void f5(int i, int n){
    if(i==0){            //i=5
        return;
    }
    f5(i-1,n);
    cout<<n-(i-1)<<" ";
}
/// @brief 
/// @return 
int main()
{
    string name;
    cin>>name;
    int n;
    cin>>n;
    f1(name,0,n);
    cout<<endl;
    f2(1,n);
    cout<<endl;
    f3(n);
    cout<<endl;
    f4(n,n);
    cout<<endl;
    f5(n,n);
    return 0;
}