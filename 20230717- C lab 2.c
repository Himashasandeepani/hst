#include<stdio.h>
int main()
{
    int arr[4][4] = {
        {8, 17, 9, 6},
        {5, 2, 11, 18},
        {7, 27, 28, 0},
        {4, 1, 3, 10}
    };

    int target = 5;
    int row, col;
    int found = 0;

    // Iterate over the array to find the target value
    for (row = 0; row < 4; row++) {
        for (col = 0; col < 4; col++) {
            if (arr[row][col] == target) {
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (found)
        printf("The value %d is found at index [%d][%d]\n", target, row, col);
    else
        printf("The value %d is not found in the array\n", target);

    return 0;
}