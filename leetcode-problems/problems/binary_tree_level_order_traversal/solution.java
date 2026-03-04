 /**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> al = new ArrayList<>();
        if(root==null)
        {
            return al;
        }
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty())
        {
            List<Integer> al1 = new ArrayList<>();
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode p1 = q.poll();
                al1.add(p1.val);
                if(p1.left!=null)
                {
                    q.offer(p1.left);
                }
                if(p1.right!=null)
                {
                    q.offer(p1.right);
                }
            }
            al.add(al1);

        }
        return al;
    }
}