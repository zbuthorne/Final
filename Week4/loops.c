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
 int main(int argc, char argv) {
    if(argc != 3) {
        printf("ERROR: incorrect input\n", argv[0]);
        exit(1);
    }
    double x = atof (argv[1]);
    double y = atof (argv[2]);
    double a = .5 * (x + y);
    double g = sqrt(x * y);
    printf("The agm %f, %f = %f or %f \n", x , y, a, g);
    return(0);
 }

