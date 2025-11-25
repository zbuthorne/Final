/**
 * Author: Zoey Buthorne
 *
 * Date: 11/24/25
 *
 * Computes the aarithmetic-geometri mean of two numbers.
 * See <a href=
 */

 #include <stdlib.h>
 #include <stdio.h>
 #include <stdbool.h>
 #include <math.h>
 int main(int argc, char *argv[]) {
    if(argc != 3) {
        printf("ERROR: incorrect input\n");
        exit(1);
    }
    double x = atof (argv[1]);
    double y = atof (argv[2]);
    double tolerance = .0000001;
    double a_prev, g_prev;
    double a_curr = x, double g_curr = y;
    //. |a_curr - g_curr|
    while( fabs(a_curr - g curr) > tolerance) {
    a_curr= .5 * (a_prev + g_prev);
    g_curr = sqrt(a_prev * g_prev);
    }
    printf("The agm %f, %f = %f\n", x , y, a_curr);
    return(0);
 }

