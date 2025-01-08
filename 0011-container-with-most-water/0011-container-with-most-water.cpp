class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size()-1;
        int l=0,r=n;
        int mx=0,mn;
        while(l<r)
        {
          int lh=height[l];
          int rh=height[r];
          
          mn=min(lh,rh);
          mx=max(mx,mn*(r-l));

          if(lh<rh) l++;
          else
          r--;


          
        }
        return mx;
    }
};