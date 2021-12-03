class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        if(r*c!=(mat.size()*mat[0].size()))
        {
            return mat;
        }
        
            vector <vector <int>> ans;
            int x=0;
            int y=0;
            
            vector<int> temp;
            
             for(int i=0;i<mat.size();i++)
            {
                for(int j=0;j<mat[i].size();j++)
                {
                    if(temp.size()<c)
                        temp.push_back(mat[i][j]);
                    else
                    {
                        ans.push_back(temp);
                        temp.clear();
                        temp.push_back(mat[i][j]);
                    }
                }
            }
            
            ans.push_back(temp);
            
            return ans;    
    }
};
