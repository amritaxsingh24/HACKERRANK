/*
A new Smart ATM system has been introduced to improve the efficiency of cash withdrawal. Unlike regular ATMs, these machines use a precision dispensing algorithm to minimize the number of currency notes handed to the user.

The ATM is stocked with only three denominations:

₹500 notes
₹200 notes
₹100 notes
To ensure consistency and reduce mechanical wear, the ATM is designed to optimize the number of notes dispensed.

It always follows the strict dispensing order shown below:

First dispense ₹500 notes
Then dispense ₹200 notes
Finally dispense ₹100 notes
Your task is to simulate how the ATM distributes the notes for a given withdrawal amount A and determine:

How many ₹500 notes are dispensed?
How many ₹200 notes are dispensed?
How many ₹100 notes are dispensed?
The objective is to achieve the minimum number of notes while following the above priority order.

Input Format

A single integer: A
where, A represents the withdrawal amount entered by the user.

Constraints

The withdrawal amount A will always be a positive multiple of 100.
The ATM supports only the denominations ₹500, ₹200, and ₹100.
The total amount requested must be greater than 0.
If the entered amount is 0 or negative, the system should treat it as invalid.
The dispensing must follow the strict priority order:
₹500 notes
₹200 notes
₹100 notes
The solution must ensure that the total number of notes dispensed is minimal, while respecting the priority order.
Output Format

Display the total number of notes of each denomination dispensed in the following format:
500-rupee notes: X
200-rupee notes: Y
100-rupee notes: Z

Where:

X → number of ₹500 notes dispensed
Y → number of ₹200 notes dispensed
Z → number of ₹100 notes dispensed

If the amount A ≤ 0, print: Invalid amount

Sample Input 0

1200
Sample Output 0

500-rupee notes: 2
200-rupee notes: 1
100-rupee notes: 0
Sample Input 1

700
Sample Output 1

500-rupee notes: 1
200-rupee notes: 1
100-rupee notes: 0
Sample Input 2

300
Sample Output 2

500-rupee notes: 0
200-rupee notes: 1
100-rupee notes: 1
*/




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int c500 = 0 , c200 = 0 , c100 = 0;
    
    scanf("%d", &n);
    
    if(n <= 0){
        printf("Invalid amount");
        return 0;
    }
    
    for ( ; n >= 500; n -= 500)
        c500++;

    for ( ; n >= 200; n -= 200)
        c200++;

    for ( ; n >= 100; n -= 100)
        c100++;

    printf("500-rupee notes: %d\n", c500);
    printf("200-rupee notes: %d\n", c200);
    printf("100-rupee notes: %d\n", c100);

    return 0;
    
}
