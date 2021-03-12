//
//  main.c
//  chap_5_max_min_func
//
//  Created by Alexander on 7/28/20.
//  Copyright © 2020 Alexander. All rights reserved.
//


#include <stdio.h>


int max(int, int, int);
int min(int, int, int);


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int integer1, integer2, integer3;
    
    printf("%s", "\nPlease, input 3 numbers!\n");
    scanf("%d%d%d", &integer1, &integer2, &integer3);
    
    printf("\nnumber 1 :\t%d\nnumber 2 :\t%d\nnumber 3 :\t%d\n\nmax : \t%d\nmin :\t%d\n\n ", integer1, integer2, integer3, max(integer1, integer2, integer3), min(integer1, integer2, integer3));
    
    return 0;
}


int max(int number1, int number2, int number3){
    
    int max_numb=number1;
    
    if(number2>max_numb)
        max_numb=number2;
    if(number3>max_numb)
        max_numb=number3;
    return max_numb;
}

int min(int numb1, int numb2, int numb3){
    int min=numb1;
    
    if(numb2<min)
        min=numb2;
    if(numb3<min)
        min=numb3;
    
    return min;
}
