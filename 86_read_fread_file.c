#include <stdio.h>
typedef struct {
    int id;
    char name[20];
    int sales_volume;
    float unit_price;
} ProductData;

int main(){
    FILE* fp = fopen("product_data.bin", "rb");
    if (fp == NULL){
        printf("fail to open the file\n");
        return 1;
    }

    ProductData products[8];

    size_t result = fread(products, sizeof(ProductData), 8, fp);
    if (result != 8){
        if (feof(fp)){
            printf("it is the eof error\n");
        }
        else if (ferror(fp)){
            printf("it is the error happening in the process of reading the file");
        }
        fclose(fp);
        return 1;
    }

    for (int i=0; i<8; i++){
        printf("id:%d, product:%s, volume:%d, sale:%.2f\n",
                products[i].id, products[i].name, products[i].sales_volume, products[i].unit_price);
    }

    fclose(fp);
    return 0;
}