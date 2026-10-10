class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((nums[i]-nums[j]==k) || (nums[j]-nums[i]==k)){
                    count++;
                }
            }
        }
        return count;
    }
};