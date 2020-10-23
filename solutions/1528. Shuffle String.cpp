class Solution {
public:
    string restoreString(string s, vector<int>& indices)
    {
        string ans(indices.size(), ' ');
        int i;
        for(i=0;i<indices.size();i++)
        {
            ans[indices[i]]=s[i];
        }
        return ans;
    }
};
