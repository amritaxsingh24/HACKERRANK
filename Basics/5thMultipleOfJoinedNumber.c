/*
You will be given four digits, each from 0–9.
Your task is to combine them into a single 4-digit number in the same order and multiply it by 5 to get the final number.

Important Instructions

Do NOT write the entire logic in main().
Create a function int buildNumber(int a, int b, int c, int d) and call it from main().
Input Format

Four digits: {A} {B} {C} {D}

Constraints

0 ≤ each digit ≤ 9
Output Format

Single line printing the result as: The number is: {(ABCD)*5}

Sample Input 0

1 2 3 4
Sample Output 0

The number is: 6170
Sample Input 1

9 0 7 1
Sample Output 1

The number is: 45355
  */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(int a,int b,int c,int d){
    int number = a * 1000 + b * 100 + c * 10 + d;
    return number *5;

}
int main() {
    int A , B, C , D;
    int result;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    
    {
        result = buildNumber(A, B, C, D);
        printf("The number is: %d" , result);
    }

    return 0;
}
