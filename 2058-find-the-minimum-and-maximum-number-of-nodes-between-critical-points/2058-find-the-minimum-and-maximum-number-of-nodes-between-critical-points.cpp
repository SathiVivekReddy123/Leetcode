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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ind;
        ListNode* pr=head,*temp;
        if(head->next!=NULL) temp=head->next;
        int cnt=2;
        while(temp->next!=NULL){
            if(temp->val>pr->val && temp->val>temp->next->val) ind.push_back(cnt);
            else if(temp->val<pr->val && temp->val<temp->next->val) ind.push_back(cnt);
            pr=temp;
            temp=temp->next;
            cnt++;
        }
        int n=ind.size();
        if(n<2) return {-1,-1};
        int mn=INT_MAX,mx=ind[n-1]-ind[0];
        for(int i=1;i<n;i++){
            mn=min(mn,ind[i]-ind[i-1]);
        }
        return {mn,mx};
    }
};