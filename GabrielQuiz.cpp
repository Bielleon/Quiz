#include <stdio.h>

void limpa(){
	scanf("%*[^\n]");
	scanf("%*c");
}
int main()
{
	char resposta;
	int nota;
	printf("Quiz sobre tecnologia,digite a letra que achar carreta.\n");
	printf("pergunta 1:Qual destes passwords foi o mais usado na internet?\n A-a1b2c3 \n B-abcdef \n C-123456 \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='c'|| resposta=='C'){
		nota+=1;
	}
	limpa();
	
		printf("pergunta 2:O que significa a sigla �www� na internet?\n A-World wide web \n B-Web world wide \n C-Web wide world \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a' || resposta=='A'){
		nota+=1;
	}
	limpa();
	
		printf("pergunta 3:Qual foi o primeiro tweet da hist�ria?\n A-�Ol�, twitter�. \n B-�Ol�, mundo�. \n C-�Estou preparando meu twitter�. \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='c'|| resposta=='C'){
		nota+=1;
	}
	limpa();
	
		printf("pergunta 4:Qual foi a dura��o do primeiro v�deo do Youtube?\n A-3 minutos \n B-1 minuto \n C-18 segundos \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='c'|| resposta=='C'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 5:Em m�dia, quantas pesquisas totalmente novas s�o feitas no Google por dia?\n A-1 bilh�o \n B-450 milh�es \n C-280 milh�es \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='b'|| resposta=='B'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 6:Qual foi a primeira rede social da hist�ria da internet?\n A-Classmate \n B-MySpace \n C-Orkut \n \nResposta:" );
	scanf("%c", &resposta);
	
	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 7:Quando foi criado o primeiro smartphone da hist�ria?\n A-1994 \n B-2000 \n C-1998 \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 8:Qual o nome do ataque cibern�tico que atingiu computadores no mundo todo este ano?\n A-WannaFly \n B-WannaCry \n C-WannaSpy \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='b'|| resposta=='B'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 9:Qual a resolu��o de uma imagem Full HD?\n A-1920 x 1080 \n B-1280 x 720 \n C-2560 x 1440 \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 10:Quantos bits cabem em um byte?\n A-8 bits \n B-1 bit \n C-12 bits \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
	printf("seu resultado e = %d", nota);
	
	return (0);
	
	
}
