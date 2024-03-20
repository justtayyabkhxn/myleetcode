class Solution {
public:
    
    string frequencySort(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        string ans="";
        priority_queue<pair<int,char>> pq;
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        while(!pq.empty())
        {
            int n=pq.top().first;
            while(n--)
            {
                ans+=pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};