class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        if(n==0)
        {
            return true;
        }
        int x=v.size();

        for(int i=0;i<x;i++)
        {
         if(v[i]==0 && (i==0 || v[i-1]==0) && (i==(x-1) || v[i+1]==0))
         {
            n--;
            v[i]=1;
        if(n==0){
        return true;
        }
         }
        }
        return false;

        
    }
};