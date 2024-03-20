class Solution {
public:
    bool isAnagram(string s, string t) {
    //METHOD 1
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t) return true;
        // return false;

    // METHOD 2
       if(s.size()!=t.size()) return false;
       vector<int> map1(26,0); 
       vector<int> map2(26,0); 
       int sum1=0;
       int sum2=0;
       for(int i=0;i<s.size();i++)
       {
           map1[s[i]-'a']++;
       }
       for(int i=0;i<s.size();i++)
       {
           map2[t[i]-'a']++;
       }
       int first=0;
       int second=0;
       for(int i=0;i<26;i++)
       {
           if(map1[first]!=map2[second]) return false;
           else
           {
               first++;
               second++;
           }
       }
       return true;

    }
};