class Solution {
public:
int sumcalculator(int a,int b)
{
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        sum+=i;
    }
    return sum;
}
    int pivotInteger(int n) {
        if(n==1) return n;
        for(int i=1;i<=n;i++)
        {
            int sumA=sumcalculator(1,i);
            int sumB=sumcalculator(i,n);
            if(sumA==sumB) return i;
        }
        return -1;
    }
};