// https://www.codewars.com/kata/557b5e0bddf29d861400005d/train/c
#include <stdio.h>
#include <math.h>

double converter(int mpg) {
    const double GAL_TO_LITERS = 4.54609188;
    const double MILE_TO_KM = 1.609344;

    double kpl = ((double)mpg * MILE_TO_KM) / GAL_TO_LITERS;
    kpl = round(kpl * 100) / 100; // Round to the second decimal digit
    return kpl;
}
//
#include <math.h>

#define GALLON 4.54609188 // L
#define IMPMILE 1.609344 // Km

double converter(int mpg) {
    double KmpL = IMPMILE / GALLON * mpg;
    return round(KmpL * 100) / 100;
}
