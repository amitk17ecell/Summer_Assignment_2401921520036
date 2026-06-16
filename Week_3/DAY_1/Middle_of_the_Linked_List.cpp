#include <bits/stdc++.h>
using namespace std ;
struct ListNode {
    int val ;
    ListNode *next ;
    ListNode(int x) : val(x), next(NULL) {}
}  ;
class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* slow = head ; 
        ListNode* fast = head ;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
void printList(ListNode* head) 
{
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
ListNode* createList() 
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    return head;
}

int main() 
{
    Solution sol ;
    ListNode* head = createList();
    cout << "Original List: ";
    printList(head)  ;
    ListNode* middle = sol.middleNode(head);

    cout << "Middle Node Value: " << middle->val << endl;

    return 0;
}
