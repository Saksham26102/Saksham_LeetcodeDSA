class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int bestBuy=prices[0];
        for(int i=1;i<prices.size();i++){
            for(int j=0;j<i;j++){
                bestBuy=min(bestBuy,prices[j]);
            }
            if(prices[i]>bestBuy){
                maxProfit=max(prices[i]-bestBuy,maxProfit);
            }
            
        }
            return maxProfit;
    }
};
