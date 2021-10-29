#include <stdio.h>
int swap_arr(int *arr, int n){
    int temp;
    for(int i=1; i<=n/2; i++){
        temp=arr[i-1];
        arr[i-1]=arr[n-i];
        arr[n-i]=temp;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len_arr = 10;
    swap_arr(arr, len_arr);
    for(int i=1; i<=len_arr; i++){
        printf("Value of element %d : %d\n", i, arr[i-1]);
    }
    return 0;
}