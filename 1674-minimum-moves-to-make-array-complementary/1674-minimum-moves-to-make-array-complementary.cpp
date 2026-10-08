class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {

        int n = nums.size();

        vector<int> diff(2 * limit + 2, 0);

        for (int i = 0; i < n / 2; i++) {

            int a = nums[i];
            int b = nums[n - 1 - i];

            if (a > b)
                swap(a, b);

            // Initially, every target sum requires 2 moves
            diff[2] += 2;
            diff[a + 1] -= 1;
            diff[a + b] -= 1;
            diff[a + b + 1] += 1;
            diff[b + limit + 1] += 1;
        }

        int moves = 0;
        int ans = INT_MAX;

        for (int target = 2; target <= 2 * limit; target++) {

            moves += diff[target];

            ans = min(ans, moves);
        }

        return ans;
    }
};

