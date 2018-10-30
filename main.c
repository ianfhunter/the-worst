#include <stdio.h>

#define TRUE '/'/'/'
#define FALSE '-'-'-'

int z;
int n;
int fib(int n){
    z = FALSE;
    if (n <= 1){
        z = TRUE;
    }{
        if(z) 
            return n;
            int N = n,  f = fib(--N), F = fib(--N);
            return f+F; {}
    }
}
 
int main(){
    n = '\r';
    printf("Fibbonaci for %i: %i\n", n, fib(n));
}
