#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menuPrin();
int menuTemp();
int menuDist();
void escConvTemp();
void escConvDist();
void convC_F();
void convF_C();
void convKm_Mi();
void convMi_Km();
float ler();
void show(int flag, float resp, float conv);
void cls();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc;
	
	do{
		opc = menuPrin();
		switch(opc)
		{
		case 1:
			escConvTemp();
			break;
		case 2:
			escConvDist();
			break;
		default:
			break;
		}
	}while(opc != 0);
	
	return 0;
}

float ler(){
	float resp;
	
	printf("Digite o valor a ser convertido: ");
	scanf("%f", &resp);
	
	return resp;
}

void show(int flag, float resp, float conv){
	if(flag == 0){
		printf("A conversão de %0.2fºC é %0.2fºF.\n\n", resp, conv);
	} else if(flag == 1){
		printf("A conversão de %0.2fºF é %0.2fºC.\n\n", resp, conv);
	} else if(flag == 2){
		printf("A conversão de %0.2fKm é %0.2fMi.\n\n", resp, conv);
	} else if(flag ==3){
		printf("A conversão de %0.2fMi é %0.2fKm.\n\n", resp, conv);
	}
}

void escConvTemp(){
	int opcMenuTemp;
	opcMenuTemp = menuTemp();
	switch(opcMenuTemp){
		case 1:
			convC_F();
			break;
		case 2:
			convF_C();
			break;
		default:
			break;
	}
}

void escConvDist(){
	int opcMenuDist;
	opcMenuDist = menuDist();
	switch(opcMenuDist){
		case 1:
			convKm_Mi();
			break;
		case 2:
			convMi_Km();
			break;
		default:
			break;
	}
}

int menuPrin(){
	int opc;
	
	printf("*** Conversor ***\n");
	printf("Digite o valor para definir o que quer fazer:");
	printf("\n1 - Conversor de Temperatura.");
	printf("\n2 - Conversor de Distancia.");
	printf("\n0 - Sair.\n");
	scanf("%d", &opc);
	
	cls();
	
	return opc;
}

int menuTemp(){
	int opc;
	
	printf("*** Conversor de Temperatura ***\n");
	printf("Digite o valor para definir o que quer fazer:");
	printf("\n1 - Conversor de Celsius para Fahrenheit.");
	printf("\n2 - Conversor de Fahrenheit para Celsius.");
	printf("\n0 - Sair.\n");
	scanf("%d", &opc);
	
	cls();
	
	return opc;
}

void convC_F(){
	int flag = 0;
	float conv, resp;
	
	resp = ler();
	conv = (resp * 9 / 5) + 32; 
	
	show(flag, resp, conv);
}

void convF_C(){
	int flag = 1;
	float conv, resp;
	
	resp = ler();
	conv = (resp - 32) * 5 / 9; 
	
	show(flag, resp, conv);
}

int menuDist(){
	int opc;
	
	printf("*** Conversor de Distancia ***\n");
	printf("Digite o valor para definir o que quer fazer:");
	printf("\n1 - Conversor de Quilometros para Milhas.");
	printf("\n2 - Conversor de Milhas para Quilometros.");
	printf("\n0 - Sair.\n");
	scanf("%d", &opc);
	
	cls();
	
	return opc;
}

void convKm_Mi(){
	int flag = 2;
	float conv, resp;
	
	resp = ler();
	conv = resp * 0.621371; 
	
	show(flag, resp, conv);
}

void convMi_Km(){
	int flag = 3;
	float conv, resp;
	
	resp = ler();
	conv = resp * 1.60934; 
	
	show(flag, resp, conv);
}

void cls(){
	system("cls");
}