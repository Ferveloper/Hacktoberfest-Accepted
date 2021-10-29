#include<stdio.h>
int def_arr(int arr[], int n);
int main(){
    int array[]={1,5,3,5,6,6};
    def_arr(array, 6);
    return 0;
}
int def_arr(int arr[], int n){
    for(int i=1;i<n;i++){
        printf("The value of element %d : %d\n", i, arr[i-1]);
    }
}