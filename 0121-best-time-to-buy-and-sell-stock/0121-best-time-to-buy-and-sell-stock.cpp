class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int x=0;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=prices.size()-1;j>i;j--){
        //         if(prices[j]-prices[i]>x){
        //             x=prices[j]-prices[i];
        //         }
        //     }
        // }
        // return x;



        // The above method is brute force 

        int buy=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            buy=min(buy,prices[i]);
            profit=max(profit,prices[i]-buy);
        }
        return profit;
    }
};