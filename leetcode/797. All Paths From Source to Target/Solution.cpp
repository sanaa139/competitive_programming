#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> allPaths;
    
    bool pathWasntVisited(int x, vector<int>& path){
        for(int i = 0; i < path.size(); i++){
            if(path[i] == x){
                return false;
            }
        }
        return true;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        queue<vector<int>> q;
        vector<int> path;
        path.push_back(0);
        q.push(path);
        
        while(!q.empty()){
            path = q.front();
            q.pop();
            int last = path[path.size() - 1];
            
            if(last == graph.size() - 1){
                vector<int> completePath;
                for(int i = 0; i < path.size(); i++){
                     completePath.push_back(path[i]);
                }
                allPaths.push_back(completePath);
            }
            
            for(int i = 0; i < graph[last].size(); i++){
                if(pathWasntVisited(graph[last][i], path)){
                    vector<int> newPath;
                    for(int i = 0; i < path.size(); i++){
                        newPath.push_back(path[i]);   
                    }
                    newPath.push_back(graph[last][i]);
                    q.push(newPath);
                }
            }
        }
        return allPaths;
    }
};