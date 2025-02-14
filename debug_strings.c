#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hacker!";
    char result[20];  // Ensure enough space for concatenation

    printf("str1 length: %lu\n", strlen(str1));  // Debug length
    printf("str2 length: %lu\n", strlen(str2));

    strcpy(result, str1);  
    strcat(result, " ");   // Space separator
    strcat(result, str2);  

    printf("Result: %s\n", result);
    return 0;
}
