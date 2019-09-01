#include <stdio.h>>
#include <stdlib.h>

int main(){
    int n, r;
    n=1;
    while(n>=1 && n<=10){
        r=8*n;
        printf("%i x %i = %i\n", 8, n, r);
        n++;
    }
    return 0;
}
