#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int high=n-1;
        int low=0;
        
        while(low<high)
        {
            int mid=(low+high)/2;
            if(arr[mid+1]>arr[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
    return low;}
    
};