#include <iostream>
#include <stack>
#include <vector>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 



bool isPalindrome(ListNode* head) {
       ListNode *temp = head;
       stack <int> s;
       if (temp == nullptr){
           return false;
       }         
       else{
           while (temp->next!=nullptr){
           s.push(temp->val);
           temp=temp->next;
           }
       }
       temp = head;
        while (!s.empty()){
            if (s.top()!=temp->val){
                return false;
            }
            else {
                temp = temp->next;
            }
        }
        return true;
    }
    int main(){
        ListNode *a;
        a->val = 1;
        ListNode *b;
        b->val = 2;
        ListNode *c;
        c->val = 2;
        ListNode *d;
        d->val = 1;
        a->next = b;
        b->next = c;
        c->next = d;
        bool x = isPalindrome(a);
    }