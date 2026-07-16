class Solution {
public:
    int gcd(int x,int y){
        return y==0 ? x : gcd(y,x%y);
    }
    long long gcdSum(vector<int>& nums) {
        int n= nums.size();
        vector<int> pre(n,INT_MIN);
        int maxi= INT_MIN;

        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            pre[i]=maxi;
        }

        vector<int> pregcd;
        for(int i=0;i<n;i++){
            pregcd.push_back(gcd(nums[i],pre[i]));
        }
        sort(pregcd.begin(),pregcd.end());
        int m= pregcd.size();
        long long sum=0;
        if(m%2!=0){
            int i=0,j=m-1;
            while(i<m/2){
                sum+=gcd(pregcd[i],pregcd[j]);
                i++,j--;
            }
        }else{
            sum=0;
            int i=0,j=m-1;
            while(i<m/2){
                sum+=gcd(pregcd[i],pregcd[j]);
                i++,j--;
            }
        }
        return sum;
    }
};