#include <stdio.h>
int main() {
    int x = 0,n = 5,k = 2;
    for (int i = 2; i <= n; i++) {
        x = (x + k) % i;
    }
    printf("%d", x);
    return 0;
}