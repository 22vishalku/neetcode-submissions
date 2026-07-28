class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int t = 0;
        int a = 0;
        int b = 0;

        for (int i = 0; i < n; i++) {
            int j = i + 1;
            a = prices[i];
            b = 0;

            while (j < n) {
                if (a <= prices[j]) {
                    b += prices[j] - a;
              a = prices[j];
                }
                   else {
        a = prices[j];   // Buy again at lower price
    }
                j++;
            }

            if (t < b)
                t = b;
        }

        return t;
    }
};