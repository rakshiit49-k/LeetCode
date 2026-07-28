class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
        int prd=(nums[n-1]-1)*(nums[n-2]-1);
        return prd;
    }
};