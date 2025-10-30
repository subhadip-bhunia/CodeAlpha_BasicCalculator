#include<stdio.h>
float add(float a, float b);
float subt(float c, float d);
float multi(float e, float f);
float div(float g, float h);
int main()
{
   char calc;
   float num1,num2,result;
   printf("\nEnter('+'-for addition,'-'-for subtraction,'*'-for multiplication,'/'-for division)\n");
   scanf("%c",&calc);
   if(calc=='+'||'-'||'*'||'/')
   {
      printf("\nEnter two numbers:\n");
      scanf("%f%f",&num1,&num2);
      switch(calc)
      {
          case '+':
                  printf("\nResult:%f\n",result=add(num1, num2));
                  break;
          case '-':
                  printf("\nResult:%f\n",result=subt(num1, num2));
                  break;
          case '*':
                   printf("\nResult:%f\n",result=multi(num1, num2));
                   break;
          case '/':
                   printf("\nResult:%f\n",result=div(num1, num2));
                   break;         
      }
   }
   else
   {
       printf("\nInvalid input\n");
   }
   return 0;
}
float add(float a, float b)
{
   return a+b;
}
float subt(float c, float d)
{
   return c-d;
}
float multi(float e, float f)
{
   return e*f;
}
float div(float g, float h)
{
    if(h!=0)
    {
       return g/h;
    }
    else
    {
       printf("\nError:Division by Zero is invalid\n");
       return 0.0;
    }
}
