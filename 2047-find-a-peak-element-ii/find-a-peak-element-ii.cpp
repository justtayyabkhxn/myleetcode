class Solution {
public:
    int findmax(vector<vector<int>> mat,int mid)
    {
        int rows=mat.size();
        int index=-1;
        int maxel=-1;
        for(int i=0;i<rows;i++)
        {
            if(mat[i][mid]>maxel)
            {
                maxel=mat[i][mid];
                index=i;
            }

        }
        return index;

    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows=mat.size();
        int cols=mat[0].size();
        int low=0;
        int high=cols-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int maxrowindex=findmax(mat,mid);
            int left=mid-1>=0 ? mat[maxrowindex][mid-1] : -1;
            int right=mid+1<cols ? mat[maxrowindex][mid+1] : -1;
            if(mat[maxrowindex][mid]>left && mat[maxrowindex][mid]>right) return {maxrowindex,mid};
            else if(mat[maxrowindex][mid]<left) 
            {
            high=mid-1;
            }
            else low=mid+1;
        }
        return {-1,-1};
    }
};