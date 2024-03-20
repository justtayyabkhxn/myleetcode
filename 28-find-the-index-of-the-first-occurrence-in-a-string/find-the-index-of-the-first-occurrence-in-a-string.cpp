class Solution {
public:
    int strStr(string haystack, string needle) {
      int m=haystack.size();
      int n=needle.size();
     vector<int> lps(needle.size(),0);
     int prefix=0;
     int suffix=1;
     while(suffix<needle.size())
     {
         if(needle[suffix]==needle[prefix])
         {
             lps[suffix]=prefix+1;
             suffix++;
             prefix++;
         }
         else
         {
             if(prefix==0)
             {
                 lps[suffix]=0;
                 suffix++;
             }
             else
             {
                 prefix=lps[prefix-1];
             }
         }
     }
     int first=0;
     int second=0;
    while(first<m && second<n)
     {
         if( haystack[first]==needle[second])
         {
             first++;
             second++;
         }
         else
         {  
             if(second==0) first++;
             else second=lps[second-1];
         }
     }
         if(second==n) return first-second;
         else return -1;
    }
};
