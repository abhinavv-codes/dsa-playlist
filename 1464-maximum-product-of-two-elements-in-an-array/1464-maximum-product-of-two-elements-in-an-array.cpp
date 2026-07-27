class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        return (long long)(nums[0]-1)*(nums[1]-1);
    }
};