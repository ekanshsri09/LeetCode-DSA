class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int suffixMin[n];
        for(int i=0;i<n;i++){
            suffixMin[i]=nums[i];
        }
        for(int i=n-2;i>=0;i--){
            suffixMin[i]=min(nums[i],suffixMin[i+1]);
        }
        int prefixMax=nums[0];
        for(int i=0;i<=n-1;i++){
            prefixMax=max(prefixMax,nums[i]);
            int instability=prefixMax-suffixMin[i];
            if(instability<=k)
                return i;
        }
        return -1;
    }
};