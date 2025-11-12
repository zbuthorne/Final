/**
 * Author: Zoey Buthorne
 *
 * Date 11/11/2025
 *
 * Translates human years to cat years
 *
 */

 #include <stdlib.h>
 #include <stdio.h>

 #define CAT_YEARS_TO_HUMAN_YEARS 7

 int main(int argc, char **argv) {
 double catYears, humanYears;
 if(argc !=2) {
    printf("ERROR: please list age\n");
    exit(1);
 }
humanYears = atof(argv[1]);

 catYears = (humanYears / CAT_YEARS_TO_HUMAN_YEARS);

 printf("You are %f in cat years\n", catYears);

 return 0;
 }
