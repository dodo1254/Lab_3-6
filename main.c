#include <stdio.h>
int main(void) 
{
int r,h;
float ans;
printf("Enter radius : ");
scanf("%d", &r);
printf("Enter high : ");
scanf("%d", &h);
ans = (2 * 3.14 * r) * h + 2 * ( 3.14 * r*r );
printf("Answer is %f" ,ans);
return 0;
}
