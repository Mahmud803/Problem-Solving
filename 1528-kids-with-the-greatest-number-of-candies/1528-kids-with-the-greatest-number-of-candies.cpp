class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int extraCandies) {
        int mx=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            mx=max(mx,v[i]);
        }
        vector<bool>vec(n);
        for(int i=0;i<n;i++)
        {
            if((v[i]+extraCandies)>=mx)
            {
                vec[i]=true;
            }
            else{
              vec[i]=false;
            }
        }
        return vec;
    }
};