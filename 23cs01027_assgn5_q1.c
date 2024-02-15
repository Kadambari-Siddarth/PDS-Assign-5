#include <stdio.h>

int main(){
    //Part 1:
    int n, l;
    printf("Enter the number: ");
    scanf("%d", &n);
    int x = n;
    //Part 1:
    while(x){
        ++l;
        x /= 10;
    }
    printf("Length: %d\n",l);
    int u[10];
    //Part 2:
    for(int i = 0;i < 10; ++i){
        u[i] = 0;
    }
    x = n;
    for(int i = 0; i <l;++i){
        u[x%10]++;
        x/= 10;
    }
    int sum = 0;
    for(int i = 0;i < 10; ++i){
        if(u[i])
            sum += i;
    }
    printf("Sum of unique : %d\n",sum);

    return 0;
}