class Solution {
public:
    bool isSubsequence(string s, string t) {

        int x=s.size();
        int y=t.size();

        if(x>y) return false;

        int i=0,j=0;

        while(i<x && j<y)
        {
          if(s[i]==t[j])
          {
            i++;
          }
          j++;

        }

        if(i==x) return true;
        else return false;
        
    }
};