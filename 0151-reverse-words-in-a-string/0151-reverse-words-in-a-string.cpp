class Solution {
public:
    string reverseWords(string s) {
        int x=s.size();

        string ans="";
        int i=0;
        while(i<x)
        {
            string tem="";
           while(s[i]==' ' && i<x)
           {
            i++;
           }

           while(s[i]!=' ' && i<x)
           {
            tem+=s[i];
            i++;
           }

           if(tem.size()>0)
           {
            if(ans.size()==0)
            {
                ans=tem;
            }
            else{
                ans=tem+' '+ans;
            }
           }
        }
        return ans;
    }
};