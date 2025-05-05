class Solution {
public:
    string reverseWords(string s) {

        int ln=s.size();

        int idx1=-1,idx2=-1;
        for(int i=0;i<ln;i++)
        {
              if(s[i]!=' ')
              {
                idx1=i;
                break;
              }
        }
        for(int i=ln-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                idx2=i;
                break;
            }
        }
        string tm;
        vector<string>v;
       bool ck=false;
        for(int i=idx1;i<=idx2;i++)
        {
            if(s[i]==' ' and ck)
            {
                continue;
            }
           else if(s[i]==' ')
            {
                v.push_back(tm);
                tm.clear();
                ck=true;
            }
            else
            {
                   tm.push_back(s[i]);
                   ck=false;
            }
            
        }

        v.push_back(tm);
        reverse(v.begin(),v.end());

        string st;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                st.push_back(v[i][j]);
            }
            st.push_back(' ');
        }
        st.pop_back();
        return st;

        
    }
};
