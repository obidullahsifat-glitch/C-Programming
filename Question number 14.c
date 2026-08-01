#include <stdio.h>
int var= 2;   //global variable
int main()
{
printf("%i\n", var * var);   //output 4
 int var= 3;    // local variable
 {
 int var= 5;   //local variable
 printf("%i\n", var * var);    //output 25


 }

printf("%i\n", var * var);   //local variable , output 9

return 0;
}
