//
//  main.c
//  homework_3
//
//  Created by Enes Mercan on 3/18/19.
//  Copyright © 2019 Enes Mercan. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int check_inputs(float ,float ,float);  // Kullanicinin geirmis oldugu kenar degerlerinin dogru aralikta oldugunu sinar.
int check_choises(int ,int) ;           //Islem yapilmasi istenen geometriktik sekile iliskin yapilan secimi sinar. Ynalis secimde porgram biter.
void function_ucgen(float ,float ,float ,int);  //ucgen icin hesaplamalarin yapildigi fonksiyon
void function_kare(float ,int);                   //kare icin hesaplamalarin yapildigi fonksiyon
void function_daire(float ,int);                 //daire icin hesaplamalarin yapildigi fonksiyon
void function_dikdortgen(float ,float ,int);      //dikdortgen icin hesaplamalarin yapildigi fonksiyon

int main(int argc, const char * argv[]) {
    int object_choise=0, cevre_alan=0;
    float input1=1, input2=1 ,input3=1;
    printf("\nHangi geometrik sekille calismak istersiniz?");
    printf("\n1)ucgen\n2)Kare\n3)Dikdortgen\n4)Daire\n");
    scanf("%d",&object_choise);
    printf("\n1)Cevre\n2)Alan\n");
    scanf("%d",&cevre_alan);
    
    if(check_choises(object_choise,cevre_alan)==0)     //kullanicinin secimleri dogru degilse 0 kodu ile program sonlanir
        return 0;
    
    switch(object_choise){
       case 1 :      //ucgen sekli icin islemler
          printf("\nUcgenin bir kenari!");
          scanf("%f",&input1);
          printf("\nUgenin bir kenari!");
          scanf("%f",&input2);
          printf("\nUgenin bir kenari!");
          scanf("%f",&input3);
          if(check_inputs(input1 ,input2 ,input3)==0)  //girilen kenar uzunluklari dogrulanir
             return 0;
          
          switch(cevre_alan) {
             case 1 :     //ucgenin cevresinin hesaplandigi case
                  function_ucgen(input1 ,input2 ,input3 ,0);
                  break;
             case 2 :     //ucgenin alaninin hesaplandigi case
                  function_ucgen(input1 ,input2 ,input3 ,1);
                  break;
          }
          break;
        
        case 2 :    //kare sekli icin islemler
           printf("\nKenar uzunlugu gir");
           scanf("%f",&input1);
           if(check_inputs(input1 ,input2 ,input3)==0)   //girilen kenar uzunluklari dogrulanir
              return 0;
          
           switch(cevre_alan) {
               case 1 :    //karenin cevresinin hesaplandigi case
                  function_kare(input1,0);
                  break;
              case 2 :     //karenin alaninin hesaplandigi case
                   function_kare(input1,1);
                   break;
           }
           break;
        
        case 3 :     //dikdortgen sekli icin islemler
           printf("\nUzun kenar gir");
           scanf("%f",&input1);
           printf("\nKisa kenar gir");
           scanf("%f",&input2);
           if(check_inputs(input1 ,input2 ,input3)==0)   //girilen kenar uzunluklari dogrulanir
               return 0;
           
           switch(cevre_alan) {
              case 1 :  //daikdortgenin cevresinin hesaplandigi case
                   function_dikdortgen(input1 ,input2 ,0);
                   break;
              case 2 :   //daikdortgenin alaninin hesaplandigi case
                   function_dikdortgen(input1 ,input2 ,1);
                   break;
            }
            break;
       
        case 4 :    //daire sekli icin islemler
            printf("\nDairenin yaricapini gir\n");
            scanf("%f",&input1);
            if(check_inputs(input1 ,input2 ,input3)==0)   //girilen yaricap dogrulanir
                return 0;
            
            switch(cevre_alan) {
                case 1 :   //dairenin cevresinin hesaplandigi case
                    function_daire(input1 ,0);
                    break;
                case 2 :   //dairenin alaninin hesaplandigi case
                    function_daire(input1 ,1);
                    break;
            }
            break;
    }
    return 0;
}


int check_inputs(float number1,float number2 ,float number3) {
    if(((number1<0) || (number2<0) || (number3<0)) || ((number1==0) || (number2==0) || (number3==0))){  //negatif sayilara izin verilmez
        printf("\nGirdiginiz sayilar dogru degildir!\n");
        printf("Negatif veya sifir olamaz!\n");
        return 0;
    }
    return 1;
}

int check_choises(int object_choise ,int cevre_alan){
    if((object_choise<0) || (object_choise>4) || ((cevre_alan!=2) && (cevre_alan!=1))) {  //secimler dogru olmalidir. Programin vakaya aninda mudahele
        //etmesi saglanmis olur ,swirch-case yapilarina girmeden
        printf("\nYanlis secim!\n");
        return 0;
    }
    
    return 1;
}

void function_ucgen(float kenar1 ,float kenar2 ,float kenar3 ,int secim){
    float cevre=kenar1+kenar2+kenar3;
    
    if (secim==0) {
       printf("\nUcgenin cevresi:\t%f\n",cevre);
    } else {
        cevre/=2;
        printf("\nUcgenin alani:\t%f\n",sqrtf(cevre*(cevre-kenar1)*(cevre-kenar2)*(cevre-kenar3)));
    }
    
}

void function_kare(float kenar ,int secim){
    if (secim==0) {
        printf("\nKarenin cevresi:\t%f\n",kenar+kenar);
    } else {
        printf("\nKarenin alani:\t%f\n",kenar*4);
    }
}

void function_daire(float cap ,int secim){
    if (secim==0) {
        printf("\nDairenin cevresi:\t%f\n",PI*cap*2);
    } else {
        printf("\nDairenin alani:\t%f\n",PI*cap*cap);
    }
}

void function_dikdortgen(float kenar_uzun ,float kenar_kisa ,int secim){
    if(kenar_uzun==kenar_kisa){   //dokdortgenin uzun ve kisa kenari ayni girilirse bunun kare oldugu belirtilir.
        printf("\n Bu bir karedir.!");
        function_kare(kenar_uzun,secim);
    }
    else {
      if (secim==0) {
          printf("\nDikdortgenin cevre:\t%f\n",2*(kenar_uzun+kenar_kisa));
      } else {
          printf("\nDikdortgenin alan:\t%f\n",kenar_uzun*kenar_kisa);
      }
    }
}

/*Mehmet hocamizin temelde bizden istedigi sekliyle bu algoritmayi switch-case iskeletine kurup , kalan kisimlari fonksiyonlar kullanarak programi daha effective ve duzenli hale getirmeyi ve if-else yapilari ile istenmeyen durumlara(negatif kenar uzunlugu gibi..) mudahale etmeyi amacladim. Bu projeyi bir odevden cok programlama yeteneklerimi gelistirebilecegim bir firsat olarak goruyorum. Umarim algoritmayi begenirsiz. Programla ilgili bana geri donus imkaniniz olursa cok mutlu olurum.
 e-posta : enesmercan1453@gmail.com
 
*/
