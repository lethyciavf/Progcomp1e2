#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "12";
    char str2[] = "30";
    
    strcat(str1, ":");
    
    printf("str1 depois de strcat(str1, \":\"):\n%s", str1);
    
    strcat(str1, str2);
    
    printf("\nstr1 depois de strcat(str1, str2):\n%s", str1);
    
    return 0;
}