class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int leastPrice = INT_MAX;
        int maxProfit = 0;
        
        for(int i=0;i<prices.size();++i){
          leastPrice = min(leastPrice, prices[i]);
          maxProfit = max(maxProfit, prices[i]-leastPrice);
        }
    return maxProfit;
    }
};