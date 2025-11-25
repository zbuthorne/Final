/**
 * Author: Zoey Buthorne
 *
 * Date: 11/24/25
 *
 * Makes a simple loop
 */

 #include <stdlib.h>
 #include <stdio.h>

 int main(int argc, char argv) {
    int count = 0;
    int n= 123456;
    int originalN = 123456;
    while (n > 0) {
        n /= 10;
        count++;
    }
    printf ("there are %d digits in %d\n", count, originalN);
 }

