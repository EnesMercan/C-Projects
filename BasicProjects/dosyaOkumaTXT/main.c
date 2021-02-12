#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool status = 1;

int main(int argc, char ** argv) {

    FILE * f = fopen("/Users/enesmercan/CLionProjects/dosyaOkumaTXT/cmake-build-debug/text.txt", "r");
    if (f == NULL){printf("\nfile could not be found\n"); status = 0;}

    if (status) {

        printf("\n **************************");
        printf("\n file has founded!\n");
        printf(" **************************\n\n");

        int c;
        while ( (c=fgetc(f)) != EOF ) {
            printf("%c",c);
        }

        printf("\n");
    }



    return EXIT_SUCCESS;
}
