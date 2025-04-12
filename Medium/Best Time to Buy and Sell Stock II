class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int tot=0;
        int x=prices[0];
        bool chk=true;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            {
                profit=prices[i]-x;
                chk=true;
            }
            else
            {
                x=prices[i];
                tot+=profit;
                chk=false;
                profit=0;
            }
        }
        if(chk)
        {
            tot+=profit;
        }
        return tot;
    }
};
