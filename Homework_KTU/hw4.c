//
//  main.c
//  HOMEWORK-4
//
//  Created by Enes Mercan on 4/3/19.
//  Copyright © 2019 Enes Mercan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float temperature=0;
    char unit ;
    printf("\nHi there!\n");
    printf("This algorithm was coded by Enes to convert temperature values such as Fahrenait and Celcius!");
    printf("\nAnyway. Enter the value of temperature!\n");
    scanf("%f",&temperature);
    
    while((unit!=67)&&(unit!=70)){
        printf("\nSicaklik turunu giriniz (F/C)\n");
        unit=getchar() ;
        unit=toupper(unit);
    }
    return 0;
}
