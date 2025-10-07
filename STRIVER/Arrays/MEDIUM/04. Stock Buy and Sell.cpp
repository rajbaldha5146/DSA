#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int minPrice = prices[0]; // track minimum price so far
        int maxProfit = 0;        // track max profit

        for (int i = 1; i < n; i++)
        {
            int profit = prices[i] - minPrice; // profit if sold today
            maxProfit = max(maxProfit, profit);
            minPrice = min(minPrice, prices[i]); // update min price
        }

        return maxProfit;
    }
};

int main()
{
    Solution obj;
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit: " << obj.maxProfit(prices) << endl;

    return 0;
}
