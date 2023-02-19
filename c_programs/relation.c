#include <stdio.h>

int main ()
{
    int a= 20, b=30, c;
    if (a==b){
        printf("%d is equal to %d\n", a, b);
    }
    else{
        printf("%d != %d is true \n", a, b);
    }

    // check if they ><
    if (a < b){
        printf("%d is less than %d \n", a, b);
    }
    else{
        printf("%d > %d\n", a,b);
    }
    // <= or >=
    if (a>=b){
        printf("%d is greater or equal to %d\n", a,b);

    }
    else{
        printf("%d is less or equal to %d\n\n ", a, b);
    }

    

    return 0;
}
