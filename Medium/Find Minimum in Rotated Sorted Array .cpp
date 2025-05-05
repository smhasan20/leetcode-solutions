class Solution {
public:
    int findMin(vector<int>& nums) {
        

        int l=0;
        int r=nums.size()-1;

        int ans=nums[0];

        while(l<=r)
        {

            int mid=(l+r)/2;
           
            ans=min(ans,nums[mid]);
            if(nums[mid]<=nums[r])
            {
                  
                   r=mid-1;
            }
            else
            {
                l=mid+1;
            }


        }
        return ans;
    }
};
