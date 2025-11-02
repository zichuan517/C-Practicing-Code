#include <stdio.h>

int main() {
    FILE* fp = fopen("poem.txt", "a+");
    if (fp == NULL) {
        printf("fail to open the file\n");
        return 1;
    }


    fputs("It is a classic English poem!\n", fp);

    rewind(fp);

    char str[20];
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    printf("\n");

    fclose(fp);
    return 0;
}