//
//  main.c
//  stdarg_learning
//
//  Created by Alexander on 2/3/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>

long int topla(int parametreSayisi, ...);

int main(int argc, const char * argv[]) {
    
    register unsigned short int i=0;
    long int islem[1];
    long int numbers[10];
    
    printf("\nlutfen yapacaginiz islemi secin!\ntoplama:\t+\ncikarma:\t-\ncarpma:\t\t*\nbolme:\t\t/\n");
    islem[0]=(long int)getchar();
    
    if((islem[0]==43)||(islem[0]==45)||(islem[0]==42)||(islem[0]==47)){}
    else{
            printf("\nUnvalid attempt\n");
            return 0;
        }
    
    puts("Lutfen 10 adet sayi giriniz:\n");
       for (; i<10; i++) {
           scanf("%ld",&numbers[i]);
       }
    
   /* for (i=0; i<10; i++) {   //check the array
        printf("\n*%ld",numbers[i]);
    } */
    
    printf("\nresult:%ld\n\n\n",topla(11,islem[0],numbers[0],numbers[1],numbers[2],numbers[3],numbers[4],numbers[5],numbers[6],numbers[7],numbers[8],numbers[9]));
    
    return 0;
}

long int topla(int parametreSayisi, ...){
    
    va_list parameterPtr;
    va_start(parameterPtr, parametreSayisi);
    
    register int i=0;
    long int result=0;
    
    switch(va_arg(parameterPtr, long int)){
            
        case 43 :
            for (i=1; i<parametreSayisi; i++)
            result+=va_arg(parameterPtr, long int);
            break;
        case 45 :
            for (i=1; i<parametreSayisi; i++)
            result-=va_arg(parameterPtr, long int);
            break;
        case 42 :
            result=1;
           for (i=1; i<parametreSayisi; i++)
           result*=va_arg(parameterPtr, long int);
           break;
        case 47 :
           result=va_arg(parameterPtr, long int);
           for (i=2; i<parametreSayisi; i++)
           result/=va_arg(parameterPtr, long int);
           break;
            
    }
    
    va_end(parameterPtr);
    
    return result;
}
