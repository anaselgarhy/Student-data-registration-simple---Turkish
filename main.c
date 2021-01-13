#include <stdio.h>
#include <stdlib.h>


int main(){
  int t=0,enyuk=0,sira=0,N,a;
  float ort;
  int LOW = 60;
  printf("Siniftaki ogrenci sayisini giriniz=");
  scanf("%d",&N);
  unsigned int degree[N];
  printf("\n");
  for(int i=1;i<=N;i++){
        int num = i-1;
        printf("%d. ogrencinin notunu giriniz=",i);
        scanf("%d",&a);
        if(a >= 0 && a <= 100){
              degree[num] =a;
              t+=a;
              if(a > enyuk){
                enyuk = a;
              }
          } else{
            printf("Error !\n");
          }
      }
  ort=t*1.0/N;
  printf("\n Sinif ortalamasi=%.2f \n",ort);

printf("\n**SONUCLER**\n");

  a=0;
  while(a<N){
  if(degree[a]>=LOW){
        printf("\n %d. ogrenci gecti",a+1);
        sira++;
  }
    else{
        printf("\n %d. ogrenci kaldi",a+1);
    }
    a++;
  }

  printf("\n En yuksek not %d. ogrencinin notu olan %d dir",sira,enyuk);
  return 0;
}
