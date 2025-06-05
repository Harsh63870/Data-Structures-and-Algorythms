#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // function to help main
    int max(int a, int b){
        return a>b ? a : b;
    }
    int missing(vector<int> nums){
        // mx will store the maximum consecutive lemgth of 1's
        int mx = 0, cnt = 0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==1){
                cnt++;
                mx = max(cnt , mx);
            }
            else cnt = 0;
        }
        return mx;
    }
};
int main(){
    return 0;
}