#include <iostream>
using namespace std;

int main()
{
    int n, w;
    //入力の受け取り
    cin >> n >> w;
    //配列の宣言
    int dp[n + 1][w + 1], w[n], v[n];

    //入力の受け取り
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }

    //dpテーブルを0で初期化
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (j < w[i]) //i番目の品物が入らないとき
            {
                dp[i + 1][j] = dp[i][j];
            }
            else
            {
                //i番目をいれないかつ重さがjだった時の価値の総和とi番目をいれて重さjになったときの価値の総和を比べて大きい方を代入。
                dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
            }
        }
    }
    return 0;
}

// for (int i = 0; i < n; i++)
// {
//     for (int j = W; j >= w[i]; j--)
//     { //i番目をいれないかつ重さがjだった時の価値の総和と、i番目をいれて重さjになったときの価値の総和を比べて大きい方を代入。
//         dp[j] = max(dp[j], dp[i][j - w[i]] + v[i]);
//     }
// }