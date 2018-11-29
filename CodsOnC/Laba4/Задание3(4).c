#include <stdio.h> 

unsigned int str_length(const char* s) 
{ 
    int i = 0; 
    while (*s != '\0') 
    { 
        i++; 
        s++; 
    } 
    return i; 
} 


int main() 
{ 
    char arr[100]; 
    scanf("%s", &arr); 
    printf("%d\n", str_length(arr)); 

    return 0; 
}
