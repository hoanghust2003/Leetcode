class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int x=subarrayunderK(nums, k);
        int y= subarrayunderK(nums, k - 1);
        return (x - y) ;
    }
    int subarrayunderK(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        int ans = 0;
        int l = 0, r = 0;
        while (r<nums.size()) {
            myMap[nums[r]]++;
            while (myMap.size() > k) {
                myMap[nums[l]]--;
                if (myMap[nums[l]]== 0) myMap.erase(nums[l]);
                l++;
            }

            ans += (r - l + 1);
            r++;
        }
        return ans;
    }
};