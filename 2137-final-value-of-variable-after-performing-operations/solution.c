int finalValueAfterOperations(char** operations, int operationsSize) {
    int X = 0;
    for(int i=0; i < operationsSize; i++){
        if(strcmp(operations[i],"++X")==0 || strcmp(operations[i],"X++")==0){
           X += 1;
        }
        else {
            X -= 1;
        }
    }
    return X;
}
