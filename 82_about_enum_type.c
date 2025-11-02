#include <stdio.h>

typedef enum Color {
    red,
    green,
    blue
} Color;

typedef enum Week{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
}Week;


int main(){
    Color LED = green;
    Week mon = MON;
    Week tue = TUE;    
    Week wed = WED;
    Week thu = THU;
    Week fri = FRI;
    Week sat = SAT;
    Week sun = SUN;


    switch (LED){
        case red  : printf("the red light\n");   break;
        case green: printf("the green light\n"); break;
        case blue : printf("the blue light\n");  break;
        default   : printf("invalid choice\n");
    }


    printf("%d,%d,%d,%d,%d,%d,%d", mon, tue, wed, thu, fri, sat, sun);
    return 0;
}