#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool perfectsquare(int num){
        int root = sqrt(num);
        return root*root == num;
    }
    bool helper(vector<int> &nums){
        int i=0;
        int j=i+1;
        while(j<nums.size()){
            if(!perfectsquare(nums[i]+nums[j])) return false;
            i++;
        }
        return true;
    }
    int numSquarefulPerms(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(), nums.end());
        do{
            cout << nums[0] << endl;
            if(helper(nums)) count++;
        }while(next_permutation(nums.begin(), nums.end()));
        return count;
    }
};
int main(){
    Solution obj;
    vector<int> arr = {1,8,17};
    int n = obj.numSquarefulPerms(arr);
    cout << "res : " << n << endl;
    return 0;

}