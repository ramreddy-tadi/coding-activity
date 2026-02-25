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
    public ListNode removeNthFromEnd(ListNode head, int n) {
         if(head==null||head.next==null)
        {
            return null;
        }
        int length=1;
        ListNode h=head;
        while(h.next!=null)
        {
            length++;
            h=h.next;
        }
        int m = length - n;
        ListNode v=head;
        ListNode j=v;
        for(int i=0;i<m;i++)
        {
            j=v;
            v=v.next;
        }
        if(v==head)
        {
            head=head.next;
        }
        j.next=v.next;
        return head;
    }
}