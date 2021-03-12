//
//  main.c
//  chp_3_ortalama_bulma
//
//  Created by Alexander on 7/28/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    unsigned int total = 0;
    unsigned int count = 0;
    unsigned int grade = 0;
    float average = 0;
    
    puts("\n\a\a\aWelcome!!!\nThis program calculate the average grade of a 10 stdents class");
    
    while(count<=9){
        printf("input the grade\t:\t");
        scanf("%u", &grade);
        total+=grade;
        count++;
        printf("%u\n", count);
    }
    
    average = (float) total / (float) count;
    printf("\a\a\naveraget:\t%.2f", average);
    
    return 0;
}
