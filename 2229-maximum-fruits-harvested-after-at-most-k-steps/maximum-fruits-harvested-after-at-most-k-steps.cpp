class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
      
    int n = fruits.size();
    int maxTotal = 0;
    int total = 0;
    int l = 0;

    for (int r = 0; r < n; ++r) {
        total += fruits[r][1];

        // Shrink window from left until within k steps
        while (l <= r) {
            int left = fruits[l][0];
            int right = fruits[r][0];

            int minSteps = min(
                abs(startPos - left) + (right - left),  // go left first
                abs(startPos - right) + (right - left)  // go right first
            );

            if (minSteps <= k) break;

            total -= fruits[l][1];
            l++;
        }

        maxTotal = max(maxTotal, total);
    }

    return maxTotal;

    }
};