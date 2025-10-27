#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    printf("二维数组内容：\n");
    printf("┌─────────────┐\n");
    for(int i = 0; i < ROWS; i++) {
        printf("│ ");
        for(int j = 0; j < COLS; j++) {
            printf("%2d ", arr[i][j]); 
        }
        printf("│\n");
    }
    printf("└─────────────┘\n");
    
    return 0;
}