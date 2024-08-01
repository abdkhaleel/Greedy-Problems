struct Data{
    int starts;
    int ends;
};
class Solution
{
    public:
    
    static bool comp(struct Data val1, struct Data val2){
        return val1.ends < val2.ends;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        struct Data arr[n];
        for(int i = 0; i < n; i++){
            arr[i].starts = start[i];
            arr[i].ends = end[i];
        }
        sort(arr, arr+n, comp);
        int count = 1, freetime = arr[0].ends;
        for(int i = 1; i < n; i++){
            if(arr[i].starts > freetime){
                freetime = arr[i].ends;
                count++;
            }
        }
        return count;
    }
};
