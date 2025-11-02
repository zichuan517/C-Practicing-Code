 #include <stdio.h>

int main() {
    FILE* fp = fopen("poem.txt", "r+");
    if (fp == NULL) {
        printf("fail to open the file\n");
        return 1;
    }
    
    int ch = fgets(fp);
    while (ch != EOF){
        printf("%c", ch);
        ch = fgetc(fp);
    }
    printf("\n");
     
    int result = fclose(fp);
    if (result == 0) {
        printf("the file has been closed successfully\n");
    } 
    else
        printf("fail to close the file\n");
    
    return 0;
}
 
 
 
 
 
 
 
