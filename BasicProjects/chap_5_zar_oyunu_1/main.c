//
//  main.c
//  hemen_sil
//
//  Created by Alexander on 7/28/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "limits.h"

int main(int argc, const char * argv[]) {
    
    unsigned int frequency1 = 0;
    unsigned int frequency2 = 0;
    unsigned int frequency3 = 0;
    unsigned int frequency4 = 0;
    unsigned int frequnecy5 = 0;
    unsigned int frequnecy6 = 0;
    unsigned int repeat=0;
    unsigned short int face = 0;
    unsigned short int zar_sayisi = 0;
    
    printf("\nProgramda zar atilisi simule edilecektir!\nZarin kac kere atilmasini istersin?\n");
    scanf("%u", &repeat);
    printf("\nKac tane zar ayni anda atilsin?\t(MAX-->10)\n");
    scanf("%hu", &zar_sayisi);
    if(zar_sayisi>10)
        zar_sayisi=10;
    
    int j=1;
    unsigned long int i=1;
    
    for(j=1; j<=zar_sayisi; j++){
        for(i=1; i<=repeat; i++){
            face = 1 + rand() % 6;
            
            switch (face) {
                case 1:
                    frequency1++;
                    break;
                case 2:
                    frequency2++;
                    break;
                case 3:
                    frequency3++;
                    break;
                case 4:
                    frequency4++;
                    break;
                case 5:
                    frequnecy5++;
                    break;
                case 6:
                    frequnecy6++;
                    break;
            }
        }
    }
    
    printf("\ntotal roll :\t%llu", (i-1)*zar_sayisi);
    printf("\nresults :\n1\t:\t%u\n2\t:\t%u\n3\t:\t%u\n4\t:\t%u\n5\t:\t%u\n6\t:\t%u\n\n", frequency1, frequency2, frequency3, frequency4, frequnecy5, frequnecy6);
    
    return 0;
}
