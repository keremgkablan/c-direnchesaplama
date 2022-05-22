#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

void direnchesap(int, int, int, int, int, int);

int main ()
{
	setlocale(LC_ALL, "Turkish");
	
	int bant,s1,s2,s3,s4,s5,s6;
	printf("Direnç Hesaplamaya Hoþgeldiniz...\n");
	printf("Bant Sayýsýný Giriniz: ");
	scanf("%d", &bant);
	if (bant == 4)
	{
		printf("\nBirinci Þerit\n1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 9-BEYAZ\nSayýyý Giriniz: ");
		scanf("%d", &s1);
		printf("\nÝkinci Þerit\n0-SÝYAH, 1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 9-BEYAZ\nSayýyý Giriniz: ");
		scanf("%d", &s2);
		printf("\nÇarpan Rengi\n0-SÝYAH, 1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 10-ALTIN, 11-GÜMÜÞ\nSayýyý Giriniz: ");
		scanf("%d", &s3);
		printf("\nTolerans Rengi\n1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 10-ALTIN, 11-GÜMÜÞ\nSayýyý Giriniz: ");
		scanf("%d", &s4);
		s5 = -1 ;
		s6 = -1 ;
		direnchesap(s1,s2,s3,s4,s5,s6);
	}
	else if (bant == 5)
	{
		printf("\nBirinci Þerit\n1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 9-BEYAZ\nSayýyý Giriniz: ");
		scanf("%d", &s1);
		printf("\nÝkinci Þerit\n0-SÝYAH, 1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 9-BEYAZ\nSayýyý Giriniz: ");
		scanf("%d", &s2);
		printf("\nÜçüncü Þerit\n0-SÝYAH, 1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 9-BEYAZ\nSayýyý Giriniz: ");
		scanf("%d", &s3);
		printf("\nÇarpan Rengi\n0-SÝYAH, 1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 10-ALTIN, 11-GÜMÜÞ\nSayýyý Giriniz: ");
		scanf("%d", &s4);
		printf("\nTolerans Rengi\n1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 10-ALTIN, 11-GÜMÜÞ\nSayýyý Giriniz: ");
		scanf("%d", &s5);
		s6 = -1;
		direnchesap(s1,s2,s3,s4,s5,s6);
	}
	else if (bant == 6)
	{
		printf("\nBirinci Þerit\n1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 9-BEYAZ\nSayýyý Giriniz: ");
		scanf("%d", &s1);
		printf("\nÝkinci Þerit\n0-SÝYAH, 1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 9-BEYAZ\nSayýyý Giriniz: ");
		scanf("%d", &s2);
		printf("\nÜçüncü Þerit\n0-SÝYAH, 1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 9-BEYAZ\nSayýyý Giriniz: ");
		scanf("%d", &s3);
		printf("\nÇarpan Rengi\n0-SÝYAH, 1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 10-ALTIN, 11-GÜMÜÞ\nSayýyý Giriniz: ");
		scanf("%d", &s4);
		printf("\nTolerans Rengi\n1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR, 8-GRÝ, 10-ALTIN, 11-GÜMÜÞ\nSayýyý Giriniz: ");
		scanf("%d", &s5);
		printf("\nSýcaklýk Katsayýsý\n1-KAHVE, 2-KIRMIZI, 3-TURUNCU, 4-SARI, 5-YEÞÝL, 6-MAVÝ, 7-MOR\nSayýyý Giriniz: ");
		scanf("%d", &s6);
		direnchesap(s1,s2,s3,s4,s5,s6);
	}
	else
		printf("\nHatalý Giriþ...Program Kapatýlýyor...");
	
	printf("\nProgramý kullandýðýnýz için teþekkürler...\n");
	
	getch();
	return (0);
}


void direnchesap(int v1, int v2, int v3, int v4, int v5, int v6)
{
	float tol,sicak;
	double hesap,carpan;

	if (v5 == -1 && v6 == -1)
	{
		if (v3 >= 10)
		{
			carpan = pow(10.0,-(v3-10));
		}
		else 
		{
			carpan = pow(10.0,(v3+1));
		}
		hesap = (v1*carpan) + (v2*carpan/10);
		
		switch(v4)
		{
			case 5  : tol=0.5; break;
			case 6  : tol=0.25; break;
			case 7  : tol=0.10; break;
			case 8  : tol=0.05; break;
			case 10  : tol=5; break;
			case 11 : tol=10; break;
			default : tol=v4;
		}
		
		float alt=(float)hesap-(hesap*tol)/100,ust=(float)hesap+(hesap*tol)/100;
		printf("\nDirenciniz: %.3lf ohm +/- %.2f%%\nTolerans Aralýðý: %.2lf - %.2lf ohm\n", hesap, tol, alt, ust);
	}
	else if (v5 != -1 && v6 == -1)
	{
		if (v4 >= 10)
		{
			carpan = pow(10.0,-(v4-11));
		}
		else 
		{
			carpan = pow(10.0,v4+2);
		}
		hesap = (v1*carpan) + (v2*carpan/10) + (v3*carpan/100);
		switch(v5)
		{
			case 5  : tol=0.5; break;
			case 6  : tol=0.25; break;
			case 7  : tol=0.10; break;
			case 8  : tol=0.05; break;
			case 10  : tol=5; break;
			case 11 : tol=10; break;
			default : tol=v5;
		}
		float alt=(float)hesap-(hesap*tol)/100,ust=(float)hesap+(hesap*tol)/100;
		printf("\nDirenciniz: %.3lf ohm +/- %.2f%%\nTolerans Aralýðý: %.2lf - %.2lf ohm\n", hesap, tol, alt, ust);
	}
	else 
	{
		if (v4 >= 10)
		{
			carpan = pow(10.0,-(v4-11));
		}
		else 
		{
			carpan = pow(10.0,v4+2);
		}
		hesap = (v1*carpan) + (v2*carpan/10) + (v3*carpan/100);
																							
		switch(v5)
		{
			case 5  : tol=0.5; break;
			case 6  : tol=0.25; break;
			case 7  : tol=0.10; break;
			case 8  : tol=0.05; break;
			case 10  : tol=5; break;
			case 11 : tol=10; break;
			default : tol=v5;
		}
		
		switch(v6)
		{
			case 1  : sicak=100; break;
			case 2  : sicak=50; break;
			case 3  : sicak=15; break;
			case 4  : sicak=25; break;
			case 6  : sicak=10; break;
			default : sicak=v6;
		}
		float alt=(float)hesap-(hesap*tol)/100,ust=(float)hesap+(hesap*tol)/100;
		float deg=(float)(sicak*(ust-alt))/(1000*10);
		printf("\nDirenciniz: %.3lf ohm  +/- %.2f%%\nTolerans Aralýðý: %.2lf - %.2lf ohm\n", hesap, tol, alt, ust);
		printf("1 Derecedeki sýcaklýk deðiþimi: %f\nSýcaklýk Katsayýsý: %.0f ppm/*C\n", deg, sicak);
	}
}


