#include <bits/stdc++.h>
using namespace std;


    int stockbuySell(vector<int>& prices) {
         int minPrice = INT_MAX;

        int maxProfit = 0;
        for (int price : prices) {
            // If current price is less than minPrice, update minPrice
            if (price < minPrice) {
                minPrice = price;
            }
            // Else calculate profit and update maxProfit if it's greater
            else {
                maxProfit = max(maxProfit, price - minPrice);
            }
        }
        return maxProfit;
    }
int main() {
    
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << stockbuySell(prices) << endl;

    return 0;
}
