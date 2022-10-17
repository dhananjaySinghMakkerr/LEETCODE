class Solution {
public:
    bool checkIfPangram(string sentence) {
        int* arr=new int[26];
        for(int i=0;i<26;i++)
            arr[i]=0;
        for(auto x:sentence)
        {
            arr[x-'a']++;
        }
        for(int i=0;i<26;i++)
            if(!arr[i])
                return false;
        return true;
    }
};