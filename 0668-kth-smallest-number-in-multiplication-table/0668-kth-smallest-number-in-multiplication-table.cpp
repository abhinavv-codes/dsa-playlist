class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        // vector<vector<long long>> arr(n, vector<long long>(m));
        // priority_queue<int> pq;
        int cnt= 0;
        int low=1;
        int high= m*n;
        int ans= 0;

        while(low<=high){
            int mid= low+(high-low)/2;
            int cnt=0;
            for(int i=1;i<=m;i++){
                cnt+=min(mid/i,n);
            }
            if(cnt>=k){
               ans=mid;high=mid-1;
            }else{
                low=mid+1;
            }
        }

        return ans;
    }
};