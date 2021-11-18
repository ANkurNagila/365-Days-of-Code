class Solution {
public:
    int xorOperation(int n, int start) {
        vector <int> nums(n);
        int xor_ans=0;
        
        for(int i=0;i<n;i++)
        {
            nums[i]=start + 2*i;
            xor_ans=xor_ans^nums[i];
        }
        
        return xor_ans;
    }
};
