#include <stdio.h>

int main() {
    int item = 350;  
    const int LOW = 111;
    const int HIGH = 999;
    const int CUTOFF = 500;

    if (item < LOW) {
        printf("Item number too low\n");
    } else if (item > HIGH) {
        printf("Item number too high\n");
    } else if (item < CUTOFF) {
        printf("Valid - Item in Automotive Department\n");
    } else {
        printf("Valid - Item in Housewares Department\n");
    }

    return 0;
}

