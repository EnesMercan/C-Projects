//
//  main.c
//  homework_2
//
//  Created by Enes Mercan on 3/8/19.
//  Copyright © 2019 Enes Mercan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char character;
    
    printf("Please enter a lowercase letter to convert it to capital letter!\n");
    character=getchar();
    
    if((character>122) || (character<97))
        printf("\n\ait's not lowercase letter\n");
    
    
    else
        printf("%c ==> %c\t:)\n",character,character-32);
    
    
    return 0;
}
