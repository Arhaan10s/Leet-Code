class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int sum=amount;
        int N=coins.size();
        vector<vector<int>> dp(N + 1, vector<int>(sum + 1, 0));
                                       //UNBOUNDED KNAPSACK
        for(int i=0;i<=sum;i++)
        {
            if(i%coins[0]==0)
            {
                dp[0][i]=i/coins[0];
            }
            else
            {
                dp[0][i]=INT_MAX-1;
            }
        }
        for(int i=1;i<N;i++)
        {
            for(int j=0;j<=sum;j++)
            {
               int not_take = 0 + dp[i - 1][j];
                int take = INT_MAX;

                if (coins[i] <= j)
                {
                    take = 1 + dp[i][j-coins[i]];
                }

                 dp[i][j] = min(take, not_take);
            }
        }
        return (dp[N-1][sum]>=INT_MAX-1)?-1:dp[N-1][sum];
    }
};