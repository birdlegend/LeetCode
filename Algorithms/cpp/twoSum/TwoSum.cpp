//
// Created by zsb on 17/8/28.
//

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
    vector<int> result;

    for(int i=0; i<nums.size()-1; i++)
        for (int j = i+1; j < nums.size(); ++j) {
            if(nums[i] + nums[j] == target) {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
            }
        }
    return result;
}

/**
 *
 * @param nums
 * @param target
 * @return
 */
vector<int> twoSum2(vector<int>& nums, int target) {
    vector<int> result;

    for(int i=0; i<nums.size()-1; i++)
        for (int j = i+1; j < nums.size(); ++j) {
            if(nums[i] + nums[j] == target) {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
            }
        }
    return result;
}
