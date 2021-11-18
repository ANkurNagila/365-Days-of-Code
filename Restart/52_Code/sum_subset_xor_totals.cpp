class Solution {
public:
    vector <int> ans={0};
    
    int subsetXORSum(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        
        vector<int> sub(nums.begin()+1,nums.end());
        int short_ans=subsetXORSum(sub);
        int size1=ans.size();
        
        for(int i=0;i<size1;i++)
        {
            short_ans=(nums[0]^ans[i])+short_ans;
            ans.push_back(nums[0]^ans[i]);
            cout<<(short_ans)<<" ";
        }
        
        return short_ans;
        
    }
};
