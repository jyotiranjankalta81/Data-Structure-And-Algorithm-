// Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// You may not alter the values in the list's nodes, only nodes themselves may be changed.

class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL || k == 1)
            return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        // create 3 dummy node
        // create a dummy node assing pre to that dummy node
        // assign next of dummy node to 1

        // take a node cur stand right next to dummy node that is the first node head
        // take another node next point to next of 1

        ListNode *cur = dummy, *nex = dummy, *pre = dummy;
        // count initialize form zero
        int count = 0;
        // count the size of linked list
        while (cur->next != NULL)
        {
            cur = cur->next;
            count++;
        }
        while (count >= k)
        {
            // cur point to previous next
            cur = pre->next;
            // nex point to cur next
            nex = cur->next;
            for (int i = 1; i < k; i++)
            {
                // cur next point to nex of next
                cur->next = nex->next;
                // nex next point to pre next
                nex->next = pre->next;
                // pre next point to nex
                pre->next = nex;
                // upgrade nex pointer by + 1 and cur next point to nex
                nex = cur->next;
            }
            pre = cur;
            count -= k;
        }
        return dummy->next;
    }
};