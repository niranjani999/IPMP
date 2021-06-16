class StockSpanner {
public:
    stack<pair<int,int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans = 1;
        while(!s.empty() && s.top().first <= price){
            int x = s.top().first;
            ans += s.top().second;
            s.pop();
        }
        s.push({price,ans});
        return s.top().second;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
