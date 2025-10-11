# Welcome to GitHub Desktop!

This is your README. READMEs are where you can communicate what your project is and how to use it.

Write your name on line 6, save it, and then head back to GitHub Desktop.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int X[N];
    long total = 0;
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        total += X[i];
    }
    int max = X[0];
    for (i = 1; i < N; i++) {
        if (X[i] > max) {
            max = X[i];
        }
    }
    int count = 0;
    int days[N];
    for (i = 0; i < N; i++) {
        if (X[i] == max) {
            days[count] = i + 1; // hari ke-i+1
            count++;
        }
    }
    double percentage = ((double)max * count / total) * 100.0;
    printf("Max : %d\n", max);
    printf("Count : %d\n", count);
    printf("days :");
    for (i = 0; i < count; i++) {
        printf(" %d", days[i]);
    }
    printf("\nPercentage : %.3f%%\n", percentage);
    return 0;
}