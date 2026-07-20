class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        queue<int> q;

        for(int i=1;i<=8;i++){
            q.push(i);
        }

        while(!q.empty()){
            int temp= q.front();
            q.pop();

            if(temp>=low && temp<=high){
                ans.push_back(temp);
            }
            int last_digi= temp%10;
            if(last_digi+1<=9){
                q.push(temp*10 +(last_digi+1));
            }
        }
        return ans;
        //12,23,45,67,78,89,123,456,789,1234,5678,12345,6789...... 
    }
};