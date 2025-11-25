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
    int n = 10;
    int count = 0;
    for(int i=0; i <n; i++0) {
        for(int j=0; j<n; j++) {
            printf("i, j = %d, %d\n" , i , j);
            count ++;
        }

        printf("count = %d\n", count);
 }
