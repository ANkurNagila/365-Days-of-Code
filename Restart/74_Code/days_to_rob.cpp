class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        
        vector<int>  ans;
        int flag=1;
        
        unordered_set<int> set1;
        
        if(time==0)
        {
            for(int i=0;i<security.size();i++)
                ans.push_back(i);
            
            return ans;
        }
        
        for(int i=1;i<security.size();i++)
        {
            if(security[i]<=security[i-1])
            {
                flag+=1;
            }
            else
            {
                flag=1;
            }
            
            if(flag>time)
            {
                cout<<i<<endl;
                set1.insert(i);
            }
        }
        
        
        flag=1;
        for(int i=security.size()-2;i>=0;i--)
        {
            //cout<<" "<<i<<" ";
            if(security[i]<=security[i+1])
            {
                flag+=1;
            }
            else
            {
                flag=1;
                
            }
            
            //cout<<flag;
            
            if(flag>time)
            {
                if(set1.find(i)!=set1.end())
                    ans.push_back(i);
            }
            
            
        }
        //cout<<endl;
        sort(ans.begin(),ans.end());
        
        return ans;
               
        
    }
};
