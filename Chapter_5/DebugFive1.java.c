#include <stdio.h>

int main() {
    const double HIGH_PRICE = 2.59;
    const double MED_PRICE = 1.99;
    const double LOW_PRICE = 0.89;

    int entreeChoice = 2;     
    int friesChoice = 1;      
    double bill = 0.0;

    
    if (entreeChoice == 1 || entreeChoice == 2) {
        bill += HIGH_PRICE;
    } else if (entreeChoice == 3 || entreeChoice == 4) {
        bill += MED_PRICE;
    } else {
        printf("Invalid entree choice.\n");
    }

    
    if (friesChoice == 1) {
        bill += LOW_PRICE;
    }

    printf("Total bill is $%.2f\n", bill);

    return 0;
}

