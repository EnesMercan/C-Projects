//
//  main.c
//  homework_2
//
//  Created by Enes Mercan on 3/8/19.
//  Copyright © 2019 Enes Mercan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char ch;
    
    printf("Lutfen kucuk bir harf giriniz!\n");
    ch=getchar();
    
    ch=ch-32;
    printf("%c\t:)\n",ch);
    
    return 0;
}
