class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        // //vector<int> ans;
        // int n=tasks.size();
        // vector<long long> pre(n+1,0);
        // int pos=0;
        // long long done=0;

        // for(long long shift:shifts)
        // {
        //     while(pos<n && shift>=tasks[pos]-done)
        //     {
        //         shift-=tasks[pos]-done;
        //         pos++;
        //         done=0;
        //     }
        //     if(pos==n)
        //     {
        //         ans.push_back(0);
        //         pos=0;
        //         done=0;
        //     }
        //     else
        //     {
        //         done+=shift;
        //         ans.push_back(n-pos);
        //     }
        // }
        // return ans;

        int n=tasks.size();
        vector<long long> pre(n+1,0);

        for(int i=0;i<n;i++)
        {
            pre[i+1]=pre[i]+tasks[i]; 
        }
        

        vector<int> ans;
        int pos=0;
        long long done=0;

        for(long long s:shifts){
            long long start=pre[pos]+done;
            long long target=start+s;

            int nxt=upper_bound(pre.begin()+pos+1,pre.end(),target)-pre.begin()-1;

            if(nxt==n)
            {
                ans.push_back(0);
                pos=0;
                done=0;
            }
            else
            {
                done=target-pre[nxt];
                pos=nxt;
                ans.push_back(n-pos);
            }
        }
        return ans;
    }
};