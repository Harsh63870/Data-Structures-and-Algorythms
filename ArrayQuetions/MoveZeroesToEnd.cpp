#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        for(auto it : nums){
          if(it!=0){
            // pushing O(n)
            v.push_back(it);
          }
        }
        for(auto it : nums){
            // O(n)
            if(it==0){
                v.push_back(it);
            }
        }
        nums = v;// Total is O(2n) and space is O(n) .
    }
    void moveZeroesOptimal( vector<int> &nums){
        int j=0;
        for(int i =0; i< nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
//main
int main()
{
    Solution s1;
    vector<int> nums={0,1,0,3,12};
    s1.moveZeroesOptimal(nums);
    for(auto it : nums){
        cout<<it<< " ";
    }
    return 0;
}