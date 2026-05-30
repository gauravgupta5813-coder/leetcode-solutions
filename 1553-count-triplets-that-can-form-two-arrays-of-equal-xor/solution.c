int countTriplets(int* arr, int arrSize) {
    int count = 0;
    for(int i=0; i<arrSize; i++){
        for(int j=i+1; j<arrSize; j++)
        {
            int a=0;
            for(int p=i; p<j; p++){
                a^=arr[p];
            }
            int b=0;
            for(int p=j; p<arrSize; p++){
                b^=arr[p];
                if(a==b) count++;
            }
        }
    }
    return count;
}
