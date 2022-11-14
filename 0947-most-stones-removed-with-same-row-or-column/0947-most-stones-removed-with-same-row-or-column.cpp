#include<bits/stdc++.h>
class Solution {
public:
    void findConnComp(pair<int,int> coord,map<pair<int,int>,bool> &vis,map<pair<int,int>,vector<vector<int>>> &graph)
    {
        vis[coord]=true;
        for(auto y:graph[coord])
        {
            if(!vis[{y[0],y[1]}])
                findConnComp({y[0],y[1]},vis,graph);
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        map<pair<int,int>,vector<vector<int>>> graph;
        map<pair<int,int>,bool> vis;
        for(int i=0;i<stones.size();i++)
        {
            int row=stones[i][0];
            int col=stones[i][1];
            //vector<vector<int>> v;
            //graph[{row,col}]=v;
           for(int j=i+1;j<stones.size();j++)
           {
               if(stones[j][0]==row||stones[j][1]==col)
               {
                   vector<int> x(2,0);
                   x[0]=stones[j][0];
                   x[1]=stones[j][1];
                   graph[{row,col}].push_back(x);
                   x[0]=row;
                   x[1]=col;
                   graph[{stones[j][0],stones[j][1]}].push_back(x);
               }
            }
        }
        for(int i=0;i<stones.size();i++)
        {
            if(graph.find({stones[i][0],stones[i][1]})==graph.end())
            {
                vector<vector<int>> v;
                graph[{stones[i][0],stones[i][1]}]=v;
                }
        }
        int cnt{0};
        for(auto x:graph)
        {
            if(!vis[x.first])
            {
                findConnComp(x.first,vis,graph);
                cnt++;
            }
        }
        for(auto x:graph)
        {
            cout<<x.first.first<<","<<x.first.second<<"->";
            for(auto y:x.second)
            {
               cout<<"("<<y[0]<<","<<y[1]<<")"<<"->";
            }
            cout<<endl;
        }
        return stones.size()-cnt;
    }
};