class Solution {
public:
bool KMP(string x,string y)
{
    int m=x.size();
    int n=y.size();
    int prefix=0;
    int suffix=1;
    vector<int> lps(n,0);
    while(suffix<n)
    {
        if(x[prefix]==y[suffix])
        {
            lps[suffix]=prefix+1;
            prefix++;
            suffix++;   
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
        if(x[first]==y[second])
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
    if(second==n) return true;
    else return false;
}
    int repeatedStringMatch(string a, string b) {
        string str=a;
        int count=1;
        while(str.size()<b.size())
        {
            str+=a;
            count++;
        }
        if(KMP(str,b)==true) return count;
        else if(KMP(str+a,b)==true) return count+1;
        return -1;
    }
};