#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Current Directory");
    system("pwd");
    printf("\nFiles\n");
    system("ls-l");
    printf("\nCreating Directory\n");
    system("mkdir Demo");
    printf("\nListing Files Again\n");
    system("ls");
    printf("\nRemoving Directiory\n");
    system("rmdir Demo");
    return 0;
}