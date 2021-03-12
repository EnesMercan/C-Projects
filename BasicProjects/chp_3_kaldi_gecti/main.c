//
//  main.c
//  chp_3_kaldi_gecti
//
//  Created by Alexander on 7/28/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    puts("\n\aWilkcommen!\nThis program counts the number of the students who passed the certification exam. \nThe total number of students attended is 10\n\nInsturctions :\n-Input the data 1 by 1\niInput 1 if student passed\n-Input 2 if failed\nLet's ger started!\n\n");
    
    
    unsigned short int counter = 0;
    unsigned short int passed = 0;
    
    unsigned short int result;
    
    while(counter<10){
        printf("\n\tStudent (%u)\n\t\t1:passed\t2:failed\n\t\t--->", counter+1);
        scanf("%hu", &result);
        
        if(result==1){
            passed+=1;
        }
        else if (result!=2){
            printf("\a\a\nINVALID INPUT\n");
            continue;
        }
        counter++;
    }
    
    printf("\n\npassed :\t%hu\nfailed :\t%d\n", passed, 10-passed);
   
    if(passed>8)
        printf("\nBonus to instructor!\n");
    
    return 0;
}
