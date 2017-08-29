#include <iostream>

using namespace std;

/**
 *  该题为大数相加的处理
 *  @details  You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

    You may assume the two numbers do not contain any leading zero, except the number 0 itself.

    Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
    Output: 7 -> 0 -> 8
 *  @link https://leetcode.com/problems/add-two-numbers/solution/
 *  @author zsb
 */


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//struct ListNode {
//    int val;
//    ListNode *next;
//
//    ListNode(int x) : val(x), next(NULL) {}
//};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode head(0);
    ListNode *resNode = &head;
    int carry = 0; //进位

    // 如果l1和l2长度不一样，将空缺的节点值设为0。
    // 如果长度一样，但是结尾有进位，则增加一节点。
    ListNode *tmp1 = l1, *tmp2 = l2;
    while (tmp1 != NULL || tmp2 || NULL || carry > 0)  {
        // 取l1当前节点的值进行计算，如果该位置为空就设为0
        int cur1 = tmp1 ? tmp1->val : 0;
        int cur2 = tmp2 ? tmp2->val : 0;

        int res = (cur1 + cur2 + carry) % 10;
        carry = (cur1 + cur2 + carry) / 10;

        // 结果list添加node
        ListNode *node = new ListNode(res);
        resNode->next = node;
        resNode = resNode->next;

        // 取l1和l2的下一节点
        tmp1 = tmp1 ? tmp1->next : NULL;
        tmp2 = tmp2 ? tmp2->next : NULL;
    }

    return head.next;

}

