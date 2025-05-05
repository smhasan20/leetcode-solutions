class Solution {
public:
    int hIndex(vector<int>& citations) {

        int ans=0;
        int res=0;
        sort(citations.begin(),citations.end());
        int sz=citations.size();
       for(int i=1;i<=sz;i++)
       {
        int low=0;
        int high=sz-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(citations[mid]>=i)
            {
                int idx=(sz-mid);
                if(idx>=i)
                {
                    res=max(res,i);
                }
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
       }
       return res;
    }
};
