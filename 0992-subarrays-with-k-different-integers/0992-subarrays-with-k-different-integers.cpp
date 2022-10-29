class Solution {
public:
    int atMK(vector<int> &arr,int n,int k)
    {
        int i=0;
        unordered_map<int,int> freq;
        int cnt=0;
        for(int j=0;j<n;j++)
        {
           freq[arr[j]]++;
           while(freq.size()>k)
           {
               if(freq[arr[i]]==1)
                   freq.erase(arr[i]);
               else
                   freq[arr[i]]--;
               i++;
           }
           cnt+=j-i+1;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& arr, int k) {
	// Write your code here.
     int ans=0;
    int n=arr.size();
    ans=atMK(arr,n,k)-atMK(arr,n,k-1);
        cout<<ans;
        return ans;
    
}
    
};