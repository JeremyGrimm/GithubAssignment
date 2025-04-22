#include <stdio.h>

int main() {
    int sum = 0;
    
    int nums[] = {1, 2, 4, 5, 6, 7, 8, 9};
    for(int i = 0; i <  sizeof(nums) / sizeof(nums[0]); i++)
    {
        sum += nums[i];
    }
    
    printf("The sum of numbers in the array is: %d", sum);

    return 0;
}