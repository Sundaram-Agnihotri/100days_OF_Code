class Solution {
    public int longestkSubstr(String s, int k) {
        // code here
        int j =0, i =0; 
        HashMap<Character, Integer> map = new HashMap<>();
        int max = -1;
        while (j<s.length()){
            map.put(s.charAt(j),map.getOrDefault(s.charAt(j), 0)+1 );
            
            
            while (map.size()>k){
            map.put(s.charAt(i),map.getOrDefault(s.charAt(i), 0)-1 );
                if (map.get(s.charAt(i))==0){
                    map.remove(s.charAt(i));
                }
                i++;
            }
            if (map.size()==k){
                max = Math.max(max, j-i+1);
            }
            j++;
        }
        return max;
    }
}
