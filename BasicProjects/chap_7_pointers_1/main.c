#include <stdio.h>


int byValue(int);
void byAddress(int *);


int main(){
    
    
    int number = 5;
    printf("\nold value : %d\n", number);
    number = byValue(number);
    printf("\nnew value : %d\n", number);
    
    //
    
    int number1 = 8;
    printf("\nold value : %d\n", number1);
    byAddress(&number1);
    printf("\nnew value : %d\n", number1);
    
    
    return 0;
}

int byValue(int number){
    return number*number*number;
}

void byAddress(int * ptr){
    *ptr = (*ptr) * (*ptr) * (*ptr);
}
