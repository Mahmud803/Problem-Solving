class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
 sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
      
        for(auto num:nums)
        {
           mp[num]++;
        }
       
        vector<pair<int,int>>v;
        for(auto &x:mp)
        {
         v.push_back({x.second,x.first});
        }
        sort(v.rbegin(),v.rend());
        vector<int>vss;
      
        for(int i=0;i<k;i++)
        {
         vss.push_back(v[i].second);
        }
        return vss;
    }
};