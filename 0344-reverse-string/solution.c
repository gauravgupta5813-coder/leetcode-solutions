void reverseString(char* s, int sSize) {
    char stack[sSize];
    int top = -1;

    for(int i=0; i<sSize; i++){
        stack[++top] = s[i]; 
    }
    for(int i = 0; i < sSize; i++) {
        s[i] = stack[top--];
    }
}
