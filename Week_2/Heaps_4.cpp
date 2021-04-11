class Solution
  {
	public:
	struct MinHeapNode{
            char data;
            unsigned frequency;
            struct MinHeapNode *left,*right;
            MinHeapNode(char data,unsigned frequency)
            {
                this->data=data;
                this->frequency=frequency;
                left=right=NULL;
            }
    };
	struct compare{
            bool operator()(MinHeapNode *l,MinHeapNode *r)
            {
                return l->frequency>r->frequency;
            }
    };
	void codes(MinHeapNode *root,vector<string>& v,string s)
        {
            if(!root)
            return;
            if(root->data!='$')
            {
                v.push_back(s); 
                return;
            }
            codes(root->left,v,s+"0");
            codes(root->right,v,s+"1");
        }
	vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    MinHeapNode *left,*right,*top;
		    priority_queue<MinHeapNode*,vector<MinHeapNode*>,compare> minHeap;
		    for(int i=0;i<N;i++)
		    minHeap.push(new MinHeapNode(S[i],f[i]));
		    while(minHeap.size()!=1)
		    {
		        left=minHeap.top();
		        minHeap.pop();
		        right=minHeap.top();
		        minHeap.pop();
		        top=new MinHeapNode('$',left->frequency+right->frequency);
		        top->left=left;
		        top->right=right;
		        minHeap.push(top);
		    }
		    vector<string> v;
		    codes(minHeap.top(),v,"");
		    return v;
		}
};
