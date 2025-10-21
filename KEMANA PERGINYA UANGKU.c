
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int width = 2 * (N - 1) - 1;   

  
    for (int i = 1; i <= N - 1; ++i) {
        int stars = 2 * i - 1;
        int spaces = (width - stars) / 2;
        for (int s = 0; s < spaces; ++s) printf(" ");
        for (int k = 0; k < stars; ++k) printf("*");
        printf("\n");
    }


    int trunk_spaces = (width - 1) / 2;
    for (int s = 0; s < trunk_spaces; ++s) printf(" ");
    printf("*\n");
