    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
        long long ans = 0; // Initialize the result
    for (int i = 0; i < 32; i++) // Iterate through each bit position (assuming a 32-bit integer)
    {
        long long countSetBits = 0; // Count of set bits at this position
        for (int j = 0; j < n; j++)
        {
            if (arr[j] & (1 << i))
            {
                countSetBits++;
            }
        }
        // Calculate the XOR sum contribution for this bit position
        // Formula: (countSetBits) * (n - countSetBits) * (2^i)
        ans += (countSetBits * (n - countSetBits) * (1LL << i));
    }
    return ans;
    }
