#include <bits/stdc++.h>
using namespace std;
/*
left rotatate an array 

total Time Comp is O(n-k)+O(k) = O(n) .
BUt space comp is O(n) .
*/
class sol{
    public:
        vector<int> array(vector<int>&nums, int k){
            vector<int> result;\

            //  edge case handling 
            if(nums.empty())  return; // asked by google to do
            int K = k%(nums.size());
            for(int i=K;i<nums.size();i++){ // O(n-k)
                result.push_back(nums[i]);
            }
            for(int j=0;j<K;j++){  // O(k)
                result.push_back(nums[j]);
            }
            return result;
        }
};
//main
int main()
{
    sol s1;
    vector<int> nums = {1,2,3,4,5,6,7};
    cout<<"Rotated Array"<<endl;
    vector <int> res = s1.array(nums, 2);
    for(int i : res){
        cout<< i << " ";
    }
    return 0;
}