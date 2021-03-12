
//
//  main.c
//  chp_4_asteriks_2
//
//  Created by Alexander on 7/28/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
     
    signed short int limit=0;
    unsigned short int security=0;
    
    puts("\nPlesae, input a number between 1-100\n");
    
    do{
        if(security>0){
            printf("\a\a\nINVALID INPUT\n\n");
        }
        if(security==5)
            exit(1);
        
        scanf("%hd",&limit);
        
        security++;
        
    } while((limit>100) || (0>limit));
    
    for(int i=1;i<limit;i++){
        for(int j=limit;j>i;j--){
            printf("%c", '*');
        }
        printf("\n");
    }
    
    return 0;
}
