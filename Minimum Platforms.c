class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr, arr+n);
        sort(dep, dep+n);
        int i = 0, j = 0;
        int count = 0, maxcount = 0;
        while(i < n){
            if(arr[i] <= dep[j]){
                count++;
                i++;
            }
            else{
                count--;
                j++;
            }
            maxcount = max(count, maxcount);
        }
        return maxcount;

     }
};
