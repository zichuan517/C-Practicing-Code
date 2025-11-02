#include <stdio.h> 
int main() 
{ 
    FILE *pf; 
    char *s1 = "China", *s2 = "Beijing"; 
    pf = fopen("abc.dat", "wb+"); 
    fwrite(s2, 7, 1, pf); 
    rewind(pf);
    fwrite(s1, 5, 1, pf); 
    fclose(pf); 
    return 0;
}