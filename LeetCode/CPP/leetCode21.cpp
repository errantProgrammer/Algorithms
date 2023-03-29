/**
 * 21. Merge Two Sorted Lists
 * https://leetcode.com/problems/merge-two-sorted-lists/
 * Esta solución se puede realizar de forma iterativa
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        // Comparamos hasta que uno de las 2 lista este vacia
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val < list2->val){
                ListNode *newNode = new ListNode(list1->val);
                temp-> next = newNode;
                temp = temp->next;
                list1 = list1->next;
            }else{
                ListNode *newNode = new ListNode(list2->val);
                temp-> next = newNode;
                temp = temp->next;
                list2 = list2->next;
            }
        }
        // Si acabo la lista 2, pero todavía sigue la lista1
        while(list1 != nullptr){
            ListNode *newNode = new ListNode(list1->val);
            temp-> next = newNode;
            temp = temp->next;
            list1 = list1->next;
        }
        // Si acabo la lista 1, pero todavía sigue la lista2
        while(list2 != nullptr){
            ListNode *newNode = new ListNode(list2->val);
            temp-> next = newNode;
            temp = temp->next;
            list2 = list2->next;
        }
        return dummy->next;
    }
};
