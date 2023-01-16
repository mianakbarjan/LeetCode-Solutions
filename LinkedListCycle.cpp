    #include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
     //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
    
    bool hasCycle(ListNode *head) {
        if (head==nullptr){
            return false;
        }
        else {
            ListNode *fast = head;
            ListNode *slow = head;
            while (fast!=nullptr && fast->next!=nullptr){
                fast = fast->next->next;
                slow = slow->next;
                if (fast==slow){
                    return true;
                }
                
            }
            return false;
        }

    }