#include <stdio.h>
#include <stdlib.h>

int main()
{
 char op;
printf("lutfen operator giriniz\n");
scanf("%c",&op);

float x;
float y;
printf("lutfen iki adet sayi giriniz\n");
scanf("%f %f",&x,&y);

switch(op)
{
  case '+':printf("%.2f+%.2f=%.2f",x,y,x+y);

  break;

  case'-':printf("%.2f-%.2f=%.2f",x,y,x-y);
  break;



    case'*':printf("%.2f*%.2f=%.2f",x,y,x*y);
  break;

    case'/':printf("%.2f/%.2f=%.2f",x,y,x/y);
  break;
default:printf("hatali giris yaptiniz");


  char op;
    printf("lutfen bir adet operator giriniz");
    scanf("%c",&op);




}

























    return 0;
}
