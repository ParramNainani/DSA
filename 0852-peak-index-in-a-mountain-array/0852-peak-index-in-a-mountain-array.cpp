class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start =0 ;
        int end = arr.size() -1;
        int mid=start + (end - start)/2;
        while(start <=end ){
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]){
                mid = mid + 1;
            }
            else{
                mid = mid-1;
            }
        }
        return 0;
    }
};