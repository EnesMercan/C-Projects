//
//  main.c
//  chap_7_pointers_2
//
//  Created by Alexander on 7/31/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

void convertToUpperCase(char *);

int main(int argc, const char * argv[]) {
    
    char string[] = "Merhaba, ben Enes!!!";
    
    printf("\n%s", string);
    convertToUpperCase(string);
    printf("\n%s\n\n", string);

    
    return 0;
    
}

void convertToUpperCase(char * ptr){
    
    while(*(++ptr)!='\0'){
        *ptr = toupper(*ptr);
    }
    
}
