class Solution {
public:
    void checkpallindrome(string s,int& l,int& r)
    {
        while(l>=0 && r<s.size())
           {
               if(s[l]==s[r])
               {
                   l--;
                   r++;
               }
               else break;
           }
    }
    string longestPalindrome(string s) {
       if(s.size()==1) return s;
       int n=s.size();
       int maxlen=1;
       int start=0;
       int end=0;
       //ODD
       for(int i=0;i<n;i++)
       {
           int l=i;
           int r=i;
           checkpallindrome(s,l,r);
           int len=r-l-1;
           if(maxlen<len)
           {
               maxlen=len;
               start=l+1;
               end=r-1;
           }
       }
       //EVEN
              for(int i=0;i<n;i++)
       {
           int l=i;
           int r=i+1;
           checkpallindrome(s,l,r);
           int len=r-l-1;
           if(maxlen<len)
           {
               maxlen=len;
               start=l+1;
               end=r-1;
           }
       }
       return s.substr(start,maxlen);
    }
};