#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
}  ;   
ListNode* removeNthFromEnd(ListNode* head, int n) 
{
    ListNode dummy(0);
    dummy.next = head;
    ListNode* first = &dummy;
    ListNode* second = &dummy;
    for (int i = 0; i <= n; i++)  
    {
        first = first->next;
    }
    while (first != nullptr) 
    {
        first = first->next;
        second = second->next;
    }

    return  dummy.next;
}
void printList(ListNode* head) {
    while (head) {
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
    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() 
{
    int arr[] = {1 , 2 , 3 , 4, 5};
    int n = 2; 
    ListNode* head = createList(arr, 5)    ;
    cout << "Original List: " ;
    printList(head)   ;
    head = removeNthFromEnd(head, n) ;
    cout << "After Removing " << n << "th Node from End: "  ;  
    printList(head)  ;  
    return 0 ;


}
