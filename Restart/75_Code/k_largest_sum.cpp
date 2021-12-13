class Solution {
    static bool myCompare(pair<int,int> p1, pair <int,int> p2)
    {
        return p1.first < p2.first;
    }
public:
    
  
  
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans;
        vector<pair<int,int>> trail;
        
        
        for(int i=0;i<nums.size();i++)
        {
            trail.push_back(make_pair(nums[i],i));
        }
        
        sort(trail.begin(),trail.end(),myCompare);
        
        vector<pair<int,int>> v1;
        
        for(int j=0,i=trail.size()-1;i>=0;i--,j++)
        {
            if(j<k)
            {
                v1.push_back(make_pair(trail[i].second,trail[i].first));
            }
            else
                break;
        }
        
        sort(v1.begin(),v1.end(),myCompare);
        
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(v1[i].second);
        }
        
        return ans;
        
    }
};
