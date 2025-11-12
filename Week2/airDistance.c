/**
 * Author: Zoey Buthorne
 *
 * Date: 11/11/2025
 *
 * Determine the distance between two locations
 *
 */

 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
#define RADIUS_OF_EARTH_KMS 6371.0
#define pi 3.14159265359
 int main(int argc,char **argv) {
    double longitudeLocationA, lattitudeLocationA;
    double longitudeLocationB, lattitudeLocationB;
    printf("Please enter the longitude of location A\n");
    scanf("%lf", &longitudeLocationA);
    printf("Please enter the lattitude of location A\n");
    scanf("%lf", &lattitudeLocationA);
   printf("Please enter the longitude of location B\n");
    scanf("%lf", &longitudeLocationB);
    printf("Please enter the lattitude of location B\n");
    scanf("%lf", &lattitudeLocationB);
    double distance;
    double lattitudeLocationARadians;
    double lattitudeLocationBRadians;

    lattitudeLocationARadians = (lattitudeLocationA/180) *pi;
    lattitudeLocationBRadians = (lattitudeLocationB/180) *pi;
    double differenceLongitude = (longitudeLocationA - longitudeLocationB);
    double differenceLongitudeRadians= (differenceLongitude/180) *pi;
    distance = acos(sin(lattitudeLocationARadians)*sin(lattitudeLocationBRadians)+cos(lattitudeLocationARadians)*cos(lattitudeLocationBRadians)*cos(differenceLongitudeRadians))*RADIUS_OF_EARTH_KMS;
    printf("Location Distance\n");
    printf("------------------\n");
    printf("Origin: %f, %f\n",longitudeLocationA, lattitudeLocationA);
    printf("Destination: %f, %f\n", longitudeLocationB,lattitudeLocationB);
    printf("Air Distance is %f kms\n", distance);

    return 0;
 }

