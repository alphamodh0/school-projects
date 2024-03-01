#include <stdio.h>

int main(void){
    int a = 2;
    int b = 3;
    int c = 4;
    while (a++ < 5 && b != 0){ {
     if (c > 2)
     c /= b;
     else
     c = a / b++;
     b < 0 ? b++ : --b;
    }

    return 0;
   }
