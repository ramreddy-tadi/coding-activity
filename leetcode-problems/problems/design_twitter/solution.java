import java.util.*;
class Twitter {
    HashMap<Integer,List<int[]>>tweets;
    HashMap<Integer,Set<Integer>>following;
    int time;
    public Twitter() {
        tweets=new HashMap<>();
        following=new HashMap<>();
        time=0;
    }
    
    public void postTweet(int userId, int tweetId) {
        tweets.putIfAbsent(userId,new ArrayList<>());
        tweets.get(userId).add(new int[] {time++,tweetId});
    }
    
    public List<Integer> getNewsFeed(int userId) {
        PriorityQueue<int[]>pt=new PriorityQueue<>((a,b)->b[0]-a[0]);
        if(tweets.containsKey(userId))
        {
            for(int[] twee:tweets.get(userId))
            {
                pt.offer(twee);
            }
        }
        if(following.containsKey(userId))
        {
            for(int foll:following.get(userId))
            {
                if(tweets.containsKey(foll))
                {
                    for(int[] twe:tweets.get(foll))
                    {
                        pt.offer(twe);
                    }
                }
            }
        }
        List<Integer>lt= new ArrayList<>();
        int c=0;
        while(c<10&&!pt.isEmpty())
        {
            lt.add(pt.poll()[1]);
            c++;
        }
        return lt;
        
    }
    
    public void follow(int followerId, int followeeId) {
         following.putIfAbsent(followerId,new HashSet<>());
         following.get(followerId).add(followeeId);
    }
    
    public void unfollow(int followerId, int followeeId) {
        if(following.containsKey(followerId))
        {
          following.get(followerId).remove(followeeId);
        }
    }
}

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter obj = new Twitter();
 * obj.postTweet(userId,tweetId);
 * List<Integer> param_2 = obj.getNewsFeed(userId);
 * obj.follow(followerId,followeeId);
 * obj.unfollow(followerId,followeeId);
 */