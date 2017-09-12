//
// Created by zsb on 2017/9/12.
// 3. Longest Substring Without Repeating Characters
// Given a string, find the length of the longest substring without repeating characters.
//
// Examples:
//
//        Given "abcabcbb", the answer is "abc", which the length is 3.
//
// Given "bbbbb", the answer is "b", with the length of 1.
//
// Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
//

#include <iostream>
#include <string>

using namespace std;

/**
 * http://blog.csdn.net/feliciafay/article/details/16895637
 * @param s
 * @return
 */
int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int maxLen = 0, culLen = 0;

    bool exist[256] = {false}; // 子串中某字符是否已存在
    int i=0, j=0; // i是候选字符串的起点，j是候选字符串的终点

    while(j<n) {
        if(!exist[s[j]]) {
            exist[s[j]] = true; //标记字符存在
            j++;
        } else {
           while (s[i] != s[j]) {
               exist[s[i]] = false; //将新的i之前的都标位false
               i++;
           }
            i++; //子串中重复字符第一次出现的位置
            j++;
        }

        culLen = j - i;
        maxLen = maxLen > culLen ? maxLen : culLen;
    }

    return maxLen;
}

int main() {
    cout<<lengthOfLongestSubstring("abcabcbb")<<endl;
    return 0;
}
