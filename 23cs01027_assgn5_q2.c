#include <stdio.h>

int main(){
    int dividend, divisor;
    printf("Enter dividend and divisor: ");
    scanf("%d%d", &dividend, &divisor);
    int sign = 1, q = 0, r = 0; 
    if(divisor == 0){
        printf("Not valid");
        return 0;
    }
    
    if(dividend * divisor < 0)
        sign = -1;
    int moddividend = dividend, moddivisor = divisor;
    
    if(dividend < 0)
        moddividend *= -1;
    
    if(divisor < 0)
        moddivisor *= -1;
    
    while(moddividend - moddivisor >= 0){
        ++ q;
        moddividend-= moddivisor;
    }

    q *=sign;
    r = dividend - q * divisor;

    printf("Quotient: %d, Remainder: %d", q, r);
    return 0;
}