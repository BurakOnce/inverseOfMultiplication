#include <stdio.h>

/*Burak Önce  20120205052          
Bu program girilen terim sayısına kadar olan sayıların çarpmaya göre terslerinin toplamını ifade eder.*/

int main() {

  float x,y=0,z=1 ; /* x kullanıcının gireceği terim sayısı,
  y verileri elimizde tutucağımız sayı ve z de bize yardımcı 
  olucak olan sayaç sayı */

  printf("Terim sayısını giriniz:\n"); //kullanıcıya komut verilir
  scanf("%f",&x) ; //kullanıcıdan girdi alınır

  while(z<=x) 
  {
     if (z==1) //en baştaki sayının önünde + olmasını engeller
     printf("1/1+") ;
     else if (z!=1)
     printf("1/%.0f+",z); //işlemin anlaşılır olmasını sağlar
  
  y+=1/z ;
  z++ ;
  }

  printf("\nSerinin toplamı:%.5f",y); //son çıktı
  
  return 0;
}