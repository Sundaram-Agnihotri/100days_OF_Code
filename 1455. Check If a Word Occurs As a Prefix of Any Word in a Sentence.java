class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        // form an array
        String words[] = sentence.split(" ");
        int m = searchWord.length();
        int n = words.length;
        for(int i=0;i<n;i++){
            if(words[i].length()>= searchWord.length()){
                if(words[i].substring(0,m).equals(searchWord)){
                    return i+1;
                }
            }
        }
        return -1;
    }
}
