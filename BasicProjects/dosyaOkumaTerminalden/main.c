/* Terminalden argv[1] icinde main.c programina okunacak olan
 * text dosyasinin uzantisini yollar.
 * Program dosyanin icerigini consol'a basar ve harf sayisini soyler
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char ** argv) {

    // comment the line below if you want to run on the terminal
    argv[1] = "/Users/enesmercan/Documents/deneme/text.txt" ;

    // 1 sayisini 2 yap eger terminalden aciyorsan
    if (argc != 1)
    {
        printf("\nerror : input the text file to be read!\n");

        exit(0);
    }

    FILE * f = fopen(argv[1], "r");

    if (f == NULL)
    {
        printf("\nError : the file not found!\n");
        exit(0);
    }

    printf("\n_________________________________");

    int count = 0;
    int c;
    while ( (c = fgetc(f)) != EOF )
    {
        if (isalpha(c)) {
            printf("%c", c);
            count++;
        }
    }

    printf("\n%s has %d letters in it ", argv[1], count);

    printf("\n_________________________________\n");

    return 0;
}
