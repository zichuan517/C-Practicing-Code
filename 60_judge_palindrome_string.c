#include <stdio.h>
#include <string.h>

int check(char *t){
    int left = 0;
    int right = strlen(t)-1;
    while (left < right){
        if (t[left] != t[right])
            return 0;
        left++;
        right--;
    }
    return 1;



int main(){
    char t[20];
    printf("please input a string:");
    scanf("%s",t);
    if (check(t))
        printf("%s is a palindrome string\n",t);
    else
        printf("%s is not a palindrome string\n",t);
    return 0;
}