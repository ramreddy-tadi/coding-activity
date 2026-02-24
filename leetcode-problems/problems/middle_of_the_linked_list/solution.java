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
    public ListNode middleNode(ListNode head) {
        ListNode n = head;
        int length =0;
        while(n!=null)
        {
            length++;
            n=n.next;
        }
        int mid = (length/2);
        ListNode m = head;
        for(int i=0;i<mid;i++)
        {
           m=m.next; 
        }
        return m;
    }
}