#include <stdio.h>
int main() {
    int n=5,k=2;
    int josephus(int n, int k) {
        if (n == 1)
            return 0;
        else
            return (josephus(n -1,k)+k)%n;
    }
    printf("%d", josephus(n, k));
    return 0;
}