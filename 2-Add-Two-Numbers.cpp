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
    // ListNode* reverse(ListNode* &head){
    //     ListNode* curr = head;
    //     ListNode* prev = nullptr;
    //     ListNode* nextt = nullptr;

    //     while(curr != nullptr){
    //         nextt = curr -> next;
    //         curr -> next = prev;
    //         prev = curr;
    //         curr = nextt;
    //     }
    //     return prev;
    // }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode* res = nullptr;
        // ListNode* curr = nullptr;

        // int carry = 0;
        // int sum = 0;
        


        // while(l1 != nullptr || l2 != nullptr || carry!= 0){
        //     int sum = carry;

        //     if(l1 != nullptr){
        //         sum = sum + l1 -> val;
        //         l1 = l1 -> next;
        //     }
        //     if(l2 != nullptr){
        //         sum = sum + l2 -> val;
        //         l2 = l2 -> next;
        //     }
        //     // if(carry != 0){
        //     //     sum = sum+ carry;
        //     // }
        //     ListNode* newnode  =new ListNode(sum%10);

        //     carry = sum / 10;

        //     if(res == nullptr){
        //         res = newnode;
        //         curr = newnode;
        //     }
        //     else{
        //         curr -> next = newnode;
        //         curr = curr -> next;
        //     }
        // }
        // return res;







        // ListNode* result= nullptr;
        // ListNode* current= nullptr;

        // int sum =0;
        // int carry =0; 
        // while(l1 != nullptr || l2 != nullptr || carry != 0){
        //     sum = 0;
        //     if(l1 != nullptr){
        //         sum = sum + l1 -> val;
        //         l1 = l1 -> next;
        //     }
        //     if(l2 != nullptr){
        //         sum = sum + l2 -> val;
        //         l2 = l2 -> next;
        //     }
        //     if(carry != 0){
        //         sum = sum + carry;
        //         carry = 0;
        //     }
        //     carry = sum/10;
        //     ListNode* temp = new ListNode(sum%10);
        //     if(result == nullptr){
        //         result = temp;
        //         current = temp;
        //     }
        //     else{
        //         current -> next = temp;
        //         current = current -> next;
        //     }
        // }
        // return result;












        // int sum = 0;
        // int carry = 0;
        // ListNode* result = nullptr;
        // ListNode* current = nullptr;


        // while(carry != 0 || l1 != nullptr || l2 != nullptr){
        //     sum = 0;
        //     if(l1 != nullptr){
        //         sum += l1 -> val;
        //         l1 = l1 -> next;
        //     }
        //     if(l2 != nullptr){
        //         sum += l2 -> val;
        //         l2 = l2 -> next;

        //     }
        //     if(carry != 0){
        //         sum += carry;
        //     }
        //     ListNode* temp = new ListNode(sum%10);
        //     carry = sum /10;

        //     if(result == nullptr){
        //         result = temp;
        //         current = temp;
        //     }
        //     else{
        //         current -> next = temp;
        //         current = current -> next;
        //     }            
        // }
        // return result;







        int sum  = 0;
        int carry = 0;
        ListNode* ans = nullptr;
        ListNode* curr = nullptr;
        while(carry != 0 || l1 != nullptr || l2 != nullptr){
            sum = 0;
            if(l1 != nullptr){
                sum = sum + l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != nullptr){
                sum = sum + l2 -> val;
                l2 = l2 -> next;
            }
            if(carry != 0){
                sum = sum + carry;
            }
            ListNode* temp = new ListNode(sum%10);
            carry = sum/10;
            
            if(ans == nullptr){
                ans = temp;
                curr =temp;
            }
            else{
                curr -> next = temp;
                curr = curr -> next;
            }
        
        }
        return ans;




    }
};