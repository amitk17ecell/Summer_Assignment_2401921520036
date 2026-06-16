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
    bool hasCycle(ListNode *head) 
    {
        if (!head || !head->next) return false ;

        ListNode* slow = head ;
        ListNode* fast = head  ;

        while (fast && fast->next) 
        {
            slow = slow->next   ;           
            fast = fast->next->next ;     
            if (slow == fast) return true ;  
        }
        return false ;
    }
}   ;
ListNode* createListWithCycle(bool makeCycle) {
    ListNode* head = new ListNode(3);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(0);
    ListNode* fourth = new ListNode(-4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    if (makeCycle) 
    {
        fourth->next = second   ; 
    }

    return head;
}

int main() {
    Solution sol;
    ListNode* cycleList = createListWithCycle(true);
    cout << "Cycle detected? " << (sol.hasCycle(cycleList) ? "Yes" : "No") << endl;
    ListNode* noCycleList = createListWithCycle(false);
    cout << "Cycle detected? " << (sol.hasCycle(noCycleList) ? "Yes" : "No") << endl;

    return 0;
}
