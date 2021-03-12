/* bu program user'in istedigi sayiyi (onceden siralanmis) matriste arayip basar (2 January 2020)*/

#include <stdio.h>

void conclosing(void);

int main(int argc, char * argv[]){
    
    unsigned short int matris[25]={1,5,6,8,9,10,23,24,46,68,123,124,125,126,127,130,135,145,152,158,168,234,354,756,988};
    unsigned short int found=0;
    unsigned short int leftIndex=0;
    unsigned short int rightIndex=24;
    unsigned short int middleIndex=0;
    unsigned short int target=0;
    
    printf("\nplease input the unsigned number that you want to search!\n");
    scanf("%hu",&target);
    
    while((found==0)&&(leftIndex<=rightIndex)){
        middleIndex=(leftIndex+rightIndex)/2;
        if ((matris[leftIndex]==target)||(target==matris[middleIndex])||(target==matris[rightIndex])) {
            found=1;
            break;
        }
        if (matris[middleIndex]<target) {
            leftIndex=middleIndex+1;
        }
        if(matris[middleIndex]>target){
            rightIndex=middleIndex-1;
        }
        
    }
    
    if (found) {
        if(matris[leftIndex]==target)
            printf("\nmatris[%hu]=%hu",leftIndex,matris[leftIndex]);
        else if(matris[rightIndex]==target)
            printf("\nmatris[%hu]=%hu",rightIndex,matris[rightIndex]);
        else
            printf("\nmatris[%hu]=%hu",middleIndex,matris[middleIndex]);
    }
    else
        printf("\nthe number that you are searching could't found!");
    
    conclosing();
    
    return 0;
}

void conclosing(void){
    putchar(10);
    putchar(10);
    puts("ENES MERCAN presents respectfully...");
    putchar(10);
}
