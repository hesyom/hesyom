#include <stdio.h>
#include <stdlib.h>

int main()
{

   /* kullsnıcıdan bir sayi isteyiniz 1 den girdiğiniz sayiya kadar olan sayıların
   toplamını for döngüyle hesaplayınız


   int i;

for(i=1;i<=5;i++);
printf("%d",i); */

int i;
int sayim;
int toplam=0;

printf("lutfen bir sayi giriniz\n");
scanf("%d",&sayim);


for(i=1;i<=sayim;i++)
{
    toplam+=i;
}
printf("sonuc:%d",toplam);





return 0;






}
