// source: leetcode.com https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // using extra space , space O(n)
    int removeDuplicatesExtraSpace(vector<int>& nums) {
      vector<int> unique_nums;
      unique_nums.push_back(nums[0]);
      for(int i = 1; i< nums.size(); i++)
        if(nums[i]!=nums[i-1])
            unique_nums.push_back(nums[i]);
    for(int i = 0; i< unique_nums.size(); i++)
        cout<<unique_nums[i]<<" ";
    cout<<endl;
      return unique_nums.size();
    }

     // using set , space O(n)
    int removeDuplicatesExtraSpaceSet(vector<int>& nums) {
      set<int> unique_nums(nums.begin(), nums.end());
      for(auto num:unique_nums)
        cout<<num<<" ";
        cout<<endl;
      return unique_nums.size();
    }
};
int main(){
    Solution solution;
    vector<int> ar({1,1,2,3,3});
    int n = solution.removeDuplicatesExtraSpace(ar);
    cout<<"With extra space: "<<n<<endl;
    for(int i = 0; i< n; i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    n = solution.removeDuplicatesExtraSpaceSet(ar);
    cout<<"Using set: "<<n<<endl;
    return 0;
}
