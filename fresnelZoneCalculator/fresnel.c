//
// Created by Enes Mercan on 30.03.2021.
//

#include "fresnel.h"
#include <math.h>

Fresnel fresnel = {CLEARANCE_CONSTANT}; //  Create an object here and assign the calculation constant

void fresnelCalc(const double dist, const double freq) //  takes distance in km and freq in GHz to perform calculations
{
    fresnel.dist = (double) dist;
    fresnel.freq = (double) freq;

    fresnel.MaxRadius = fresnel.fresConst * sqrt(fresnel.dist / fresnel.freq);
    fresnel.fresDist = fresnel.dist / 2;
    fresnel.MinRad = fresnel.MaxRadius * 0.6;

}