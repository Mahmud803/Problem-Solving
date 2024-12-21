class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(auto c:s)
        {
            mp[c]++;
        }
        bool flag=true;
       for(int i=0;i<n-1;i++)
       {
        if(mp[s[i]]!=mp[s[i+1]])
        {
            return false;
            break;
        }
       }
       return true;
    }
};