//
//  main.c
//  homework_7
//
//  Created by Enes Mercan on 4/28/19.
//  Copyright © 2019 Enes Mercan. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#define SIZE 50

int main(int argc, const char * argv[]) {
    char array[SIZE];
    
    printf("Hello, Mr.Bond!\n");
    printf("please enter your text to encyrypte it!\n");
    
    gets(array);     //reading the console
    
    for(int i=0;i<SIZE;i++){
        if(array[i]=='\0')
            break;
        
        if(array[i]%2==0) {        //if the letter's ASCII code is even number
            if(array[i]==120)      //to shift 3 digits letter 'x'
               printf("%c",97);
            else if(array[i]==90)    //to shift 3 digits letter  'Z'
                printf("%c",67);
            else if(array[i]==88)   //to shift 3 digits letter  'X'
                printf("%c",65);
            else if(array[i]==122)  //to shift 3 digits letter  'z'
                printf("%c",99);
            if(array[i]==32)     //do not touch space in case of using
                printf("%c",32);
            else
                printf("%c",array[i]+3);
            }
        
        else {                   //if the letter's ASCI code is odd number
            if(array[i]==89)     //to shift 2 digits letter  'Y'
                printf("%c",65);
            else if(array[i]==121)  //to shift 2 digits letter  'y'
                printf("%c",97);
            else
                printf("%c",array[i]+2);
            }
    }
    
            
    printf("\n");
    
    return 0;
        
    }
