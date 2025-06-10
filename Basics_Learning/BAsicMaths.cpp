#include <bits/stdc++.h>
using namespace std;

int extraction(int num){
    int rem=0;
    int num1;
    while(num!=0){
        //cout<<num%10<<" "<<endl;
        rem=(num%10)+rem*10;
        num=num/10;
        //cout<<num<<" "<<endl;

    }
    return rem;
}
int reverse(int n){
    int r=0;

    while(n!=0){
        r=(n%10)+r*10;
        n/=10;
    }
    return r;
}
bool pallindrome(int n){
    int r=0;
    int orig=n;
    while(n!=0){
        r=(n%10)+r*10;
        n/=10;
    }
    if(orig==r){
        return true;
    }else{
        return false;
    }
}
void armstrong(int n){
    int rev=0;
    int k=0;
    int orig=n;
    while(n!=0){
        rev=n%10;
        k=k+(rev*rev*rev);
        n=n/10;
    }
    if(orig==k){
        cout<<"Armstrong !!"<<endl;
    }else{
        cout<<"Not Armstrong !!"<<endl;
    }
}
/// @brief 
/// @param n
/*
Time Complexity is O(n)
*/ 
void print_divisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
/*
1 x 36 
2 x 18
3 x 12
4 x 9
6 x 6
9 x 4
12 x 3
18 x 2
36 x 1
*/
void print_divisorspart2(int n){
    vector<int> vec;
    // time complexity is O(sqrt(n))
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            //cout<<i<<" ";
            vec.push_back(i);
            if(n/i!=i){
                //cout<<n/i<<" ";
                vec.push_back(n/i);
            }
        }
    }
    //O(nlogn)
    sort(vec.begin(),vec.end());
    for(auto it : vec){
        cout<<it<<" ";
    }
}
/* 
prime number case 
time complexity is O(sqrt(n))
This code is the best optimised code to solve
*/
bool prime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
/*
code for GCD
Time Complexity is O(min(a,b)) which is large and
the code is also less efficient for large 
number's .
Brute Force Approach
*/
int gcd(int a, int b){
    int max=0;
    if(b > a){
        for(int i=1;i<=a;i++){
            if(b%i==0 && a%i==0){
                max=i;
            }
        }
        return max;
    }else if(a > b){
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                max=i;
            }
        }
        return max;
    }else{
        return a;
    }
}
/*
Optimal Approach for finding the GCD.
Euclideon Algorithm
Time Complexity is O(log'b'(min(a,b)))
*/
int HCF(int a, int b){
    return b==0 ? a : HCF(b, a%b);
}
int main(){
    // int a;
    // cin>>a;
    // armstrong(a);
    // cout<<"ISpallindrome "<<pallindrome(a)<<endl;
    // cout<<"Reverse is "<<reverse(a)<<endl;
    // cout<<"NUM "<<extraction(a)<<endl;
    // cout<<"All Divisors = ";
    // print_divisors(a);
    // cout<<endl;
    // print_divisorspart2(a);
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
