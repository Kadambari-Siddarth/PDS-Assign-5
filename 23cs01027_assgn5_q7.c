#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *b = *a;
    *a = tmp;
} 

int main(){
    printf("Enter the size of the array: ");
    int n = 5;
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i = 0;i < n;++i)
        scanf("%d", &a[i]);
    //bubble sort:
    int tmp = 0;
    for(int i =0 ;i < n; ++i)
    {
        for(int j =0; j < n - i - 1; ++j){
        if(a[j] > a[j+1]){
                tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("The sorted array is : ");
    for(int i = 0;i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}