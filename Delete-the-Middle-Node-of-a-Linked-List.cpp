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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head -> next == nullptr){
            return nullptr;
        }
        ListNode* temp = head;
        int count = 1;
        while(temp != nullptr){
            temp  = temp -> next;
            count++;
        }
        int mid;
        if(count%2 ==0){
        mid = count/2;
        }
        else{
            mid = count/2 + 1;
        }
        temp = head;
        count = 1;
        if(mid == 1){
            head = head -> next;
            return head;
        }
        while(count < mid){
            if(count == mid-1){
                temp -> next= temp -> next -> next;
            }
            else{
                temp = temp -> next;
            }
            count++;
        }
        return head;
    }
};