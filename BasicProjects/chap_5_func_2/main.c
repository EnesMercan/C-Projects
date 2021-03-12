//
//  main.c
//  chap_5_func_2
//
//  Created by Alexander on 7/30/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>
#include "limits.h"
#include <stdbool.h>

unsigned long long int fuctorial(unsigned int, bool);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    unsigned int user_fuct = 0;
    unsigned long long int result = 1;
    
    printf("\ninput the range of the number you wanna calc its fuctorial!\n");
    printf("please, input an unsigned number!\n");
    scanf("%u", &user_fuct);
    
    
    unsigned int count=0;
    while (count<=user_fuct) {
        printf("\n%5u! :\t", count);
        result = fuctorial(count, 1);
        ++count;
        printf("%llu", result);
    }
    
    printf("\n\n\a");
    
    return 0;
}

unsigned long long int fuctorial(unsigned int number, bool flag){
    
    static unsigned long long int total = 1;
    
    if(flag){
        total=1;
        flag=0;
    }
    
    if(number>=2){
        total*=number;
        fuctorial(number-1, 0);
    }
    else if((number) || (number==0)){
        return 1;
    }
    
    
    
    return total;
}
