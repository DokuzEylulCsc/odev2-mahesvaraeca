#include <stdio.h>
#include<string.h>
int main() {
  int x ;
  printf("Sayi giriniz:" );
  scanf("%d",&x );
  if (x<4000) {
    //  printf("+++++++" );
    printf("Degeri==>");
    while ( x >= 1000) {
      printf("M");
      x-=1000;
    }
    while ( x >= 900) {
      printf("CM");
      x-=900;
    }
    while (x>=500) {
      printf("D");
      x-=500;
    }
    while (x>=400) {
      printf("CD");
      x-=400;
    }
    while (x>=100) {
      printf("C");
      x-=100;
    }
    while (x>=90) {
      printf("XC");
      x-=90;
    }
    while (x>=50) {
      printf("L");
      x-=50;
    }
    while (x>=40) {
      printf("XL");
      x-=40;
    }
    while (x>=10) {
      printf("X");
      x-=10;
    }
    while (x>=9) {
      printf("IX");
      x-=9;
    }
    while (x>=5) {
      printf("V");
      x-=5;
    }
    while (x>=4) {
      printf("IV");
      x-=4;
    }
    while (x>=1) {
      printf("I");
      x-=1;
    }
  }
  if (3999<x || x == 0) {
    printf("Lutfen 4000'den kucuk bir deger giriniz.\n");
  }
    int digit(char);
    char roma[1000];
    int i=0;
    long int sayi =0;
    printf("\nHarf giriniz:\n");
    scanf("%s",roma);

    while(roma[i]){
         if(digit(roma[i]) < 0){
             printf("Gecersiz karakter==> %c",roma[i]);
             return 0;
         }
         if((strlen(roma) -i) > 2){
             if(digit(roma[i]) < digit(roma[i+2])){
                 printf("Gecersiz karakter==>");
                 return 0;
             }
         }
         if(digit(roma[i]) >= digit(roma[i+1]))
             sayi = sayi + digit(roma[i]);
         else{
             sayi = sayi + (digit(roma[i+1]) - digit(roma[i]));
             i++;
         }
         i++;
    }

    printf("Degeri==> %ld",sayi);


}

int digit(char c){

    int value=0;

    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1;
    }

    return value;
  return 0;
}
