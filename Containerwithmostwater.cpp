class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int maxi=INT_MIN;
        int i=0,j=n-1;
        while(i<=j){
            int sto=0;
            if(height[i]==height[j]){
                sto+=(j-i)*height[i];
                maxi=max(maxi,sto);
                i++,j--;
                continue;
            }
            if(height[i]<height[j]){
                sto+=(j-i)*height[i];
                maxi=max(maxi,sto);
                i++;
                continue;
            }
            if(height[i]>height[j]){
                sto+=(j-i)*height[j];
                maxi=max(maxi,sto);
                j--;
                continue;
            }
        }
        return maxi;
    }
};