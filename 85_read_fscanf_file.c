#include <stdio.h>

int main(){
    FILE* fp = fopen("friends.txt", "r+");
    if (fp == NULL){
        printf("fail to open the file");
        return 1;
    }

    char name[20];
    int age;
    char gender;
    float height;
    float weight;
    int EQ;
    int IQ;

    int lineCount = 0;
    
    printf("=== Friends Information ===\n");

    while (1) {
        int result = fscanf(fp, "%s %d %c %f %f %d %d", 
                           name, &age, &gender, &height, &weight, &EQ, &IQ);
        
        if (result == EOF) {
            break; 
        }
        else if (result == 7) {
            lineCount++;
            printf("friend%d:\n", lineCount);
            printf("  name: %s\n", name);
            printf("  age: %d\n", age);
            printf("  sex: %c\n", gender);
            printf("  height: %.2f cm\n", height);
            printf("  weight: %.2f kg\n", weight);
            printf("  EQ: %d\n", EQ);
            printf("  IQ: %d\n", IQ);
            printf("  --------------------\n");
        }
        else {
            printf("format error\n");
            break;
        }
    }
    
    char str[50];
    if (fseek(fp, 0, SEEK_SET) == 0) {
        if (fgets(str, sizeof(str), fp) != NULL){
            printf("the content is:%s\n", str);
        }
        else {
            printf("fail to read the file\n");
            fclose(fp);
            return 1;
        }
    }

    if (fseek(fp, -10, SEEK_END) == 0) {
        if (fgets(str, sizeof(str), fp) != NULL){
            printf("the content is:%s\n", str);
        }
        else {
            printf("fail to read the file\n");
            fclose(fp);
            return 1;
        }
    }

    rewind(fp);
    if (fgets(str, sizeof(str), fp) != NULL){
        printf("the content is:%s\n", str);
    }
    else {
        printf("fail to read the file\n");
        fclose(fp);
        return 1;
    }



    fclose(fp);
    return 0;
}