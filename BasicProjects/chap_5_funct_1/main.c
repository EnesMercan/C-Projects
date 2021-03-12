//
//  main.c
//  chap_5_funct_1
//
//  Created by Alexander on 7/30/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>

unsigned long long int fuctorial(unsigned int);

int main(int argc, const char * argv[]) {
    
    unsigned int fuct=0;
    unsigned long long int result=0;
    
    do{
    printf("\nplease enter the number that you wanna calculate its fuctorial\n");
    scanf("%u", &fuct);
    }while(fuct<0);
    
    if(fuct>1)
        result=fuctorial(fuct);
    else if ((fuct==1) || (fuct==0))
        result=1;
    
    printf("\n\n%u! :\t%llu\n\n", fuct, result);
    
}

unsigned long long int fuctorial(unsigned int number){
    
    static unsigned long long int total=1;
    
    if(number>1){
        total*=number;
        fuctorial(number-1);
    }
    
    return total;
}

