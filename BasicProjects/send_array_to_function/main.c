//
//  main.c
//  send_array_to_function
//
//  Created by Alexander on 2/1/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>
#include<time.h>
#include <stdlib.h>

#define MATRIS1 3
#define MATRIS2 3
#define LIMIT 100

void printMatris(int matrisClone[][MATRIS2],int  ,int );

int main(int argc, const char * argv[]) {
    
    register unsigned short int i=0;
    register unsigned short int j=0;
    int matris[MATRIS1][MATRIS2];
    srand(time(0));
    
    for (; i<MATRIS1; i++) {
        for (; j<MATRIS2; j++) {
            matris[i][j]=rand()%LIMIT;
        }
        j=0;
    }
    
    printMatris(matris, MATRIS1, MATRIS2);
    
    return 0;
}

void printMatris(int matrisClone[][MATRIS2],int satir ,int sutun){
    
    int j=0;
    int i=0;
    for (; i<MATRIS1; i++) {
        for (; j<MATRIS2; j++) {
            printf("%3d ",matrisClone[i][j]);
        }
        j=0;
        putchar(10);
    }
}
