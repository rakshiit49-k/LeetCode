class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int winSum=0;
        double avg;
        for(int i=0;i<k;i++){
            winSum+=nums[i];
        }
        int ans=winSum;
        for(int i=k;i<nums.size();i++){
            winSum+=nums[i];
            winSum-=nums[i-k];
            ans=max(ans,winSum);
        }
        avg=(double)ans/k;
        return avg;
    }
};