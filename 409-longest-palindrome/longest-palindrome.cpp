class Solution {
public:
    int longestPalindrome(string s) {
        int sz=s.size();
        vector<int> lowercase(26,0);
        vector<int> uppercase(26,0);
        for(int i=0;i<sz;i++)
        {
            if(s[i]>='a')
            {
                lowercase[s[i]-'a']++;
            }
            else if(s[i]>='A')
            {
                uppercase[s[i]-'A']++;
            }
        }
        int count=0;
        bool odd=false;
        for(int i=0;i<26;i++)
        {
            if(lowercase[i]%2==0)
            {
                count+=lowercase[i];
            }
            else 
            {
            count+=lowercase[i]-1;
            odd=true;

            }
            if(uppercase[i]%2==0)
            {
                count+=uppercase[i];
            }
            else 
            {
            count+=uppercase[i]-1;
            odd=true;
            }
        }
        if(odd==true) return count+1;
        else return count;
    }
};