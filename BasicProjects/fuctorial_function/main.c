//
//  main.c
//  fuctorial_function
//
//  Created by Alexander on 2/1/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>

unsigned long long int fuctorial(int);

int main(int argc, const char * argv[]) {
    
    signed int number=0;
    
    printf("please input a number");
    putchar(10);
    scanf("%d",&number);
    putchar(10);
    
    printf("%llu",fuctorial(number));
    putchar(10);

    
    return 0;
}

unsigned long long int fuctorial(int numb){
    
    if((numb==0)||(numb==1))
        return 1;
    
    return numb*=fuctorial(numb-1) ;
}
