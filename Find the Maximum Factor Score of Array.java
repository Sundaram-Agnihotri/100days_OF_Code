class Solution {
    public long maxScore(int[] arr) {
        int len = arr.length;

        long gcdTotal = arr[0];
        long lcmTotal = arr[0];

        for (int i = 1; i < len; i++) {
            gcdTotal = findGCD(gcdTotal, arr[i]);
            lcmTotal = findLCM(lcmTotal, arr[i]);
        }

        long result = gcdTotal * lcmTotal;

        for (int i = 0; i < len; i++) {
            long currGCD = -1;
            long currLCM = 1;

            for (int j = 0; j < len; j++) {
                if (i == j) continue;

                currGCD = (currGCD == -1) ? arr[j] : findGCD(currGCD, arr[j]);
                currLCM = findLCM(currLCM, arr[j]);
            }

            result = Math.max(result, currGCD * currLCM);
        }

        return result;
    }

    private long findGCD(long x, long y) {
        return (y == 0) ? x : findGCD(y, x % y);
    }

    private long findLCM(long x, long y) {
        return (x / findGCD(x, y)) * y;
    }
}
