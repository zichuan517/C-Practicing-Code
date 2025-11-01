#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_string(char* str){
    int len = strlen(str);

    char* reverse = (char*)malloc(len*sizeof(int)+1);
    if (reverse == NULL){
        return NULL;
    }

    for (int i=0; i<len; i++){
        reverse[i] = str[len-i-1];
    }
    reverse[len] = '\0';

    return reverse;
}

int main(){
    char* original = "Hello, World!";
    char* reversed = reverse_string(original);
    
    if (reversed != NULL) {
        printf("original: %s\n", original);
        printf("reversed: %s\n", reversed);
        
        free(reversed);
    }
}