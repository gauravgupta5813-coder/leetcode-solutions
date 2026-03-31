int findNthDigit(int n) {
    long digitLength = 1;
    long count = 9;
    long start = 1;

    // Step 1: Find the correct range
    while (n > digitLength * count) {
        n -= digitLength * count;
        digitLength++;
        count *= 10;
        start *= 10;
    }

    // Step 2: Find the exact number
    start += (n - 1) / digitLength;

    // Step 3: Find the digit index
    int index = (n - 1) % digitLength;

    // Step 4: Extract digit
    for (int i = 0; i < digitLength - index - 1; i++) {
        start /= 10;
    }

    return start % 10;
}
