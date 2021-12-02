class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
            unordered_multimap <int,int> ans;

            for(int i=0;i<nums1.size();i++)
            {
                ans.insert(make_pair(nums1[i],1));
            }

            vector<int> res;

            for(int i=0;i<nums2.size();i++)
            {
                auto it=ans.find(nums2[i]);

                    while(it!=ans.end() and it->first==nums2[i])
                    {
                        if(it->second!=0){
                            res.push_back(it->first);
                            it->second=it->second-1;
                            break;
                        }
                        it++;
                    }
            }

            return res;
    }
};
