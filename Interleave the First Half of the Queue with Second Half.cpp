class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        int n=q.size();
        vector<int>ans(n);
        for(int i=0;i<n;i=i+2){
            ans[i]=q.front();
            q.pop();
        }
        for(int i=1;i<n;i=i+2){
            ans[i]=q.front();
            q.pop();
        }
        return ans;
    }
};
