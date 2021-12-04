class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();i++)
        {
            int begin=0,last=matrix[i].size()-1;
            if(matrix[i][begin]<=target and matrix[i][last]>=target)
            {
                while(begin<=last)
                {
                    int mid=(begin+last)/2;
                    if(matrix[i][mid]==target)
                        return true;
                    else if(matrix[i][mid]>target)
                    {
                        last=mid-1;
                    }
                    else
                    {
                        begin=mid+1;
                    }
                }
                
                break;
            }
        }
        
        return false;
    }
};
