#include <stdio.h>

int main(){
    FILE* fp = fopen("grade.txt", "w");
    if (fp == NULL){
        printf("fail to open the file\n");
        return 1;
    }
    char ch = 'G';
    int result = fputc(ch, fp);
    if (result == EOF) {
        printf("fail to write the file");
        fclose(fp);
        return 1;
    }

    ch = 'r';
    result = fputc(ch, fp);
    if (result == EOF) {
        printf("fail to write the file");
        fclose(fp);
        return 1;
    }

    ch = 'a';
    result = fputc(ch, fp);
    if (result == EOF) {
        printf("fail to write the file");
        fclose(fp);
        return 1;
    }
    ch = 'd';
    result = fputc(ch, fp);
    if (result == EOF) {
        printf("fail to write the file");
        fclose(fp);
        return 1;
    }

    ch = 'e';
    result = fputc(ch, fp);
    if (result == EOF) {
        printf("fail to write the file");
        fclose(fp);
        return 1;
    }

    
    result = fputs(" in Class 1\n", fp);
    if (result == EOF) {
        printf("fail to write the file");
        fclose(fp);
        return 1;
    }



    if(fclose(fp) != 0){
        printf("fail to close the file\n");
        return 1;
    }
    printf("success\n");
    return 0;
}



