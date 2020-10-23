class Solution {
public:
    int lastStoneWeight(vector<int>& v1) {
        make_heap(v1.begin(),v1.end());
        int x;
        int y;
        while(v1.size()>1)
        {
        y=v1.front();
        pop_heap(v1.begin(), v1.end()); 
       v1.pop_back(); 
        x=v1.front();
         pop_heap(v1.begin(), v1.end()); 
    v1.pop_back(); 
        if(y!=x)
        {
        v1.push_back(y-x); 
      
    // using push_heap() to reorder elements 
    push_heap(v1.begin(), v1.end()); 
        }
        }
        if(v1.size()==0)
        {
            return 0;
        }
      return v1.front(); 
    }
};
