class Solution {
public:
    int MAX = 1e9;
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n+1,MAX);
        dist[k] = 0;
        for(int i=0; i<n-1; i++){
            vector<int> tp = dist;
            for(int j=0; j<times.size(); j++){
                int x = times[j][0];
                int y = times[j][1];
                int z = times[j][2];
                if(tp[y] > dist[x] + z) tp[y] = dist[x] + z;
                dist = tp;
            }
        }
        int ans  = *max_element(dist.begin()+1,dist.end());
        if(ans >=MAX) return -1;
        return ans ;
    }
};
