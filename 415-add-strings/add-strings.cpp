class Solution {
public:
string adds(string num1, string num2)
{
        int s1=num1.size()-1;
        int s2=num2.size()-1;
        int carry=0;
        int ans;
        string val;
        vector<char> arr;
        while(s2>=0)
        {
            ans=(num1[s1]-'0')+(num2[s2]-'0')+carry;
            carry=ans/10;
            char c='0'+ans%10;
            val+=c;
            s1--;
            s2--; 
        }
        while(s1>=0)
        {
            ans=num1[s1]-'0'+carry;
            carry=ans/10;
            char c='0'+ans%10;
            val+=c;
            s1--;
        }
        if(carry) val+='1';
        reverse(val.begin(),val.end());
        return val;
}
    string addStrings(string num1, string num2) {
        
    int s1=num1.size();
    int s2=num2.size();
    string ans;
    if(s1<s2)
    ans=adds(num2,num1);
    else ans=adds(num1,num2);

    return ans;
    }
};