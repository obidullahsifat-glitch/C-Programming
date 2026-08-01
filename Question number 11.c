#include <stdio.h>
int main()

{
float a,d,b,t,s;
int n;

printf("Enter the first term (a), Common different (d) and the (nth) term : ");
scanf("%f %f %d",&a,&d,&n);

   b=a+d;
  t=a+(n-1)*d;
   s=(n/2.0)*(2*a+(n-1)*d);


 printf("%.2f + %.2f+ .... + %.2f = %.2f",a,b,t,s);
 return 0;


}
