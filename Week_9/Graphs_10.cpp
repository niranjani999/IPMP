class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<times.size();i++) {
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        set<pair<int,int>> s;
        vector<int> dist(n+1, INT_MAX);
        dist[0]=0 ;
        dist[k] = 0;
        s.insert({0,k});
        while(1) {
            if(s.empty()) break;
            int a = (*s.begin()).second;
            s.erase(s.begin());
            for(int i=0;i<adj[a].size();i++) {
                 if(dist[adj[a][i].first] > dist[a]+adj[a][i].second) {
                     s.erase({dist[adj[a][i].first],adj[a][i].first});
                     dist[adj[a][i].first] = dist[a]+adj[a][i].second;
                     s.insert({dist[adj[a][i].first],adj[a][i].first});
                 }
            }
        }
        int ans = 0;
        for(int i=0;i<n+1;i++) {
            if(dist[i] == INT_MAX) return -1;
            ans = max(ans, dist[i]);
        }
        return ans;
    }
};
