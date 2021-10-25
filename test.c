#include <stdio.h> 

//* do a function that multiplies two numbers together

int multiplies (int a, int b){
    int result;
    result = a*b;
    return result;
}


int main () {
    
    int a=multiplies (2, 4);
    printf("%d", a);
    return 0;
}