/*
 * 2020-08-31
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include "list.h"
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;

        while (head != NULL) {
            res.push_back(head->val);
            head = head->next;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    ListNode* node1 = create_list_node(1);
    ListNode* node2 = create_list_node(3);
    ListNode* node3 = create_list_node(2);
    connect_list_nodes(node1, node2);
    connect_list_nodes(node2, node3);
    print_list(node1);

    Solution solu;
    vector<int> res = solu.reversePrint(node1);
    for (int i=0; i<res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}
