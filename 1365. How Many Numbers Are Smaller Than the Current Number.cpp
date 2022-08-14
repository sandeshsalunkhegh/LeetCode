//1365. How Many Numbers Are Smaller Than the Current Number - https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans, ctr(101, 0);
        int j = 0, mn = *min_element(nums.begin(), nums.end()), mx = *max_element(nums.begin(), nums.end());
        for(int i : nums)   ctr[i] += 1;
        mn = mn?mn:1;
        for(int i = mn; i <= mx; i++)   ctr[i] += ctr[i-1];
        for(int i : nums){
            if(i)   ans.push_back(ctr[i-1]);
            else    ans.push_back(0);
        }
        return ans;
    }
};