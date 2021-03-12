//
//  main.c
//  chp_4_asteriks_3
//
//  Created by Alexander on 7/28/20.
//  Copyright © 2020 Alexander. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    
    // insert code here...
    
    signed short int limit=0;
    unsigned short int security=0;
    
    printf("%s", "please,input a number! (0-100)");
    
    do{
        if(security>0)
            printf("%s", "\n\a\a!!!INVALID INPUT!!!\n");
        if(security==6)
            exit(1);
        security++;
        scanf("%hd", &limit);
    }while((limit<0) || (limit>100));
    
    printf("\n\n");
    
    for(int i=1;i<limit;i++){
        for(int j=1;j<=i;j++){
            printf("%s", " ");
        }
        for(int m=1;m<=(limit-i);m++){
            printf("%s", "*");
        }
        printf("\n");
    }
    
     printf("\n\n");
    
    return 0;
}
