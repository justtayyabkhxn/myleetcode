class Solution {
public:
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int countP(vector<int>& nums, int l, int m, int h)
    {
        long long int right=m+1,cnt=0;
        for(int i=l;i<=m;i++)
        {
            int low=right,high=h;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if( (long long int) nums[i]>(long long int)2*nums[mid])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
                
            }
            cnt+=low-m-1;

        }

        return cnt;
    }
int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += countP(arr, low, mid, high); //Modification
    merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}



    int reversePairs(vector<int>& nums) 
    {
    int n=nums.size();
    return mergeSort(nums,0,n-1);
    
    }
};