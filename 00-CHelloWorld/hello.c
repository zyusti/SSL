#include <stdio.h>



void main()
{
    printf("Hello world!");

    FILE *stdout = fopen("output.txt", "w"); 
    fprintf(stdout, "Hello, world!");
    fclose(stdout);
}
