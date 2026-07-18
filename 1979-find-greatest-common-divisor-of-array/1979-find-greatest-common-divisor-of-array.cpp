class Solution {
public:
    int gcd (int x, int y){
        return y==0 ? x : gcd(y,x%y);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[nums.size()-1]);
    }
};