#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maximumLengthSubarray(vector<int>& nums, int k){
            int maxLen = 0;
            for(int i=0 ; i<nums.size() ; i++){
                int sum = 0;
                for(int j=i ; j<nums.size() ; j++){
                    sum += nums[j];
                    if
                }
                maxLen = max(sum , maxLen);
            }
        }
}