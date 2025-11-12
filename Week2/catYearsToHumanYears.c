/**
 * Author: Zoey Buthorne
 *
 * Date: 11/11/2025
 *
 * Program converts cat years to human years
*/

#include <stdlib.h>
#include <stdio.h>

#define catYear_to_humanYear 7

int main( int argc, char **argv){
    double catYear, humanYear;

    printf("enter cats age in cat years");
    scanf("%lf", &catYear);

    humanYear = catYear_to_humanYear * catYear;
    printf("%f cat years is equal to %f human years\n", catYear, humanYear);
    return 0;
}
