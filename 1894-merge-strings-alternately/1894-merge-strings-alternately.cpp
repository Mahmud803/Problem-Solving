class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x=word1.size();
        int y=word2.size();

        int mx=max(x,y);
        string s="";

        int i=0;
        int j=0;
        int r=0;
        while(r<mx)
        {
          if(i<x){
           s+=word1[i];
          }  
         if(j<y){
           s+=word2[j];
         }
          
          i++;
          j++;
          r++;
        }
        return s;
        
    }
};