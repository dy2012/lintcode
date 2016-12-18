#include <iostream>

using std::cout;
using std::endl;

class ListNode {
 public:
  int val;
  ListNode* next;
  ListNode(int val) {
    this->val = val;
    this->next = NULL;
  }
};

class Solution {
 public:
  ListNode* DeleteDuplicates(ListNode* root) {
    ListNode* tmp = root;
    while (tmp != NULL && tmp->next != NULL) {
      if (tmp->val == tmp->next->val) {
        ListNode* temp = tmp->next;
        tmp->next = tmp->next->next;
        continue;
      }
      tmp = tmp->next;
    }
    return root;
  }
};

int main() {
  ListNode* head_node(new ListNode(1));
  ListNode* second_node(new ListNode(2));
  ListNode* third_node(new ListNode(2));
  ListNode* forth_node(new ListNode(2));
  ListNode* fifth_node(new ListNode(2));
  head_node->next = second_node;
  second_node->next = third_node;
  third_node->next = forth_node;
  forth_node->next = fifth_node;

  Solution solution;
  auto res_node = solution.DeleteDuplicates(head_node);
  while(res_node != NULL) {
    cout << res_node->val << endl;
    res_node = res_node->next;
  }
  return 0;
}
