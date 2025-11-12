/**
 * Author: Zoey Buthorne
 *
 * Date: 11/11/2025
 *
 *Determines who wins football game
 */

 #include <stdlib.h>
 #include <stdio.h>

 int main(int argc, char **argv) {
    int huskers, akron;
    if(argc !=3) {
    printf("ERROR: please list huskers score then akron score\n");
    exit(1);
 }
 huskers = atoi(argv[1]);
 akron = atoi(argv[2]);
    if(huskers > akron) {
        printf("huskers win!\n");
    }
    else if (huskers < akron) {
        printf("huskers lose\n");
    }
    else {
        printf("They Tie!\n");
    }
    return 0;
 }
