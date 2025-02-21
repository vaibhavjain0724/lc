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

        vector<int> nums;
        
        while(list1 != nullptr){
            nums.push_back(list1-> val);
            list1 = list1 -> next;
        }
        while(list2 != nullptr){
            nums.push_back(list2 -> val);
            list2 = list2 -> next;
        }
        ListNode* ans = nullptr;
        ListNode* curr = nullptr;
        int i = 0;
        sort(nums.begin(),nums.end());
        while(i < nums.size()){
            ListNode* temp = new ListNode(nums[i]);
            if(ans == nullptr){
                ans = temp;
                curr = ans;
            }
            else{
                curr -> next = temp;
                curr = curr -> next;
            }
            i++;
        }
        return ans;

        
        

    }
};