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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count  = 1;
        if(head == nullptr){
            return head;
        }
        if(head -> next == nullptr){
            head = nullptr;
            return head;
        }
        while(temp -> next != nullptr){
            temp = temp -> next;
            count  = count + 1;
        }
        temp = head;
        int c = 1;
        if(n == count){
            head = head -> next;
        }
        else{
            while(c < count - n){
                temp = temp -> next;
                c++;
            }
        }
        temp -> next = temp-> next -> next;
        return head;
    }
};