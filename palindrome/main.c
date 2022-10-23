#include <stdio.h>
#include <stdlib.h>
void kontrol(int *);
int main()
{
     int N;
     int *pnt=&N;
     printf("Lutfen sayi giriniz=");
     scanf("%d",&N);
     kontrol(&N);



    return 0;
}
  int tnum=0;
  int rem;
  void kontrol(int *pnt){
  while(*pnt >0){
    rem= *pnt%10;
    tnum = tnum+ rem*10;
    *pnt /= 10;
  }
  if(tnum== *pnt){printf("Girdiginiz sayi palindrome sayidir");}
  else{printf("Girdiginiz sayi palindrome sayisi degildir..");}

  }
