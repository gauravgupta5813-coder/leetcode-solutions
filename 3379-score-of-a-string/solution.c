#include<string.h>
#include<stdlib.h>
int scoreOfString(char* s) {
    int n = strlen(s);
    int res = 0;
    for(int i=0; i<n-1; i++){
        res += abs(s[i]-s[i+1]);
    }
    return res;
}
