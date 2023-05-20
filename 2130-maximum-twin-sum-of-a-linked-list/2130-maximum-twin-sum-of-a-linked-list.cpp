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
    long long count1(ListNode* head, vector<int>& jk){
        ListNode* temp = head;
        
        long long count=0;
        while(head != NULL){
            count++;
            jk.push_back(head->val);
            head=head->next;
        }
        return count;
    }
    int pairSum(ListNode* head) {
        if(head==NULL) return 0;
        vector<int> jk;
        long long n = count1(head, jk);
       
        int max1= INT_MIN;
        int i=0;
        int j=jk.size()-1;
        while(i<j){
            int vb = jk[i]+jk[j];
            max1=max(max1,vb);
            i++;
            j--;
        }
        
//         for(int i=0;i<(n/2);i++){
//             int j=i;
//             int bn = (n-j-1);
            
            
//             ListNode* prev = head;
//             ListNode* prev1 = head;
//             while(j>0 && prev != NULL){
//                 prev=prev->next;
//                 j--;
//             }
//             while(bn>0 && prev1 != NULL){
//                 prev1=prev1->next;
//                 bn--;
//             }
//             if(prev != NULL && prev1 != NULL){
            
                    
                
//             max1 = max(max1, prev->val+prev1->val);
//             }    
            
//         }
        return max1;
    }
};