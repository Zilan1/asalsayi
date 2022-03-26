#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayi;
	int sayac=0;
	
	printf("Sayi Girin: ");
	scanf("%d",&sayi);
	
	for(int i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
		sayac++;
        }
	}
	if(sayac==0)
	{
		printf("Sayi Asaldir.");
	}
	else
	{
		printf("Sayi Asal Degildir.");
	}
	
	
	
	
	
	
	//int i;
	//int sayi;
	//int ctoplam=0;
	//int ttoplam=0;
	
	//printf("Sayi Girin: ");
	//scanf("%d",&sayi);
	
	//for(i=0;i<=sayi;i++)
	//{
		//if(i%2==0)
		//{
		//printf("%d\n",i);
		//ctoplam=ctoplam+i;
	    //}
	    //else
	    //{
	    	//ttoplam+=i;
		//}
	//}
	
	//printf("Girilen Sayiya Kadar Olan Cift Sayilarin Toplami: %d\n",ctoplam);
	//printf("Girilen Sayiya Kadar Olan Tek Sayilarin Toplami: %d",ttoplam);
	
	return 0;
}
