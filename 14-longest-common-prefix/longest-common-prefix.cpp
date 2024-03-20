class Solution {
public:
    string subbstr(string &s,int i,int j)
{
    string ans;
    int iteration=j-i;
    while(i<=j)
    {
        ans+=s[i];
        i++;
    }
    return ans;
}
    string longestCommonPrefix(vector<string>& strs) {
    vector<int> strsizes(strs.size(),0);
    for(int i=0;i<strs.size();i++)
    {
        strsizes[i]=strs[i].size();
    }
    int smallest=INT_MAX;
    for(int i=0;i<strs.size();i++)
    {
        smallest=min(smallest,strsizes[i]);
    }
    int index=0;
    for(int i=0;i<strs.size();i++)
    {
        if(smallest==strsizes[i])
        {
            index=i;
            break;
        }
    }
    int count=0;
    string tobeselected=strs[index];
    for(int i=0;i<smallest;i++)
    {
        for(int j=0;j<strs.size();j++)
        {
            if(strs[j][i]!=tobeselected[i])
            {
               return subbstr(tobeselected,0,count-1);
            }
            
        }
       count++;
           
    }
    return subbstr(tobeselected,0,count-1);

    }
};