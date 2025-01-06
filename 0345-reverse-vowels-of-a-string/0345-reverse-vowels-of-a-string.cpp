class Solution {
public:
    string reverseVowels(string s) {
        int x=s.size();
        string s1="";
        for(int i=0;i<x;i++)
        {
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u' ||
            s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s1+=s[i];
            }
        }
        int y=s1.size();
        int j=1;
        for(int i=0;i<x;i++)
        {
             if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u' ||
            s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s[i]=s1[y-j];
                j++;
            }
        }
        return s;
        
    }
};