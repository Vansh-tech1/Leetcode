class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        vector<int> temp;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }
        for (int j = 0; j < temp.size(); j++) {

            nums[j] = temp[j];
        }
        // cout << temp.size();

        for (int k = temp.size(); k < nums.size(); k++) {
            nums[k] = 0;
        }
    }
};