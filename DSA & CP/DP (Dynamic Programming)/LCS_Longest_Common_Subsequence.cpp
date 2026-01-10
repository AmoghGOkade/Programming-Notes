//We want to find the length of the longest common subsequence of 2 strings - longest same string when characters can be deleted from both strings (but order is the same).

int longestCommonSubsequence(string s1, string s2) 
{
    int m = s1.size(), n = s2.size();
  
    //vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    vector<vector<int>> dp;     //dp[i][j] = LCS of a string having first i letters of s1 and first j letters of s2
    vector<int> temp; 
    for (int i=0; i<=n; i++) temp.push_back(0); 
    for (int i=0; i<=m; i++) dp.push_back(temp);
    //initial conditions:- dp[i][0] = 0 and dp[0][j] = 0
  
    for (int i = 1; i <= m; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;    //if ith of s1 and jth of s2 is same:- (LCS with i, j) = (LCS without ith of s1 and jth of s2) + 1
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);      //if they are not same, drop either the ith of s1 or jth of s2; whichever gives higher LCS
        }
    }
    return dp[m][n];
}
