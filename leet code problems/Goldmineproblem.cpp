#include <bits/stdc++.h>
using namespace std;

// DP table to memoize results
int dp[4][4];

// Recursive function with memoization
int solve(int i, int j, vector<vector<int>> &mat) {
    int n = mat.size(), m = mat[0].size();

    if (i < 0 || i >= n || j >= m)
        return 0;

    // Return cached value
    if (dp[i][j] != -1)
        return dp[i][j];

    // Move in all 3 directions: right-up, right, right-down
    int right_up = solve(i - 1, j + 1, mat);
    int right = solve(i, j + 1, mat);
    int right_down = solve(i + 1, j + 1, mat);

    return dp[i][j] = mat[i][j] + max({right_up, right, right_down});
}

void print(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main() {
    vector<vector<int>> mat = {
        {1, 3, 1, 5},
        {2, 2, 4, 1},
        {5, 0, 2, 3},
        {0, 6, 1, 2}
    };

    int n = mat.size();
    memset(dp, -1, sizeof(dp));

    int max_gold = 0;

    // Start from any row in the first column
    for (int i = 0; i < n; i++) {
        max_gold = max(max_gold, solve(i, 0, mat));
    }

    cout << "Maximum gold collected: " << max_gold << endl;

    print();
    return 0;
}