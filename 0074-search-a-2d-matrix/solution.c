bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int row = matrixSize;
    int col = *matrixColSize;
    int low = 0, high = row * col - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        int r = mid / col;
        int c = mid % col;

        if(matrix[r][c] == target)
            return 1;
        else if(matrix[r][c] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}
