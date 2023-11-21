#include <stdio.h>
int main()
{
    float a,b;
    /*printf("Enter 2 numbers:");*/
    scanf("%f %f", &a,&b);
    printf("%.6f + %.6f = %.2f\n",a,b,a+b);
    printf("%.6f - %.6f = %.2f\n",a,b,a-b);
    printf("%.6f * %.6f = %.2f\n",a,b,a*b);
    printf("%.6f / %.6f = %.2f\n",a,b,a/b);
  return 0;
}
