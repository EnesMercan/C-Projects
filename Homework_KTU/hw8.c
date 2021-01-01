//
//  main.c
//  homework_8
//
//  Created by Enes Mercan on 5/6/19.
//  Copyright © 2019 Enes Mercan. All rights reserved.
//

//*
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define SIZE 10

float standart_sapma(int *);

int main(int argc, const char * argv[]) {
 
    int vector[SIZE];
 
    srand(time(0));
    for(int i=0;i<SIZE;i++){
        *(vector+i)=rand()%100;
        printf("\nstudent %2d  :\t%d",i+1,*(vector+i));
    }
    
    printf("\nStandart sapma:\t%+10.4f\n\n",standart_sapma(vector));
    
    return 0;
}

float standart_sapma(int * vector){
    float ortalama=0,varyans=0;
    
    for (int i=0; i<SIZE; i++)
        ortalama+=*(vector+i);
    ortalama/=SIZE;
    printf("\n\nortalama:\t%+8.4f",ortalama);
    
    for (int i=0; i<SIZE; i++)
        varyans+=powf((*(vector+i)-ortalama), 2);
    printf("\nvaryans:\t%+10.4f",varyans);
    return sqrtf(varyans/(SIZE-1));
}
