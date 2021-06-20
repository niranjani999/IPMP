class Solution {
public:
    vector<int> ans;
    
    int oper(int V) {
        if(ans[V]==V) return V;
        return oper(ans[V]);
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int a = connections.size();
        if( a+1 < n) return -1;
        ans.resize(a+1,0);
        for(int i=0;i<n;i++)  ans[i] = i;
        int count = 0;
        for(int i=0;i<a;i++) {
            int x = oper(connections[i][0]);
            int y = oper(connections[i][1]);
            if(x!=y)  ans[x] = y;                  
            
        }
        for(int i=0;i<n;i++)
            if(ans[i]==i) count++;
        return count-1;
    }
};
