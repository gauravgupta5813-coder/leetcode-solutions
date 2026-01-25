int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int result[accountsSize];
    for (int i=0; i<accountsSize; i++){
        int sum=0;
        for(int j=0; j < *accountsColSize; j++){
           sum += accounts[i][j];
        }
        result[i] = sum;
    }
    int max=result[0];
    for(int i=0; i<accountsSize; i++){
        if(result[i]>max){
            max = result[i];
        }
    }
    return max;
}
