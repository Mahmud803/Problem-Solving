class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1=str1.size();
        int len2=str2.size();

        if((str1+str2)!=(str2+str1))
        {
            return "";
        }
        else{
            return str1.substr(0,gcd(len1,len2));
        }
    }
};