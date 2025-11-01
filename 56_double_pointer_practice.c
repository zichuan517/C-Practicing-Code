#include <stdio.h>

int main() {

    char *names[6] = {"Alice", "Bob", "Charley", "Chris", "Amy", "Calvin"};
    char **ptr = names;
    
    for (int i = 0; i < 6; i++) {
        if (**ptr == 'C') {
            printf("%s\n", *ptr);
        }
        ptr++;
    }
    return 0;
}