#include <string.h>
#include <stdlib.h>
char* reversePrefix(char* word, char ch) {
    int n = strlen(word);
    int index = -1;
    for(int i=0; i<n; i++){
        if(word[i] == ch){
            index = i;
            break;
        }
    }
    char *result = (char*)malloc(n+1 * sizeof(char));
    if (index == -1) {
        strcpy(result, word);
        return result;
    }
    for(int i=0; i<=index; i++){
        result[i] = word[index-i];
    }
    for (int i = index + 1; i < n; i++) {
        result[i] = word[i];
    }
    result[n] = '\0';
    return result;
}
