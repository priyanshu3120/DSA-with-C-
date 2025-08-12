class Solution {
public:
    int M=1e9+7;
    int dp[301][301];
    int solve(int n,int num,int x)
    {
        if(n == 0) return 1;

        if(n < 0) return 0;

        int currPower=pow(num,x);
        if(currPower > n){
            return 0;
        }
        if(dp[n][num] != -1)
        {
            return dp[n][num];
        }
        int take=solve(n-currPower,num+1,x);
        int notTake=solve(n,num+1,x);

        return dp[n][num]=(take+notTake)%M;
    }
    int numberOfWays(int n, int x) {
        memset(dp,-1,sizeof(dp));
        return solve(n,1,x);
    }
};