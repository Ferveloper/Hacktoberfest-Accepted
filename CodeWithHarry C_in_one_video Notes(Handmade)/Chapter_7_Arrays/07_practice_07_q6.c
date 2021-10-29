#include <stdio.h>
int poneze(int *arr, int n)
{
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i - 1] > 0)
        {
            positive++;
        }
        else if (arr[i - 1] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive Values : %d\n", positive);
    printf("  Zero   Values : %d\n", zero);
    printf("Negative Values : %d\n", negative);
}

int main()
{
    int arr[6] = {-3, 0, 2, -3, 0, 5};
    int len_arr = 6;
    poneze(arr, len_arr);
    return 0;
}