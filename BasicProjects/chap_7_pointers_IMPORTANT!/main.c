#include <stdio.h>

void copy1(char * const s1, const char * const s2);
void copy2(char * s1, const char * s2);

int main(void){
    
    char string1[10];
    char *string2 = "HELLO!";
    char string3[10];
    char * string4 = "GOOD BYE!";
    
    
    copy1(string1, string2);
    printf("\n%s\n%s\n\n", string3, string4);
    copy2(string3, string4);
    printf("\n%s\n%s\n\n", string3, string4);
          
    return 0;
}

void copy1(char * const s1, const char * const s2){
    
    size_t i;
    
    for (i=0; (s1[i]=s2[i]) != '\0'; i++)
        ;
}

void copy2(char * s1, const char * s2){
    
    for(; (*s1=*s2) != '\0'; ++s1, ++s2)
        ;
    
}
