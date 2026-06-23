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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        // I'm assuming at this point that list1's and list2's contents are in node form already.

        // make an output list, list0, to hold the both values for when both have values.
        ListNode list0(0);
        ListNode* tail0 = &list0;


        // check if there is no values in both list1 and list2
        if(list1 == nullptr  && list2 == nullptr) // tried checking if val is 0, NULL and nullptr to see if empty. It raised errors. 
        {                                         // to really check if empty, just set the list varaible to nullptr. NOT THE val variable belong to it.
            return {};                            
        }
        else if(list1 != nullptr && list2 == nullptr)
        {
            return list1;
        }
        else if(list1 == nullptr && list2 != nullptr)
        {
            return list2;
        }
        else
        {
            while(list1 && list2)
            {
                // if list 1 has the smaller value, do this
                if(list1->val <= list2->val)
                {
                    tail0->next = list1;
                    list1 = list1->next;
                }
                // otherwise, list 2 has the smaller value and do this
                else
                {
                    tail0->next = list2;
                    list2 = list2->next;
                }
                // address of list 0 get the next node when done
                tail0 = tail0->next;
            }
            // for the remaing values of that were teh same value
            if(list1 != nullptr)
            {
                tail0->next = list1;
            }
            else
            {
                tail0->next = list2;
            }
        }

        return list0.next;

    }
};