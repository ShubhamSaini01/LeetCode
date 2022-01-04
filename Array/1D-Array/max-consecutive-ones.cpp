class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, max1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else if(nums[i]==0 || i== nums.size()-1){
                // cout<<"count="<<count<<" ";
                count=0;
            }
            // cout<<"count="<<count<<" "<<"i "<<i<<" ";
                max1= max(max1,count);
        }
        return max1;
    }
};
