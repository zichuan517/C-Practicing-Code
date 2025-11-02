#include <stdio.h>

int main(){
    FILE* fp = fopen("grade.txt", "a");
    if (fp == NULL){
        printf("fail to open the file\n");
        return 1;
    }

    int result = fputs("rank      name     grade\n", fp);
    if (result == EOF) {
        printf("fail to write the file");
        fclose(fp);
        return 1;
    }

    int rank[3]={1,2,3};
    char name[3][20] = {"wangzichuan", "wangyiming", "qijunyi"};
    int grade[3] = {750, 700, 650};

    for (int i=0; i<3; i++){
        fprintf(fp, "%4d, %12s, %4d\n", rank[i], name[i], grade[i]);
    }



    if(fclose(fp) != 0){
        printf("fail to close the file\n");
        return 1;
    }
    printf("success\n");
    return 0;
}



