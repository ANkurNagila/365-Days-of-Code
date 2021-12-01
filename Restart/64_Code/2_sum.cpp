class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {        
        
        unordered_map <int,int> ans;
        vector<int> res;

        int flag=1;

        for(int i=0;i<arr.size();i++)
        {
            int ele=k-arr[i];
            if(flag==0)
                return res;

            if(ans.find(ele)!=ans.end())
            {
                auto it=ans.find(ele);

                while(it!=ans.end() and it->first==ele)
                {
                    res.push_back(it->second);
                    res.push_back(i);
                    flag=0;
                    it++;
                }
            }
            ans.insert(make_pair(arr[i],i));
        }
        
        return res;
    }
};
