//
//  main.c
//  pointers_learning
//
//  Created by Alexander on 2/2/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    unsigned short int number=5;
    unsigned short int number1=20;
    unsigned short int * pointer;
    
    pointer=&number;
    
    printf("\n\tnumber  =%5hu\tadresi:%15p",number,&number);
    printf("\n\tnumber1 =%5hu\tadresi:%15p",number1,&number1);
    printf("\n\tpointer =%5hu\tadresi:%15p",*pointer,pointer);
    putchar(10);
    printf("\n\tpointer = pointer + number + number1");
    
    *pointer=number1+number+(*pointer);
    printf("\n\n\tpointer=%5hu\tadresi:%15p",*pointer,pointer);
    putchar(10);
    
    pointer=NULL;
    printf("\n......pointer=NULL........");
    printf("\npointer=%p",pointer);
 // printf("\nadres:%x\tdegeri:%hu",pointer,*pointer);  //adres degerine ulasmayi denersen hata verir cunku sifirlanmistir!!! (let's try)
    putchar(10);
    putchar(10);
    
  //pointer = &number1;   // bu sefer adres degerine ulasabilirsin cunku it's no longer "void" pointer
  //printf("\nadres:%x\tdegeri:%hu",pointer,*pointer);

    return 0;
}
