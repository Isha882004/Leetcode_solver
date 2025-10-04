class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int ans = 0;

        while (left < right) {
            // Calculate area between left and right
            int area = (right - left) * min(height[right], height[left]);
            ans = max(ans, area);

            // Move the smaller height inward (to try for a taller line)
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return ans;
    }
};
