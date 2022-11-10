/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float a = 100.73;
   float b = 100.0;
   printf("%f\n\n",a-b);
   
   a = 1000.73;
   b = 1000.0;
   printf("%f\n\n",a-b);
   
   a = 10000.73;
   b = 10000.0;
   printf("%f\n\n",a-b);
   
   a = 10000000.73;
   b = 10000000.0;
   printf("%f\n\n",a-b);
   //se eu tiver um código grande, facilita
    return 0;
}

