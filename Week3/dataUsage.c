/**
 *Author: Zoey Buthorne
 *
 *Date: 11/11/2025
 *
 * Determines data usage
 */

 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>

 int main(int argc, char **argv) {
    double numberGB, dayOfMonth, dataUsage;
    if (argc!=[5]) {
        printf("Please enter numberGB, dayOfMonth, and dataUsage");
        exit (1);
    }
    numberGB = atof(argv[1]);
    dayOfMonth = atof(argv[2]);
    dataUsage = atof(argv[3]);
    double daysLeft = 30.0 - dayOfMonth;
    double dataLeft = numberGB - data Usage;
    double avgUse = dataUsage / dayOfMonth;
    double goodUse = numberGB / 30;
    double useOver = (avgUse * daysLeft) - numberGB;
    double newAvg = (dataLeft / daysLeft);
if (dataUsage > numberGB) {
    printf("%f used, %f remaining\n", dayOfMonth, daysLeft);
    printf("Average Daily Use: %f gb/day\n", avgUse);
    printf("You have already met your limit for this month.  Looks like you're getting some overage charges...\n");
}else if (avgUse > goodUse) {
        printf("%f used, %f remaining\n", dayOfMonth, daysLeft);
        printf("Average Daily Use: %f gb/day\n", avgUse);
        printf("You are exceeding your correct Avg daily use (%f)\n", goodUse);
        printf("Continuing this high usage you will exceed your data plan by\n");
        printf("%f GB\n", useOver);
        printf("To stay below your data plan use no more than %f GB/day\n", newAvg);

    } else {
        printf("%f used, %f remaining\n", dayOfMonth, daysLeft);
        printf("Average Daily Use: %f gb/day\n", avgUse);
        printf("You are at or below your correct Avg daily use (%f)\n", goodUse);
        printf("You can use up to %f GB/day and stay below your data plan limit\n",newAvg);


 }
return (0)
 }

