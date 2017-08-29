/**
    Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

    The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

    You may assume that each input would have exactly one solution and you may not use the same element twice.

    Input: numbers={2, 7, 11, 15}, target=9
    Output: index1=1, index2=2

    @author zsb
 */

#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target) {
    vector<int> res(2, 0);

    int front = 0, back = numbers.size() - 1;

    while (front < back) {
        int sum = numbers[front] + numbers[back];
        if (sum < target)
            front++;
        else if (sum > target)
            back--;
        else {
            res[0] = front + 1;
            res[1] = back + 1;
            break;
        }
    }
    return res;
}

