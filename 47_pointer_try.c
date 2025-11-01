#include <stdio.h>
int main(){
    char ch = 'A';
    char* ptr = &ch;
    printf("%c",ch);
    *ptr = 'a';
    printf("%c",ch);
    return 0;
}