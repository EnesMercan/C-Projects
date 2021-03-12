//
//  main.c
//  chp_4_asteriks_1
//
//  Created by Alexander on 7/28/20.
//  Copyright © 2020 Alexander. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    
    signed short int limit=0;
    unsigned short int security=1;
    
    printf("please,input a number (0-100)\n");
    
    do{
        scanf("%hd", &limit);
        security++;
        if(security>5){
            printf("\nINVALID INPUT!\n");
            exit(1);
        }
    } while((limit<0) || (limit>100));
    
    for(int i=1;i<limit;i++){
        for(int j=1;j<i+1;j++){
            printf("%s", "*");
            
        }
        printf("\n");
    }
    
    return 0;
}



