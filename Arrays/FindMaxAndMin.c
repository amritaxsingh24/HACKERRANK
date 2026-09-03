/*
Given an array of N integers, your task is to determine the maximum and minimum values in the array.

Input Format

The first line contains an integer N, the number of elements in the array.
The second line contains N space-separated integers A[i], representing the elements of the array.
Constraints

1 ≤ N ≤ 10^5
−10^9 ≤ A[i] ≤ 10^9
Output Format

Print two space-separated integers: the maximum and minimum values in the array.
Sample Input 0

5  
1 3 5 7 9
Sample Output 0

9 1
Sample Input 1

4  
-5 -2 -9 -1
Sample Output 1

-1 -9
*/




#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int temp;
    scanf("%d",&temp);
    
    int max=temp;
    int min=temp;
    
    for(int i=0; i<=n-1; i++){
        scanf("%d",&temp);
        
        if(temp>max)
             max=temp;
        
        if(temp<min)
             min=temp;
     }
    
    printf("%d ",max);
    printf("%d",min);

    return 0;
}
