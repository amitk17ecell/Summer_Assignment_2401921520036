#include <bits/stdc++.h>
using namespace std ;
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
} ;

class Solution 
{
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* prev = NULL;
        ListNode* curr = head ;

        while (curr) 
        {
            ListNode* nextNode = curr->next; 
            curr->next = prev  ;              
            prev = curr ;      
            curr = nextNode ;
        }
        return prev ;
    }
} ;
void printList(ListNode* head) 
{
    while (head) 
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
ListNode* createList() 
{
    ListNode* head = new ListNode(1) ;
    head->next = new ListNode(2)  ;
    head->next->next = new ListNode(3) ;
    head->next->next->next = new ListNode(4) ;
    head->next->next->next->next = new ListNode(5) ;
    return head ;
}

int main() 
{
    Solution sol ;
    ListNode* head = createList();
     cout << "Original List: " ;
    printList(head)   ; 
    ListNode* reversed = sol.reverseList(head) ;
    cout << "Reversed List: ";
    printList(reversed);
    return 0;
}
