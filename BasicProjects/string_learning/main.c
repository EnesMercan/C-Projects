//
//  main.c
//  string_learning
//
//  Created by Alexander on 2/2/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <string.h>
#include <stdio.h>

#define SATIR 4

unsigned long int diziSayisiniBul(char [][20], unsigned int);

int main(int argc, const char * argv[]) {
    
    char string[SATIR][20];
    register unsigned short int i=0;
    register unsigned short int j=0;
    
    puts("input 4 words one by one!");
    putchar(10);
    for (; i<4; i++) {
        gets(string[i]);
    }
    
    puts("__________________________");
    puts(string[0]);
    printf("%20lu",strlen(string[0]));
    putchar(10);
    puts(string[1]);
    printf("%20lu",strlen(string[1]));
    putchar(10);
    puts(string[2]);
    printf("%20lu",strlen(string[2]));
    putchar(10);
    puts(string[3]);
    printf("%20lu",strlen(string[3]));
    putchar(10);
    
    return 0;
}
