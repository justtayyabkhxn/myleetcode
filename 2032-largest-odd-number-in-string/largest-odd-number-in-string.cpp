class Solution {
public:
    
    string largestOddNumber(string s) {
        int num=s.size();
        int i=0;
        string ans="";
        while(num>=0)
        {
            int digit=s[num]-'0';
            if(digit%2==1)
            { i=0;
                
                break;
            }
            else num--;
        }
        while(num>=i)
                {
                    ans+=s[i];
                    i++;
                }
        return ans;
    }
};