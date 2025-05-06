# CS1: Lab 11

## Setup
1. Update the contents of *ID.txt* with your identifier (school email **without @school.edu**).
2. Write pseudocode for your program in *PSEUDO.txt*.

## How to Run Your Program
* [**WINDOWS**]
   - In VSCode, press the play button in the top right corner (it should appear when you open a `.cpp` file). Your program should compile and run.
   - Alternatively, open a terminal. Type `.\make.bat` and press return. Your program should compile and run.
* [**MAC/LINUX**]
   - Open a Terminal. Type `make` and press return. Your program should compile and run.

## Assignment Specification
### Soda Pop
* Implement this program in `soda.h` and `main.cpp`.
* This program simulates a soda machine.
* Declare a structure called `Soda` in `soda.h` with the following members:
   - `name` (string)
   - `price` (double)
   - `quantity` (int)
* The program should read from a file called `inventory.txt`. Each line of the file represents a drink, its cost, and its quantity delimited by spaces.
   - The first line of the file is an integer representing how many soda varieties are present
   - The inventory retrieved from the text file should be stored as a **dynamically allocated array of structures** (perfectly sized to fit the number of soda varieties)
* Before receiving user input, the program should display a menu detailing the available drinks (numbered in the order they were read from the text file), their costs (in dollar format), and quantity in an aligned fashion.
   - Soda names contain no more than 14 characters
* The user should be able to select a drink (by entering its corresponding number) or quit (by entering -1).
   - If the user enters an invalid menu selection, they should be re-prompted for another selection
   - If the user selects a drink that is out of stock, they should be re-prommpted for another selection
* After selecting a drink, the user should be able to input the amount of money they want to insert to pay.
   - This machine only accepts non-zero values less than or equal to $5.00 
   - If the user enters an invalid or insufficient money amount, they should be re-prompted for a valid amount
   - If the user enters a sufficient money amount, the quantity of the selected drink should be decremented and the leftover change should be displayed in dollar format
* When the user quits, the program should display the total revenue earned by the soda machine in dollar format.
* Before the program exits, the remaining inventory should be written back to `inventory.txt` in the same format it was read.

### Other Requirements
* Your program should be able to read any file formatted like `inventory.txt`. In other words, the program should successfully run using a file with an arbitrary number of inventory items with any names, prices, and quantities.
* The starter code provides several suggested function prototypes as a guide.
* Your program logic must be organized into functions; you will be graded on code cleanliness and design.

#### Example
```
1) Cola          $1.50    Qty: 30
2) Root_Beer     $1.40    Qty: 20
3) Orange_Soda   $1.65    Qty: 25
4) Seltzer_Water $0.95    Qty: 1
5) Ginger_Ale    $2.05    Qty: 15

Select a soda or -1 to quit: 9
Invalid selection, please try again: 1
Enter money to insert: 10.00
This machine only accepts $5.00 or less
Enter money to insert: -2.00
Please enter a positive, non-zero dollar amount
Enter money to insert: 2.00
Change: $0.50

1) Cola          $1.50    Qty: 30
2) Root_Beer     $1.40    Qty: 20
3) Orange_Soda   $1.65    Qty: 25
4) Seltzer_Water $0.95    Qty: 1
5) Ginger_Ale    $2.05    Qty: 15

Select a soda or -1 to quit: 4
Enter money to insert: 0.50
Insufficient funds
Enter money to insert: 1.00
Change: $0.05

1) Cola          $1.50    Qty: 30
2) Root_Beer     $1.40    Qty: 20
3) Orange_Soda   $1.65    Qty: 25
4) Seltzer_Water $0.95    Qty: 1
5) Ginger_Ale    $2.05    Qty: 15

Select a soda or -1 to quit: 4
Seltzer Water is out of stock.
Select a soda or -1 to quit: 3
Enter money to insert: 5.00
Change: $3.35

1) Cola          $1.50    Qty: 30
2) Root_Beer     $1.40    Qty: 20
3) Orange_Soda   $1.65    Qty: 25
4) Seltzer_Water $0.95    Qty: 1
5) Ginger_Ale    $2.05    Qty: 15

Select a soda or -1 to quit: -1
Total Revenue: $4.10
```

#### `inventory.txt` BEFORE
```
5
Cola 1.5 30
Root_Beer 1.4 20
Orange_Soda 1.65 25
Seltzer_Water 0.95 1
Ginger_Ale 2.05 15
```

#### `inventory.txt` AFTER
```
5
Cola 1.5 29
Root_Beer 1.4 20
Orange_Soda 1.65 24
Seltzer_Water 0.95 0
Ginger_Ale 2.05 15
```

## Submission
1. Remember to *commit* and *push* your changes to this repository.
