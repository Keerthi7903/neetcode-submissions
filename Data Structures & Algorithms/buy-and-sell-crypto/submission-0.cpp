class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=prices[0];
        for(int i:prices){
            maxi=max(maxi,i-mini);
            mini=min(mini,i);
        }
        return maxi;
    }
};
