#include <stdio.h>
#include "fresnel.h"

Fresnel fresnel;    //  Creat the object

int main() {

    double dist = 0;    // the distance between two antennas
    double freq = 0;    //  the freq of the signal

    printf("\n*********  Welcome to Fresnel Zone Calculator  *********\n");
    printf("\nPlease, input the distance between your antennas (km) :  ");

    scanf("%lf", &dist);


    printf("\nPlease input the frequency in GHz: ");
    scanf("%lf", &freq);

    fresnelCalc(dist, freq);    //  perform the calculation (necessarily)


    printf("\n%-30s%.2lf km", "Total Distance", fresnel.dist);
    printf("\n%-30s%.2lf GHz", "Frequency", fresnel.freq);
    printf("\n%-30s%.2lf km", "Fresnel Zone Distance", fresnel.fresDist);
    printf("\n%-30s%.2lf m", "Recommended Antenna Height", fresnel.MaxRadius);
    printf("\n%-30s%.2lf m", "Min Antenna Height", fresnel.MinRad);



    return 0;
}

