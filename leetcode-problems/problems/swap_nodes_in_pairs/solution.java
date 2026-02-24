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
    public ListNode swapPairs(ListNode head) {
        if(head==null||head.next==null)
        {
            return head;
        }
        ListNode p1 = head;
        ListNode p2 = p1.next;
        while(p1.next!=null&&p2.next!=null)
        {
            int temp = p1.val;
            p1.val = p2.val;
            p2.val = temp;
            p1=p2.next;
            p2=p1.next;
        }
        if(p1.next!=null)
        {
        int temp = p1.val;
        p1.val = p2.val;
        p2.val = temp;
        }
        return head;

    }
}