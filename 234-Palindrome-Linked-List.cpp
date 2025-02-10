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
    bool isPalindrome(ListNode* head) {
        ListNode* temp  = head;
        vector<int> v;
        while(temp != nullptr){
            v.push_back( temp -> val);
            temp = temp -> next;
        }
        int st = 0; 
        int e = v.size() -1;
        while(st <= e){
            if(v[st] != v[e]){
                return false;
            }
            st++;
            e--;

        }

        return true;
    }
};