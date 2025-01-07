class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        int n=chars.size();

        for(int i=0;i<n;i++)
        {
            int cnt=0;
            char ch=chars[i];
            while(i<n && ch==chars[i])
            {
                cnt++;
                i++;
            }
            if(cnt==1)
            {
                chars[idx++]=ch;
            }
            else{
                chars[idx++]=ch;
                string len=to_string(cnt);
                for(auto x:len)
                {
                    chars[idx++]=x;
                }
            }
          i--;

        }
        return idx;
    }
};