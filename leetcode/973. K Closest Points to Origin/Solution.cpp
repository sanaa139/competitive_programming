#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, greater<pair<double, vector<int>>>> pq;
        for(int i = 0; i < points.size(); i++){
            double distance = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            pq.push(make_pair(distance, points[i]));
        }
        
        vector<vector<int>> closestPoints;
        for(int i = 0; i < k; i++){
            pair<int, vector<int>> pair = pq.top();
            vector<int> closestPoint = pair.second;
            closestPoints.push_back(closestPoint);
            pq.pop();
        }
        return closestPoints;
    }
};