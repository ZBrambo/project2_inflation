# project2_inflation
This is a college project for my Program Design class. Originally coded back on Feburary 4, 2025.
# Inflation Calculator

## Overview
This simple C program calculates the anticipated price of an item over the next 5 years based on a fixed annual inflation rate of 3%. It demonstrates the concept of compound inflation by showing how prices increase year after year.

## Features
- Takes a current (2024) price input from the user
- Calculates future prices for the years 2025-2029
- Uses a fixed annual inflation rate of 3%
- Displays results with proper formatting

## Technical Details
- Written in C
- Uses standard input/output functions
- Implements a simple compound growth formula: `new_price = old_price * (1 + inflation_rate)`

## How to Compile
You can compile the program using gcc:

```bash
gcc -o inflation_calculator project2_inflation.c
```

## How to Run
After compiling, run the program:

```bash
./inflation_calculator
```

You will be prompted to enter the current price of an item, and the program will display the anticipated prices for the next 5 years.

## Example Usage

```
Enter the price of the item in 2024: 100
The anticipated price in 2025 is 103.00
The anticipated price in 2026 is 106.09
The anticipated price in 2027 is 109.27
The anticipated price in 2028 is 112.55
The anticipated price in 2029 is 115.93
```

## Code Structure
- The program uses a preprocessor directive (`#define INFLATION_RATE 0.03`) to set the inflation rate
- A simple loop calculates the new price for each year
- Standard C formatting is used to display the results with 2 decimal places

## Author
Zachary Bram

## Notes
- This program uses a simplified model of inflation with a constant rate
- Real-world inflation rates vary year to year and across different sectors of the economy
- For educational purposes only
