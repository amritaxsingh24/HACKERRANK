/*
You are given the length and width of a rectangle.
Your task is to calculate and print its area using a separate function, not inside main().

Important Instructions

Do NOT write the entire logic in main().
Create a separate function int area(int length, int width) and call it from main().
Input Format

Two integers: {length} {width}

Constraints

1 ≤ length ≤ 10⁶
1 ≤ width ≤ 10⁶
Output Format

Single line printing the result as:

The area is: {res} units

Sample Input 0

5 4
Sample Output 0

The area is: 20 units
Sample Input 1

10 4
Sample Output 1

The area is: 40 units
  */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int area(int length, int width){
    int res= length*width;
    return res;
}

int main() {
    int len,wid;
    scanf("%d %d",&len, &wid);
    
    int rec = area(len,wid);
    printf("The area is: %d units",rec);
    
    return 0;
}
