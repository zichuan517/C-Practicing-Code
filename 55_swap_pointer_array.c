#include <stdio.h>
int main(){
    char arr[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char *ptr = arr;
    char *end;
    end = ptr + 7;

    printf("%s\n",arr);
    while (ptr < end) {
        char temp = *ptr;
        *ptr = *end;
        *end = temp;
        ptr++;
        end--;
    }
    printf("%s\n", arr);

    for(int i = 0; i < 8; i++) {
        printf("%c", arr[i]);
    }
    return 0;

}