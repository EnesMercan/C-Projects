//
//  main.c
//  chap_6_linear_searching_1
//
//  Created by Alexander on 7/30/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 1000
#define LIMIT 10

void create(unsigned int []);
void greeting(void);
bool search(unsigned int [], unsigned int);
void display(unsigned int []);

int main(int argc, const char * argv[]) {
    
    unsigned int dizi[SIZE];
    char score, try = 0;
    unsigned int guess=0;
    char bonus=0;
    char limit=LIMIT;
    
    
    greeting();
    create(dizi);
    //display(dizi);    /activate if you wanna see the array
    
    
    while(try<limit){
        putchar(10);
        ++try;
        printf("\nTahmin %2d :\t", try);
        scanf("%u", &guess);
        if(search(dizi, guess)){
            bonus++;
            if(bonus==2){
                score+=2;
                printf("Supersin! Bonus puan +1 \tScore : %d", score);
            }
            else if (bonus==4){
                bonus=1;
                score+=3;
                limit++;
                printf("\nInanilmaz! +3 Bonus puan! +1 Deneme hakki!");
            }
            else
                printf("Tebrikler. Bildin! \tScore : %d", ++score);
        }
        else {
            bonus=0;
            printf("Uzgunum. Bilemedin!!!\nScore : %d", score);
            }
        
    }
        
    puts("\n\nTum haklarini kullandiniz!");
    printf("\nScore : %d", score);
    putchar(10);
    
    return 0;
}

void greeting(void){
    puts("\n\a\aMerhaba! Sayi tahmin etme oyununa hos celdinuz!");
    puts("\n0-1000 arasinda bulunan 50 adetlik sayi havuzundaki sayilari tahmin etmeniz isteniyor!");
    puts("\n10 adet deneme hakkiniz var! Haydi rastegele!");
}
void create(unsigned int array[]){
    srand(time('\0'));
    for(unsigned int i=0; i<SIZE; i++)
        array[i] = rand() % 1000;
}

bool search(unsigned int array[], unsigned int number){
    
    for(size_t i=0; i<SIZE; i++)
        if(array[i]==number){
            for(size_t i=0; i<SIZE; i++)
                if(array[i]==number)
                    array[i]=73774347;
            return 1;
        }
    return 0;
}

void display(unsigned int dizi[]){
    
    putchar(10);
    for(int i=0; i<SIZE; i++)
        printf("\ndizi[%d]=%u", i, dizi[i]);
    putchar(10);
}
