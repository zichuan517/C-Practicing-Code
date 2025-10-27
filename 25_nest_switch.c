#include <stdio.h>
int main()
{
    int room_type=2;
    int days=5;
    int price=0;
    switch(room_type){
        case 1:{
            if (days>=1 && days<=3)
            price = 100*days;
            else if(days>=3)
            price= 60+80*days;
            else
            return 1;
            break;
        }
        case 2:{
            if (days>=1 && days<=3)
            price = 180*days;
            else if(days>=3)
            price= 90+150*days;
            else
            return 1;            
            break;
        }
        case 3:
            price = 1000*days;
            break;
        default:
            printf("shit");
            break;
    }
    printf("you stayed in the class %d for %d days,the price is %d RMB.\n",room_type,days,price);
    return 0;
}