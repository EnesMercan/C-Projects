#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    
    char string[50];
    char welcoming[20]="Enter a speech";
    unsigned char digit=0;
    
    
    puts(welcoming);
    printf("\n");
    gets(string);
    
    char i=0;
    while (string[i]!='\0') {
        if((islower(string[i]))==1)
            string[i]=toupper(string[i]);
        i++;
    }
    digit=strlen(string);
    printf("\n\n");
    
    puts(string);
    printf("%d items\n\n",digit);
    
    return 0;
}
