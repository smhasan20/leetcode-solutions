class Solution {
public:
    bool canJump(vector<int>& nums) {
       if(nums[0]==0 and nums.size()==1)
       {
        return true;
       }
        if(nums[0]==0)
        {
            return false;

        }

        int mx=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            if(mx==0)
            {
                return false;
            }
            else
            {
                mx=max(mx-1,nums[i]);
            }
        }

        return true;
        
    }
};
