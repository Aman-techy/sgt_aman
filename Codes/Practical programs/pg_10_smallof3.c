#include <stdio.h> 
int main()
{
    int a,b,c;
    printf("value of a= ");
    scanf("%d",&a);
     printf("value of b= ");
    scanf("%d",&b);
     printf("value of c= ");
    scanf("%d",&c);
    if ((a<b)&&(a<c))
    { printf("a is smallest =%d",a);
    }
    else if ((b<a)&&(b<c))
    { printf("b is smallest=%d",b);
    }
    else
    {  printf ("c is smallest =%d",c);}
    return 0;
}
