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
#include <unordered_map>

using namespace std;

/**
 * 暴力法,
 * @complex 时间复杂度O(n^2)
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
 * 使用map存储索引，key存储target-num值，而value存该num的index。
 * @complex 时间复杂度O(n)
 * @link http://www.cnblogs.com/stevencooks/p/4068004.html
 * @link https://segmentfault.com/a/1190000006697526
 * @param nums
 * @param target
 * @return
 */
vector<int> twoSum2(vector<int>& nums, int target) {
    int n = nums.size();
    map<int, int> map1;  // key存储target-num值，而value存该num的index
    vector<int> result;

    for(int i = 0; i< n; i++) {
        int key = nums[i];

        if(map1.count(key) > 0) {
            result.push_back(map1[key]);
            result.push_back(i);
            return result;
        } else {
            map1[target-key] = i;
        }

    }

    return result;
}


/**
 * 使用C++11的智能指针和unordered_map，效率比twoSum2高很多。
 * 使用unordered_map存储索引，key存储target-num值，而value存该num的index。
 * @complex 时间复杂度O(n)
 * @link http://www.cnblogs.com/stevencooks/p/4068004.html
 * @link https://segmentfault.com/a/1190000006697526
 * @param nums
 * @param target
 * @return
 */
vector<int> twoSum3(vector<int>& nums, int target) {
//    int n = nums.size();
//    auto map = unordered_map<int, int>();
//    auto result = vector<int>();
//
//    for(int i=0; i<n; i++) {
//        map[nums[i]] = i;
//    }
//
//    for (int j = 0; j < n; ++j) {
//        int key = target-nums[j];
//        if(map.count(key) > 0) {
//            int idx = map[key];
//            if(idx != j) {
//                result.push_back(j);
//                result.push_back(idx);
//                return result;
//            }
//        }
//    }
//
//    return result;

    auto map = unordered_map<int, int>();

    auto res = vector<int>();
    for (int i = 0; i < nums.size(); i++)
    {
        map[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        auto it = map.find(target - nums[i]);

        if (it != map.end() && it->second != i)
        {
            res.push_back(i);
            res.push_back(it->second);

            return res;
        }

    }

    return res;

}

