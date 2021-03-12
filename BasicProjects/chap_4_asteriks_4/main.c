//
//  main.c
//  chap_4_asteriks_4
//
//  Created by Alexander on 7/28/20.
//  Copyright © 2020 Alexander. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    
    signed short int repeat=10;
    unsigned short int sec=0;
    
    printf("%s", "\n\aplease, input a number!(0-100)\n");
    
    do{
        if(sec!=0)
            printf("%s", "\a\a\a\nINVALID INPUT\n");
        if(sec==6)
            exit(1);
        scanf("%hd", &repeat);
        sec++;
    } while((repeat<0) || (repeat>100));
    
    printf("\n");
    
    for(int i=1;i<=repeat;i++){
        for(int j=repeat-i;j>0;j--){
            printf(" ");
        }
        for(int m=1;m<=i;m++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    return 0;
}
