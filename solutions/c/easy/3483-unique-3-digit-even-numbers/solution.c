int totalNumbers(int* digits, int digitsSize) {
    int freq[10] = {0};
    for (int i = 0; i < digitsSize; i++) 
    {
        freq[digits[i]]++;
    }

    int count = 0;

    for (int num = 100; num < 1000; num += 2) 
    {
        int d1 = num / 100;
        int d2 = (num / 10) % 10;
        int d3 = num % 10;

        int needed[10] = {0};
        needed[d1]++;
        needed[d2]++;
        needed[d3]++;

        if (needed[d1] <= freq[d1] && needed[d2] <= freq[d2] && needed[d3] <= freq[d3]) 
        {
            count++;
        }
    }

    return count;
}
