class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n= arr.size();
        priority_queue<pair<double,pair<int,int>>> pq;
        int cnt=0;
        for(int i=0;i<n;i++){
            int j=n-1;
            while(i<j){
                pq.push({(double)arr[i]/arr[j],{i,j}});
                j--;
                cnt++;
            }
        }
        int x= cnt-k;
        vector<int> ans;
        for(int i=0;i<x;i++){
            pq.pop();
        }
         ans.push_back(arr[pq.top().second.first]);
         ans.push_back(arr[pq.top().second.second]);
        return ans;
    }
};