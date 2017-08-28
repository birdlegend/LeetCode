/**
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.

 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * Example:
 * Given nums = [2, 7, 11, 15], target = 9,
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 *
 * @link https://leetcode.com/problems/two-sum/description/
 * @author zsb
 */


#include <vector>
#include <iostream>
#include <map>

using namespace std;

/**
 * 暴力法, 时间复杂度O(n^2)
 * @param nums
 * @param target
 * @return
 */
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> result;

    for(int i=0; i<n-1; i++)
        for (int j = i+1; j < n; ++j) {
            if(nums[i] + nums[j] == target) {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
            }
        }
    return result;
}

/**
 * @link http://www.cnblogs.com/stevencooks/p/4068004.html
 * @param nums
 * @param target
 * @return
 */
vector<int> twoSum2(vector<int>& nums, int target) {
    int n = nums.size();
    map<int, int> index;
    vector<int> result;

    for(int i = 0; i< n; i++)


    return result;
}
