/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        if(head==null||head.next==null)
        {
            return null;
        }
        ListNode n = head;
        int length =0;
        while(n!=null)
        {
            length++;
            n=n.next;
        }
        int mid = (length/2);
        ListNode m = head;
        ListNode h= m;
        for(int i=0;i<mid;i++)
        {
            h=m;
           m=m.next; 
        }
        h.next=m.next;
        return head;
    }
}