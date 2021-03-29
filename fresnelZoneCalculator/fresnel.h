//
// Created by Enes Mercan on 30.03.2021.
//

#ifndef FRESNELZONECALCULATOR_FRESNEL_H
#define FRESNELZONECALCULATOR_FRESNEL_H

#define      CLEARANCE_CONSTANT     8.657

typedef struct Fresnel {
    const float fresConst;  //  the constant used in calculation
    double dist;            //  Distance in kilometers
    double freq;            //  signal frequency in GHz
    double fresDist;        //  half of the total distance
    double MaxRadius;       //  fresnel zone largest radius in meters
    double MinRad;          //  fresnel zone minimum allowable radius in meters
}Fresnel;

void fresnelCalc(const double dist, const double freq); //  takes distance in km and freq in GHz to perform calculations


#endif //FRESNELZONECALCULATOR_FRESNEL_H
