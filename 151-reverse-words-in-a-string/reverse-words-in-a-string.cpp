#include <bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        
        int i=0;
        int len=s.size();
        string ans;
        while(i<len)
        {
            string temp="";
            while(i<len && s[i]==' ')
            {
                i++;
            }
            while(i<len && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
            if(temp.size()>0)
            { 
            if(ans.size()==0)
            ans=temp;
            else
            ans=temp+" "+ans;
            }
        }
       
        return ans;
    }
};