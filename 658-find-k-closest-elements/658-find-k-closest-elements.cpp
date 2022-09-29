class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<arr.size();i++)
        {
            pq.push({abs(arr[i]-x),arr[i]});
        }
        vector<int> res(k,0);
        for(int i=0;i<k;i++)
        {
            res[i]=pq.top().second;
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};