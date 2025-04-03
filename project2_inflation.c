/*
 * project2_inflation.c
 * This program will calculate the anticipated price of an item for the next 5 years and will be
 * using a fixed annual inflation rate of 3%
 *
 * Author: Zachary Bram
 */

#include <stdio.h>

 // This is where we define the Inflation Rate for the following program
#define INFLATION_RATE 0.03
int main() {
    double price;
    int year;

    // Ask the user for the price
    printf("Enter the price of the item in 2024:");
    scanf("%lf", &price);

    // Calculate and show what the anticipated price for the next 5 years will be
    for (year = 2025; year <= 2029; year++) {
        price *= (1 + INFLATION_RATE); // This is where the inflation rate will be applied
        printf("The anticipated price in %d is %.2f\n", year, price);
    }

    return 0;
}