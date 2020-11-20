//Calcular o valor das passagens por comprador. Passagem da classe executiva = R$ 58,00. Passagem da classe econômica = R$ 35,00. 7
//Perguntar qual a forma de pagamento. Se for dinheiro deve analisar se o valor pago precisa de troco, se sim,
// informar o valor do troco. Se for cartão (crédito ou débito) você deverá dar um desconto de R$ 1,75 por passagem.
#include<stdio.h>
#include<conio.h>
#include<string.h>

int i,passagem,pass;
float passexc=0, passeco=0, troco=0, cartao=0, dinheiro=0, pag, valor=0, valornovo=0,passexc1=0, passeco1=0, novo=0;

int main()
{
	for (i=0; i<5; i++)
	{
	 
	printf("Quantas passagens vc gostaria? ");
	scanf("%f", &passagem);
	
	printf("Executiva(1) ou economica(2)? ");
	scanf("%f", &pass);

	//if (pass != 1 || pass != 2){
	//	printf("\nERRO!!! DIGITE SOMENTE OS NUMEROS 1 OU 2 ");
	//	return menu;
	//}
	
	if (pass == 1)
	{
		passexc= passagem* 58.00;
		printf("\nO total a se pagar pelas passagens e %.2f ", passexc);
	}

	if (pass == 2)
{
	passeco= passagem*35.00;
	printf("\nO total a se pagar pelas passagens e %.2f ", passeco);	
}
	fflush(stdin);
	printf("\nQual a forma de pagamento? dinheiro(1) cartao debito(2) ");
	scanf("%f", &pag);
	
	//if (pag != 1 || pag != 2){
	//	printf("\nERRO!!! DIGITE SOMENTE OS NUMEROS 1 OU 2 ");
	//	return ;
//	}
	
	if (pag == 1)
	{
	
	printf("\nQual valor vc ira pagar? ");
	scanf("%f", &valor);
	
		if (valor>=passexc)	
{
		valornovo =	valor - passexc;
		troco = valornovo;
		fflush(stdin);
		printf("\nO valor do seu troco e de %.2f", troco);
}
	else
{	
	printf("\nVALOR INSUFICIENTE, TENTE NOVAMENTE COM OUTRO VALOR: ");
	return 0; //retornar para o menu
}		
		
	if(valor>=passeco)
{
	valornovo =	valor - passeco;
	troco = valornovo;
	printf("\nO valor do seu troco e de %.2f", troco);
}	
	else
{
	printf("\nVALOR INSUFICIENTE, TENTE NOVAMENTE COM OUTRO VALOR: ");
	return 0; //retornar para o menu		
}	
						
	}
	
	if (pag == 2)
	{
		if(passexc)
		{
			passexc1=  passagem*(-1.75/100);
			printf("\nO desconto foi de %.2f", passexc1);
			fflush(stdin);
			novo= valor-passexc1;
			printf("\nO novo valor a se pagar e de %.2f", novo);
		}
		
		if(passeco)
		{
			passeco1= passagem*(-1.75/100);
			printf("\nO desconto foi de %.2f", passeco1);
			fflush(stdin);
			novo = valor - passeco1;
			printf("\nO novo valor a se pagar e de %.2f", novo);
		}	
	
	}

	printf("\n\n\n");
	}
	
}