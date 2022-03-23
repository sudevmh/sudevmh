#include <stdio.h>
#include <math.h>
int main()
{
   float a,b,c,r1,r2,d;
   printf("Enter the coefficients of quadratic eqn:a,b,c \n");
   scanf("%f %f %f",&a,&b,&c);
   if (a==0)
   {
     printf("it is a linear eqn\n");
   }
   d=b*b-4*a*c;
   if (d==0)
   {
     printf("the eqn will have real and equal roots\n");
     r1=r2=(-b)/(2.0*a);
     printf("r1=r2=%f \n",r1);
   }
   else if (d>0)
   {
     printf("the eqn will have real and distinct roots\n");
     r1=(-b+sqrt(d))/(2.0*a);
     r2=(-b-sqrt(d))/(2.0*a);
     printf("r1=%f r2=%f\n",r1,r2);
   }
   else if (d<0)
   {
     printf("the eqn will have real and imaginary roots\n");
     float real=(-b)/(2.0*a);
     float img=(sqrt(d))/(2.0*a);
     printf("r1=%f+i%f \n",real,img);
     printf("r1=%f-i%f \n",real,img);
   }
}


















   

