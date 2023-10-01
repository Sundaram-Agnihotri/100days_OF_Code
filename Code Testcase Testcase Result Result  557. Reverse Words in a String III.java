class Solution {
    public static String reverseEveryStringInArray(String[] arr) {
    StringBuilder result = new StringBuilder();
    for (String word : arr) {
        for (int j = word.length() - 1; j >= 0; j--) {
            result.append(word.charAt(j));
        }
        result.append(" ");
    }
    result.setLength(result.length() - 1);
    return result.toString();
}

public String reverseWords(String s) {
    String[] arr = s.split(" ");
    return reverseEveryStringInArray(arr);
}

}
