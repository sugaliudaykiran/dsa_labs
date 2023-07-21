int search(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    while (low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]==k){   // TC -> O(LogN).. SC -> O(1)..
            return mid;
        }
        else if (arr[low]<=arr[mid]){ // assuming the left halve is sorted
            if (arr[low]<=k && k<=arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else{
            if (arr[mid]<=k && k<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }return -1;
    
}

// int search(vector<int>& arr, int n, int k)
// {    
//     for (int i=0;i<n;i++){       //  TC -> O(N)..    SC -> O(1)..
//         if (arr[i]==k){
//             return i;
//         }
//     }return -1;
// }