class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int n1 = nums[i];
                int n2 = nums[j];

                if (n1 + n2 == target) {
                    vector<int> answer = {i, j};
                    return answer;
                }
            }
        }
        return {};
    }
};