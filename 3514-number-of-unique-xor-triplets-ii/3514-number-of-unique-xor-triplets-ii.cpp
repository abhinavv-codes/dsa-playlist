class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int> a;
        unordered_set<int> b;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int x= nums[i]^nums[j];
                a.insert(x);
            }
        }
        for(int i: a){
            for(int j=0;j<n;j++){
                int x= i^nums[j];
                b.insert(x);
            }
        }
        return b.size();
        
    }
};