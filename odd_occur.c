#include <stdio.h>

int find_Odd(int arr[], int n)
{
    int res = 0; 
    for (int i = 0; i < n; i++) {
        res ^= arr[i];
    }
    return res; // return the result
}

int main()
{
    int arr[] = {12, 12, 14, 90, 14, 14, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    int odd = find_Odd(arr, n);

    printf("The odd occurring element is %d\n", odd);
    return 0;
}
