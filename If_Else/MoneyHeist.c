/*
You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.

Sample Input 0

3 1 4 7 5 4 2 9 5 4
3 5
7 4
1 5
Sample Output 0

3 6 4 2 5 4 2 3 5 4
Sample Input 1

9 8 7 6 5 4 3 2 1 0
0 3
4 1
8 2
Sample Output 1

2 8 7 6 6 4 3 2 3 0
Language
C
More
12345678910111213141516171819202122232425
#include <stdio.h>

int main() {
    int a[10];
    int index, rotation;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

…        }
    }

    return 0;
}
Line: 1 Col: 1

Test against custom input
*/


#include <stdio.h>

int main() {
    int a[10];
    int index, rotation;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &index, &rotation);
        a[index] = (a[index] + rotation) % 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d", a[i]);

        if (i < 9) {
            printf(" ");
        }
    }

    return 0;
