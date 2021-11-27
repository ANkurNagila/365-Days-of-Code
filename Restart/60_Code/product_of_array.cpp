class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int s=1;
        int zeros=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                zeros++;
            else
                s=s*nums[i];
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0 and zeros==0)
                nums[i]=s/nums[i];
            else if(nums[i]!=0 and zeros==1)
                nums[i]=0;
            else if(zeros>1)
                nums[i]=0;
            else
                nums[i]=s;
        }
        
        return nums;
    }
};
