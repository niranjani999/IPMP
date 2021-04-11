class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int l = maxheap.size();
        int r = minheap.size();
        if(l==0)maxheap.push(num);
        else if(l==r){
            if(num<minheap.top()) maxheap.push(num);
            else{
                int temp = minheap.top();
                minheap.pop();
                minheap.push(num);
                maxheap.push(temp);
            }
        }
        else{
            if(minheap.size()==0){
                if(num>maxheap.top()) minheap.push(num);
                else{
                    int temp = maxheap.top();
                    maxheap.pop();
                    maxheap.push(num);
                    minheap.push(temp);
                }
            }
            else if(num>=minheap.top()) minheap.push(num);
            else{
                if(num<maxheap.top()){
                    int temp = maxheap.top();
                    maxheap.pop();
                    maxheap.push(num);
                    minheap.push(temp);
                }
                else minheap.push(num);
            }
        }
    }
    
    double findMedian() {
        int l = maxheap.size();
        int r = minheap.size();
        if(l>r) return double(maxheap.top());
        else return (double(maxheap.top())+double(minheap.top()))/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
