#include <stdio.h>
int main(void)
{
    FILE *f = fopen("myfile.txt", "w");
    fprintf(f, "Hello ");
    fclose(f);
    f = fopen("myfile.txt", __A__);
    fprintf(f, __B__);
    fclose(f);
    return 0;
}