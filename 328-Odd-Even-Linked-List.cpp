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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr){
            return head;
        }
        ListNode* temp = head;
        vector<int> data;
        while(temp!= nullptr && temp -> next != nullptr){
            data.push_back(temp -> val);
            temp = temp -> next -> next;
            
        }
        if(temp != nullptr){
            data.push_back(temp -> val);

        }
        // data.push_back(temp -> next -> val);
        temp  = head -> next;
        while(temp!= nullptr && temp -> next != nullptr){
            data.push_back(temp -> val);
            temp = temp -> next -> next;
        }
        if(temp != nullptr){
            data.push_back(temp -> val);

        }
        
        // data.push_back(temp -> next -> val);
        int i = 0;
        temp = head;
        while(temp!= nullptr){
            temp -> val = data[i];
            temp  = temp -> next;
            i++;
        }
        return head;
        
    }
};