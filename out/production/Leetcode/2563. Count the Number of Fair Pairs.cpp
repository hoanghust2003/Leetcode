class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        std::sort(nums.begin(),nums.end());

        long long count = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i]>upper/2) break;

            int left_bound = lower - nums[i];
            int right_bound = upper - nums[i];

            auto lower_it = std::lower_bound(nums.begin() + i + 1,nums.end(),left_bound);
            auto upper_it = std::upper_bound(nums.begin() + i + 1,nums.end(),right_bound);

            count += upper_it - lower_it ;
        }

        return count;
    }
};