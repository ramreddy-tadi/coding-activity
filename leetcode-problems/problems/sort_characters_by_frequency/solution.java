class Solution {
    public String frequencySort(String s) {
        HashMap<Character,Integer> hm = new HashMap<>();
        for(int i=0;i<s.length();i++)
        {
            hm.put(s.charAt(i),hm.getOrDefault(s.charAt(i),0)+1);
        }
        ArrayList<Character>al=new ArrayList<>(hm.keySet());
        Collections.sort(al,(a,b)->hm.get(b)-hm.get(a));
        StringBuilder sb = new StringBuilder();
        for(char ch:al)
        {
            for(int i=0;i<hm.get(ch);i++)
            {
                sb.append(ch);
            }
        }
        return sb.toString();
    }
}