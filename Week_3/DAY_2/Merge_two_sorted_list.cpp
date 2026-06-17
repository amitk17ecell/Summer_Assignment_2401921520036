#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummy(0); // dummy node to simplify handling
    ListNode* tail = &dummy;
    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = (l1 ? l1 : l2);

    return dummy.next;
}
void printList(ListNode* head) 
{
    while (head) 
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
ListNode* createList(int arr[], int n) 
{
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; i++) 
    {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() 
{
    int arr1[] = {1, 2, 4};
    int arr2[] = {1, 3, 4};

    ListNode* l1 = createList(arr1, 3);
    ListNode* l2 = createList(arr2, 3);

    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l2) ;
    ListNode* merged = mergeTwoLists(l1, l2) ;
    cout << "Merged List: " ;  
    printList(merged );
    return 0 ;
}
