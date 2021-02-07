#include <stdio.h>
#include <stdlib.h>

/* Cocuk aile yardim odenegi=CocukAYO,Es icin aile yardim odenegi=EsAYO ,Esin calisma durumu=EsCD , Vergiden etkilenen aylik toplam burut ucret=VEATBU*/
int main() {
int z,y,s,w,x,g,t,k,c,b,a,h,j,q,v,m;
int i=0;
int Engelli_Calisan_Sayisi,Engelli_Calisan_Yuzdesi,Calisan_Sayisi;
int Ortalama_Cocuk_Sayisi,Toplam_Cocuk_Sayisi,Cocugu_Olan_Calisan,Cocuk_3ten_Fazla;
int Evli_Sayisi,Bekar_Sayisi,Evli_Yuzdesi,Bekar_Yuzdesi,Esi_Calisan_Sayisi,Esi_Calisan_Yuzdesi;
int Gelir_Vergisi_Yuzdesi15,Gelir_Vergisi_Yuzdesi20,Gelir_Vergisi_Yuzdesi27,Gelir_Vergisi_Yuzdesi35;
int banknot[5]={0},Ikibinin_Altindaki_Maas,Gelir_Vergisi15,Gelir_Vergisi20,Gelir_Vergisi27,Gelir_Vergisi35;
float madeni[5]={0},Aylik_Net_Ucret[100],Gelir_Vergisi_Kesintisi[100],Toplam_Aylik_Toplam_Brut_Ucret;
int TC_Kimlik[100] , Engelli_Vergi_Indirimi[100] , Engellilik_Derecesi[100];
float Aylik_Asgari_Ucret=1777.50,Aylik_Toplam_Net_Ucret,Toplam_Gelir_Vergisi_Kesintisi,Ortalama_Toplam_Aylik_Toplam_Brut_Ucret,Ortalama_Aylik_Toplam_Net_Ucret; 
int Aylik_Toplam_Ucret[100],Cocuk_Sayisi[100],Aylik_Brut_Ucret[100], Yasi_Buyuk_Cocuk[100],Yasi_Kucuk_Cocuk[100],Muaf_Tutulan_Ucret[100];
int CocukAYO[100], CocukAYO1[100] , CocukAYO2[100],Aylik_Toplam_Brut_Ucret[100],VEATBU[100];
char Medeni_Hal[100], Ad_Soyad[100], EsCD[100] , Engellilik_Durumu[100],Calisan_Kontrol;
int EsAYO=220;
int Toplam_Banknot[5];
int Toplam_Madeni[5];
printf("Calisan sayinizi giriniz:");
scanf("%d",&Calisan_Sayisi);
do{
printf("\nTC Kimlik numaranizi giriniz:");
scanf("%d",&TC_Kimlik[i]);
printf("%d", TC_Kimlik[i]);
printf("\nAd ve soyad giriniz:");
scanf("%s",&Ad_Soyad[i]);
printf("%s",&Ad_Soyad[i]);
printf("\n Medeni durumunuzu giriniz.Evli iseniz e veya E bekar iseniz b veya B giriniz.");
scanf("%s",&Medeni_Hal[i]);
switch(Medeni_Hal[i]){
	case'b':
	case'B':
	printf("Medeni durumu bekar.\n");
	break;
	case'e':
	case'E':
	printf("Medeni durumu evli.\n");
	break;
	default:
	printf("Hatali giris yaptiniz.\n");
	break;
}
  if(Medeni_Hal[i]=='e'|| Medeni_Hal[i]=='E')   { 
   printf("\nEsiniz calisiyor mu ?Calisisyorsa e calismiyorsa h yaziniz");
  scanf("%s",&EsCD[i]);
  if(EsCD[i]=='E'|| EsCD[i]=='e')
  printf("Esi calisiyor.");
  else if(EsCD[i]=='H'|| EsCD[i]=='h')
  printf("%d tl es aile yardim odenegi aliyor.",EsAYO);

  } 
    printf("\nBakmakla yukumlu oldugunuz cocuk sayisini giriniz:");
    scanf("%d",&Cocuk_Sayisi[i]);
    if(Cocuk_Sayisi[i]==0)
    printf("Cocugu yok.");
    else if(Cocuk_Sayisi[i]>0)
    printf("%d tane cocugu var.",Cocuk_Sayisi[i]);
    else
    printf("Hatali giris yaptýnýz."); 
    if(Cocuk_Sayisi[i]>0){
    printf("\nKac tane cocugunuzun yasi 6 dan buyuktur:");
    scanf("%d",&Yasi_Buyuk_Cocuk[i]);
    CocukAYO1[i]=Yasi_Buyuk_Cocuk[i]*45; 
    Yasi_Kucuk_Cocuk[i]=Cocuk_Sayisi[i] - Yasi_Buyuk_Cocuk[i];
	CocukAYO2[i]=Yasi_Kucuk_Cocuk[i] *25;
	CocukAYO[i]=CocukAYO1[i]+CocukAYO2[i];
	printf("\n%d tl cocuk aile yardim odenegi aliyor. " ,CocukAYO[i]);
	}
	printf("\nAldiginiz aylik brut ucreti giriniz:");
	scanf("%d",&Aylik_Brut_Ucret[i]);
	printf("\n Aylik %d tl brut ucret aliyor.",Aylik_Brut_Ucret[i]);
	Aylik_Toplam_Brut_Ucret[i]=Aylik_Brut_Ucret[i] + CocukAYO[i] + EsAYO;
	printf("\n%d tl aylik toplam brut ucret aliyor.", Aylik_Toplam_Brut_Ucret[i]);
	printf("\nBir fiziksel veya zihinsel engeliniz var mi?Var ise 'e' veya 'E' yok ise 'h' veya 'H' yi giriniz:");
	scanf("%s",&Engellilik_Durumu[i]);
	switch(Engellilik_Durumu[i]){
	case 'H':
	case 'h':
	printf("Engelli degildir.");
	break;
	case 'e':
	case 'E':
	printf("Engellidir.");
	break;
	default:
	printf("Hatali giris yaptiniz!");
	}
	if(Engellilik_Durumu[i]=='e' ||  Engellilik_Durumu[i]=='E'){
	printf("\nEngellilik derecenize 1 ile 100 arasinda bir deger veriniz:");
	scanf("%d",&Engellilik_Derecesi[i]);
	if(Engellilik_Derecesi[i]<=100 && Engellilik_Derecesi[i]>=80){
	printf("1. dereceden engellidir.");
	Muaf_Tutulan_Ucret[i]=900;
	VEATBU[i]=Aylik_Toplam_Brut_Ucret[i]-900;
	if(VEATBU[i]<2000){
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*15/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else if(VEATBU[i]>=2000 && VEATBU[i]<5000){
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*20/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else if(VEATBU[i]>=5000 && VEATBU[i]<10000){
		Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*27/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else{
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*27/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	
 }
	else if(Engellilik_Derecesi[i]<80 && Engellilik_Derecesi[i]>=60){
	Muaf_Tutulan_Ucret[i]=470;
	printf("2. dereceden engellidir.");
	VEATBU[i]=Aylik_Toplam_Brut_Ucret[i] - 470;
	if(VEATBU[i]<2000){
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*15/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else if(VEATBU[i]>=2000 && VEATBU[i]<5000){
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*20/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else if(VEATBU[i]>=5000 && VEATBU[i]<10000){
		Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*27/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else{
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*27/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
 }
	else{
	Muaf_Tutulan_Ucret[i]=210;
	printf("3. dereceden engelliidir.");
	VEATBU[i]=Aylik_Toplam_Brut_Ucret[i] - 210;
		if(VEATBU[i]<2000){
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*15/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else if(VEATBU[i]>=2000 && VEATBU[i]<5000){
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*20/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else if(VEATBU[i]>=5000 && VEATBU[i]<10000){
		Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*27/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else{
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*27/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
 }
 }   
   if(Engellilik_Durumu[i]=='h' || Engellilik_Durumu[i]=='H'){
   VEATBU[i]= Aylik_Toplam_Brut_Ucret[i];
   if(VEATBU[i]<2000){
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*15/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else if(VEATBU[i]>=2000 && VEATBU[i]<5000){
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*20/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else if(VEATBU[i]>=5000 && VEATBU[i]<10000){
		Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*27/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
	else{
	Gelir_Vergisi_Kesintisi[i]=VEATBU[i]*27/100;
	printf("%.2f tl vergi kesintisi yapilmistir.",Gelir_Vergisi_Kesintisi[i]);
	Aylik_Net_Ucret[i]=Aylik_Toplam_Brut_Ucret[i] - Gelir_Vergisi_Kesintisi[i];
	printf("%.2f tl aylik net ucreti vardir.",Aylik_Net_Ucret[i]);
	}
   }for(x=0;x<Calisan_Sayisi;x++){
   	Aylik_Toplam_Net_Ucret+= Aylik_Net_Ucret[x];
   }
   
    while(1)   
    {
        if(Aylik_Net_Ucret[i] >= 200)
        {
         banknot[0]++;Toplam_Banknot[0]++;
         Aylik_Net_Ucret[i] -= 200;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=100 && Aylik_Net_Ucret[i]<200)
        {
         banknot[1]++;Toplam_Banknot[1]++;
         Aylik_Net_Ucret[i] -= 100;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=50  &&  Aylik_Net_Ucret[i]<100)
        {
         banknot[2]++;Toplam_Banknot[2]++;
         Aylik_Net_Ucret[i]-= 50;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=20  && Aylik_Net_Ucret[i]<50)
        {
         banknot[3]++;Toplam_Banknot[3]++;
         Aylik_Net_Ucret[i]-= 20;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=10  && Aylik_Net_Ucret[i]<20)
        {
         banknot[4]++;Toplam_Banknot[4]++;
         Aylik_Net_Ucret[i]-= 10;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=5   && Aylik_Net_Ucret[i]<10)
        {
         banknot[5]++;Toplam_Banknot[5]++;
         Aylik_Net_Ucret[i] -= 5;
         continue;
        }
        else
        break;

    } while(1)   //MADENÝ HESABI
    {
        if(Aylik_Net_Ucret[i]>= 1)
        {
         madeni[0]++;Toplam_Madeni[0]++;
         Aylik_Net_Ucret[i]-= 1;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=0.5 && Aylik_Net_Ucret[i]< 1)
        {
         madeni[1]++;Toplam_Madeni[1]++;
         Aylik_Net_Ucret[i]-= 0.5;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=0.25 && Aylik_Net_Ucret[i]< 0.5)
        {
         madeni[2]++;Toplam_Madeni[2]++;
         Aylik_Net_Ucret[i]-= 0.25;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=0.1 &&  Aylik_Net_Ucret[i]<0.25)
        {
         madeni[3]++;Toplam_Madeni[3]++;
         Aylik_Net_Ucret[i]-= 0.1;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=0.05  && Aylik_Net_Ucret[i]<0.1)
        {
         madeni[4]++;Toplam_Madeni[4]++;
         Aylik_Net_Ucret[i]-= 0.05;
         continue;
        }
        else if(Aylik_Net_Ucret[i]>=0.01   && Aylik_Net_Ucret[i]<0.05)
        {
         madeni[5]++;Toplam_Madeni[5]++;
         Aylik_Net_Ucret[i]-= 0.01;
         continue;
        }
        else
        break;
    }
    printf("\n200 TL : %d adet",banknot[0]);
    printf("\n100 TL : %d adet",banknot[1]);
    printf("\n50 TL  %d adet",banknot[2]);
    printf("\n20 TL : %d adet",banknot[3]);
    printf("\n10 TL : %d adet",banknot[4]);
    printf("\n5 TL : %d adet",banknot[5]);

    printf("\n1 TL : %d adet",madeni[0]);
    printf("\n50 Kurus : %d adet",madeni[1]);
    printf("\n25 Kurus : %d adet",madeni[2]);
    printf("\n10 Kurus : %d adet",madeni[3]);
    printf("\n5 Kurus  : %d adet",madeni[4]);
    printf("\n1 Kurus : %d adet",madeni[5]);

   	if(Aylik_Net_Ucret[i]<2000){
   	Ikibinin_Altindaki_Maas++;
	   }
	   if(Medeni_Hal[i]=='e'|| Medeni_Hal[i]=='E'){
	Evli_Sayisi++;
	}
	else{
	Bekar_Sayisi++;
	}
	
if(EsCD[i]=='E' || EsCD[i]=='e'){
	Esi_Calisan_Sayisi++;
	}
	if(Cocuk_Sayisi[i]>0){
	Cocugu_Olan_Calisan++;
	}
	if(Cocuk_Sayisi[i]>3){
	Cocuk_3ten_Fazla++;
	}
		if(Engellilik_Durumu[i]=='e' || Engellilik_Durumu[i]=='E'){
	Engelli_Calisan_Sayisi++;
	}
       i++;
     } while(i<=Calisan_Sayisi-1);
   printf("\nVerilen aylik toplam net ucret:%.2f",Aylik_Toplam_Net_Ucret);
   for(z=0;z<Calisan_Sayisi;z++){
   	Toplam_Gelir_Vergisi_Kesintisi+=Gelir_Vergisi_Kesintisi[z];
   }
   printf("\nDevlete aktarilan aylik toplam gelir vergisi kesintisi:%.2f",Toplam_Gelir_Vergisi_Kesintisi);
   for(w=0;w<Calisan_Sayisi;w++){
   	Toplam_Aylik_Toplam_Brut_Ucret+=Aylik_Toplam_Brut_Ucret[w];
   }
   Ortalama_Toplam_Aylik_Toplam_Brut_Ucret=Toplam_Aylik_Toplam_Brut_Ucret/Calisan_Sayisi;
   printf("\nTum calisanlarin aylik toplam brut ucrtlerinin ortalamasi:%.2f",Ortalama_Toplam_Aylik_Toplam_Brut_Ucret);
   Ortalama_Aylik_Toplam_Net_Ucret=Aylik_Toplam_Net_Ucret/Calisan_Sayisi;
   printf("\nTum calisanlarin aylik toplam net ucretlerinin ortalamasi:%.2f",Ortalama_Aylik_Toplam_Net_Ucret);
   printf("\nToplam 200 tl:%d tane",Toplam_Banknot[0]);
   printf("\nToplam 100 tl:%d tane",Toplam_Banknot[1]);
   printf("\nToplam  50 tl:%d tane",Toplam_Banknot[2]);
   printf("\nToplam  20 tl:%d tane",Toplam_Banknot[3]);
   printf("\nToplam  10 tl:%d tane",Toplam_Banknot[4]);
   printf("\nToplam   5 tl:%d tane",Toplam_Banknot[5]);
   printf("\nToplam  1 kurus:%d tane",Toplam_Madeni[0]);
   printf("\nToplam  50 kurus:%d tane",Toplam_Madeni[1]);
   printf("\nToplam  25 kurus:%d tane",Toplam_Madeni[2]);
   printf("\nToplam  10 kurus:%d tane",Toplam_Madeni[3]);
   printf("\nToplam   5 kurus:%d tane",Toplam_Madeni[4]);
   printf("\nToplam   1 kurus:%d tane",Toplam_Madeni[5]);
   printf("\n2000 tl nin altinda aylik net ucret alan calisan sayisi:%d",Ikibinin_Altindaki_Maas);
    for(s=0;s<Calisan_Sayisi;s++){
    if(VEATBU[s]<2000){       /*Gelir_Vergisi15= % 15 lik gelir vergisi kesintisi yapilan kisi sayisi*/
    Gelir_Vergisi15++;
    continue;
	}
	else if(VEATBU[s]>=2000 && VEATBU[s]<5000){
	Gelir_Vergisi20++;
	continue;
	}
	else if(VEATBU[s]>=5000 && VEATBU[s]<10000){
	Gelir_Vergisi27++;
	continue;
	}
	else{
	Gelir_Vergisi35++;
	continue;
    }
	break;
	}
	printf("\n%15 lik oran icin calisan sayisi:%d",Gelir_Vergisi15);
	printf("\n%20 lik oran icin calisan sayisi:%d",Gelir_Vergisi20);
	printf("\n%27 lik oran icin calisan sayisi:%d",Gelir_Vergisi27);
	printf("\n%35 lik oran icin calisan sayisi:%d",Gelir_Vergisi35);
	Gelir_Vergisi_Yuzdesi15=(100*Gelir_Vergisi15)/Calisan_Sayisi;
	Gelir_Vergisi_Yuzdesi20=(100*Gelir_Vergisi20)/Calisan_Sayisi;
	Gelir_Vergisi_Yuzdesi27=(100*Gelir_Vergisi27)/Calisan_Sayisi;
	Gelir_Vergisi_Yuzdesi35=(100*Gelir_Vergisi35)/Calisan_Sayisi;
	printf("\n%15 lik oran icin calisan yuzdesi:%d",Gelir_Vergisi_Yuzdesi15);
	printf("\n%20 lik oran icin calisan yuzdesi:%d",Gelir_Vergisi_Yuzdesi20);
	printf("\n%27 lik oran icin calisan yuzdesi:%d",Gelir_Vergisi_Yuzdesi27);
	printf("\n%35 lik oran icin calisan yuzdesi:%d",Gelir_Vergisi_Yuzdesi35);
   	
	/*for(j=0;j<Calisan_Sayisi;j++){
	for( y=1; y<(Calisan_Sayisi-1);y++){
	if(Aylik_Toplam_Brut_Ucret[y]>Aylik_Toplam_Brut_Ucret[y+1]){
	h=Aylik_Toplam_Brut_Ucret[y];
	Aylik_Toplam_Brut_Ucret[y+1]=h;	
	}
    }
   }
	printf("\nAylik toplam brut ucreti en yuksek olan calisanin TC kimlik numarasi:%d ",TC_Kimlik[Calisan_Sayisi-1]);
	printf("\nAdi ve soyadi:%s",Ad_Soyad[Calisan_Sayisi-1]);
	printf("\nAylik toplam brut ucreti:%d",Aylik_Toplam_Brut_Ucret[Calisan_Sayisi-1]);
	printf("\nGelir vergisi kesintisi:%f",Gelir_Vergisi_Kesintisi[Calisan_Sayisi-1]);
	printf("\nAylik net ucreti:%.2f",Aylik_Net_Ucret[Calisan_Sayisi-1]);

 
   for(a=1;a<Calisan_Sayisi;a++)
	for(c=0;c<Calisan_Sayisi-1;c++)
	b=Aylik_Net_Ucret[c];
	if(Aylik_Net_Ucret[c]>Aylik_Net_Ucret[c+1]){
		Aylik_Net_Ucret[c+1]=b;
	}
	printf("\nAylik net ucreti en buyuk olan calisanin adi:%s",Ad_Soyad[Calisan_Sayisi-1]);
	printf("\nTC kimlik numarasi:%d",TC_Kimlik[Calisan_Sayisi-1]);
	printf("\nAylik toplam brut ucreti:%d",Aylik_Toplam_Brut_Ucret[Calisan_Sayisi-1]);
	printf("\nGelir vergisi kesintisi:%.2f",Gelir_Vergisi_Kesintisi[Calisan_Sayisi-1]);*/
	printf("\nAylik net ucreti:%.2f",Aylik_Net_Ucret[Calisan_Sayisi-1]);
	Evli_Yuzdesi=(100*Evli_Sayisi)/Calisan_Sayisi;
	printf("\nTum calisanlar icinde evli olanlarin yuzdesi:%d",Evli_Yuzdesi);
	Bekar_Yuzdesi=(100*Bekar_Sayisi)/Calisan_Sayisi;
	printf("\nTum calisanlar icinde bekar olanlarin yuzdesi:%d",Bekar_Yuzdesi);
	Esi_Calisan_Yuzdesi=(100*Esi_Calisan_Sayisi)/Evli_Sayisi;
	printf("\nEvli olan calisanlarin icinde esi calisanlarin yuzdesi:%d",Esi_Calisan_Yuzdesi);
	Toplam_Cocuk_Sayisi+=Cocuk_Sayisi[i];
	Ortalama_Cocuk_Sayisi=Toplam_Cocuk_Sayisi/Cocugu_Olan_Calisan;
	printf("\nCalisanlarin bakmakla yukumlu olduklari cocuk sayisi ortalamasi:%d",Ortalama_Cocuk_Sayisi);
	printf("\nBakmakla yukumlu oldugu cocuk sayisi 3 ten fazla olan calisan sayisi:%d",Cocuk_3ten_Fazla);
	printf("\nEngelli calisan sayisi:%d",Engelli_Calisan_Sayisi);
	Engelli_Calisan_Yuzdesi=(100*Engelli_Calisan_Sayisi)/Calisan_Sayisi;
	printf("\nEngelli calisanlarin tum calisanlar icindeki yuzdesi:%d",Engelli_Calisan_Yuzdesi);
	return 0;
   }
