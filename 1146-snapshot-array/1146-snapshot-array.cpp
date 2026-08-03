class SnapshotArray {
public:
    vector<vector<pair<int,int>>> arr;
    int snapId;

    SnapshotArray(int length)
    {
        arr.resize(length);
        snapId=0;
    }

    void set(int index, int val)
    {
        if(!arr[index].empty() && arr[index].back().first==snapId)
        {
            arr[index].back().second=val;
        }
        else
        {
            arr[index].push_back({snapId,val});
        }
    }

    int snap()
    {
        return snapId++;
    }

    int get(int index,int snap_id)
    {
        vector<pair<int,int>> &vec=arr[index];

        int low=0;
        int high=vec.size()-1;
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(vec[mid].first<=snap_id)
            {
                ans=vec[mid].second;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};