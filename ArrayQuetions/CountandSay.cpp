#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<int,int> helper1(string n){
        unordered_map<int,int> mpp;
        for(auto it : n){
            mpp[it]++;
        }
        return mpp;
    }
    int helper2(unordered_map<int,int> mpp){
        int num = 0;
        for(auto it : mpp){
            num = num *100 + ((it.second )*10 + (it.first));
        }
        return num;
    }
    string countAndSay(int n) {
        string ans = to_string(n);
        unordered_map<int,int> mpp1 = helper1(ans);
        int num = helper2(mpp1);
        string arr = to_string(num);
        return arr;
    }
};
int main(){
    int n;
    cin>>n;
    Solution obj;
    string str = obj.countAndSay(n);
    cout << str <<endl;
    return 0;
}