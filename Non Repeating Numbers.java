class Solution
{
    public int[] singleNumber(int[] arr)
    {
        // Code here
        Arrays.sort(arr);

        int[] result = new int[2];
        int index = 0;

        for (int i = 0; i < arr.length - 1; i += 2) {
            if (arr[i] != arr[i + 1]) {
                result[index++] = arr[i];
                i--;
            }
        }

       
        if (index == 1 && arr[arr.length - 1] != result[0]) {
            result[1] = arr[arr.length - 1];
        }

      
        return result;

    }
}
