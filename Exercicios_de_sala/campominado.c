/* Campo Minado em C
* Programa com educação para a disciplina de programação, conforme exemplo para
* os alunos de Ciência da Computação das Faculdades Integradas de Caratinga (Doctum)
* Autor: Jacson Rodriges Correia-Silva <jacsonrcsilva@gmail.com>
* Para compilar: gcc -o campoMinado.bin campoMinado.c
 */
# inclui  < stdio.h >
# inclui  < stdlib.h >
# inclui  < stdio_ext.h >
# inclui  < time.h >
typedef  enum { false , true } boolean;

# define  Aviso ( msg ) printf( " Aviso:: " msg " \n " );
# define  Cuidado ( msg ) printf( " CUIDADO:: " msg " \n " );

# define  charBomba  ' * '
# define  charBandeira  ' B '
# define  charDuvida  ' ? '
# define  charVisitado  ' 0 '
# define  charNaoVisitado  ' . '

enum enumConteudo { comBomba, semBomba };
enum enumEstado { bandeira, duvida, visitado, naoVisitado };
enum enumConteudoTabuleiro { conteudo, estado, normal , minas };
enum enumUsuarioSituacao { perdeu, ganhou, jogando };

// / Conteúdo da posição
typedef  enum enumConteudo conteudoPos;
// / Estado da posição
typedef  enum enumEstado estadoPos;

// / Conteúdo do tabuleiro
typedef  enum enumConteudoTabuleiro conteudoTabuleiro;

// / Indicação do resultado da execução do usuário
typedef  enum enumUsuarioSituacao usuarioSituacao;

typedef  struct posTabuleiro {
	// / Estado: qual o estado da posição do tabuleiro
	conteudoPos conteudo;
	estadoPos estado;
	int    qntBombas;
} posTabuleiro;

 tabuleiro de estrutura typedef {
	posTabuleiro **posicoes;
	int linhas;
	int colunas;
	int bombas;
	int bombasMarcadas;
} tabuleiro;

boolean possuiBomba (posTabuleiro pos)
{
	return (pos. conteudo == comBomba)? verdadeiro : falso ;
}

char  conteudoToChar (posTabuleiro pos)
{
	// C: com bomba
	// S: sem bomba
	return (pos. conteudo == comBomba)?charBomba:charNaoVisitado;
}

char  estadoToChar (posTabuleiro pos)
{
	// B: bandeira
	// ?: duvida
	// V: visitado
	// N: nao visitado
	return (pos. estado == bandeira)?charBandeira:
		 (pos. estado == duvida)?charDuvida:
		 (pos. estado == visitado)?charVisitado:
		                          charNaoVisitado;
}

char  normalToChar (posTabuleiro pos)
{
	if (pos. estado == visitado)
	{
		if ( possuiBomba (pos) )
			retornar charBomba;
		senão
			return (pos. qntBombas == 0 )?
				charVisitado:
				posição qntBombas + 48 ;
	}
	else  return  estadoToChar (pos);
}

char  obtemCharPosicao (posTabuleiro pos, conteudoTabuleiro cont)
{
	alternar (cont.) {
		caso conteudo:
			return  conteudoToChar (pos);
			quebrar ;
		estado do caso :
			return  estadoToChar (pos);
			quebrar ;
		caso  normal :
			return  normalToChar (pos);
			quebrar ;
		caso minas:
			if ( pos. conteudo == comBomba )
				retornar charBomba;
			senão    
				return (pos. qntBombas == 0 )?
					charVisitado:
					posição qntBombas + 48 ;
			quebrar ;
	}
}

void  imprimeTabuleiro (tabuleiro *tab, conteudoTabuleiro cont, boolean rotulo)
{
	int lin, col, posição;
	char aux;
	
posicao 	= ( tab- > 2 colunas * 4 ) /
	printf ( " \n %*s \n " ,posicao, " Campo Minado " );
	printf ( "     Bombas: %3d  %*s%3d \n " ,
tab- 			> bombons ,
tab- 			> colunas * 4 - 15 ,
			" Bombas Marcadas: " ,
		       	tab- > bombasMarcadas );
	printf ( " \n " );

	for ( lin= 0 ; lin < tab- > linhas ; lin++ )
	{
		if (rotulo) {
			if (lin == 0 ) {
				printf ( " L/C: " );
				for (col= 0 ; col < tab-> colunas; col++)
				       	printf ( " %3d  " ,col+ 1 );
				printf ( " \n " );

				printf ( "     " );
				for (col= 0 ; col < tab-> colunas; col++)
				       	printf ( " ---- " );
				printf ( " \n " );
			}
			printf ( " %3d : " ,lin+ 1 );
		}

		for ( col= 0 ; col < tab- > colunas ; col++ )
			printf ( "   %c  " , obtemCharPosicao ( tab- > posicoes [lin][col], cont) );
		printf ( " \n " );
	}
}

/* *
* @fn AlocaMemoriaTabuleiro(tabuleiro *tab)
* @brief Aloca Memória para um Tabuleiro
* Aloca memória para um tabuleiro já definindo suas
* posições como: Sem Bomba, Não visitado e com 0 bombas
 */
tabuleiro alocaMemoriaTabuleiro ( tabuleiro *tab)
{
	int , j;
tab- 	> posicoes = (posTabuleiro**) calloc ( tab- > linhas , sizeof (posTabuleiro*) );
	for ( i= 0 ; i < tab- > linhas ; i++ )
	{
tab- 		> posições [i] = (posTabuleiro*) calloc ( tab- > colunas , sizeof (posTabuleiro) );
		for ( j= 0 ; j < tab- > colunas ; j++ )
		{
tab- 			> posições [i][j]. conteudo   = semBomba;
tab- 			> posições [i][j]. estado     = naoVisitado;
tab- 			> posições [i][j]. qntBombas = 0 ;
		}
	}
}

void  liberaMemoriaTabuleiro (tabuleiro *tab)
{
	int , j;
	for ( i= 0 ; i < tab- > linhas ; i++ )
		livre ( tab- > posições [i] );

	livre ( tab- > posições );
}

boolean verificaPosicaoTabValida (tabuleiro *tab, int linha, int coluna)
{
	// / Verifica se existe uma matriz
	if ( tab == NULL )
		retornar  falso ;

	// / Verifica então se a posição existe
	if ( linha < 0 || linha >= ( tab- > linhas ) ||
	     coluna < 0 || coluna >= ( tab- > colunas )
	   )   retornar  falso ;
	senão   retorna  true ;
}

boolean adicionaNumBombas (tabuleiro *tab, int linha, int coluna)
{
	if (! verificaPosicaoTabValida ( tab, linha, coluna ) )
		retornar  falso ;

tab- 	> posições [linha][coluna]. qntBombas ++;
	retorna  verdadeiro ;
}

boolean insereContagemBombas (tabuleiro *tab, int linha, int coluna)
{
	boolean retorno = true ;

	if (! verificaPosicaoTabValida ( tab, linha, coluna ) )
		retornar  falso ;

	retorno &= adicionaNumBombas ( tab, linha- ​​1 , coluna- 1 );
	retorno &= adicionaNumBombas ( tab, linha- 1 , coluna );
	retorno &= adicionaNumBombas ( tab, linha- ​​1 , coluna+ 1 );
	retorno &= adicionaNumBombas ( tab, linha , coluna- 1 );
	retorno &= adicionaNumBombas ( tab, linha , coluna+ 1 );
	retorno &= adicionaNumBombas ( tab, linha+ 1 , coluna- 1 );
	retorno &= adicionaNumBombas ( tab, linha+ 1 , coluna );
	retorno &= adicionaNumBombas ( tab, linha+ 1 , coluna+ 1 );

	retornar retorno;
}

boolean distribuiMinas (tabuleiro *tab)
{
	if (tab == NULL ) return  false ;
	senão
	{
		int cont, linha, coluna;
		time_t semente = tempo ( NULL );
		srand (semente);
		
		for (cont = 0 ; cont < tab-> bombs ; cont++)
		{
			fazer {
				linha = rand () % tab- > linhas ;
				coluna = rand () % tab- > colunas ;
			} while ( possuiBomba ( tab- > posicoes [linha][coluna] ) );
tab- 			> posições [linha][coluna]. conteudo = comBomba;
			insereContagemBombas (tab, linha, coluna);
		}

		retorna  verdadeiro ;
	}
}

tabuleiro criaTabuleiro ( int linhas , int colunas, int qntBombas)
{
	aba do tabuleiro;

	aba. linhas   = linhas;
	aba. colunas = colunas;
	aba. bombas   = qntBombas;
	aba. bombasMarcadas = 0 ;

	alocaMemoriaTabuleiro (&tab);
	if ( ! distribuiMinas (&tab) )
		Cuidado ( " Não foi possível distribuir bombas " );

	guia de retorno ;
}

boolean usuarioMarcaPosicao (tabuleiro *tab, int linha, int coluna, estadoPos est)
{
	// / Se é posição inválida, já sai
	if (! verificaPosicaoTabValida ( tab, linha, coluna ) )
		retornar  falso ;
	// / Se é posição já visitada, sai também
	if ( tab- > posições [linha][coluna]. estado == visitado ||
( tab- 	     > posições [linha][coluna]. estado == bandeira && est != bandeira)
	   )
		retorna  verdadeiro ;

	// Se o pedido for para marcar bandeira e posição já para bandeira,
	//   o número de bombas marcadas é incrementado
	if ( est == bandeira && tab- > posicoes [linha][coluna]. estado != bandeira )
			tab- > bombasMarcadas ++;

	// Se a já é bandeira, e o pedido para qualquer posição um,
	//   o número de bombas marcadas é decrementado
	if ( tab- > posições [linha][coluna]. estado == bandeira )
		tab- > bombasMarcadas --;

	// / Se a posição já for bandeira e pedido for bandeira, desmarca,
	//      senão marca normalmente
	if ( est == bandeira && tab- > posições [linha][coluna]. estado == bandeira)
tab- 		> posições [linha][coluna]. estado = naoVisitado;
	senão
tab- 		> posições [linha][coluna]. estado = est;

	// Se estiver marcando e posição para 0, abre as posições adjacentes
	if ( tab- > posicoes [linha][coluna]. qntBombas == 0 && est == visitado)
	{
		usuarioMarcaPosicao ( tab, linha- ​​1 , coluna- 1 , visitado);
		usuarioMarcaPosicao ( tab, linha- ​​1 , coluna , visitado);
		usuarioMarcaPosicao ( tab, linha- ​​1 , coluna+ 1 , visitado);
		usuarioMarcaPosicao ( tab, linha , coluna- 1 , visitado);
		usuarioMarcaPosicao ( tab, linha , coluna+ 1 , visitado);
		usuarioMarcaPosicao ( tab, linha+ 1 , coluna- 1 , visitado);
		usuarioMarcaPosicao ( tab, linha+ 1 , coluna , visitado);
		usuarioMarcaPosicao ( tab, linha+ 1 , coluna+ 1 , visitado);
	}

	retorna  verdadeiro ;
}

usuarioSituacao usuarioVerificaSituacao (tabuleiro *tab)
{
	int lin, col;
	int bombas= 0 , posVisitadas= 0 ;
	for ( lin= 0 ; lin < tab- > linhas ; lin++ )
		for ( col= 0 ; col < tab- > colunas ; col++ )
			if ( tab- > posicoes [lin][col]. estado == visitado)
				if ( tab- > posicoes [lin][col]. conteudo == comBomba)
					retorno perdido;
				else posVisitadas++;
	if ( posVisitadas == (tab-> linhas *tab-> colunas - tab- > bombs ) )
		retornar ganhou;
	senão 	retornar jogando;
}

void  mensagem Ganhou ()
{
	printf ( " \n\t Parabéns, você é um vencedor!! \n " );
}

void  mensagem Perdeu ()
{
	printf ( " \n\t Que pena, você perdeu... tente novamente mais tarde! \n " );
}

void  limparTela ()
{
	if ( system ( " clear " )) system ( " cls " );
}

void  pausar ()
{
	__fpurga (stdin);
	printf ( " \ npressione ENTER para continuar... " );

	scanf ( " %*c " );
	// Se não funcionar no Windows, troque o scanf pela Linha abaixo:
	// if ( system("ler") ) system("pause");
}

int  main ( int argc, char *argv[])
{
	tabuleiro Tabuleiro;
	int linha, coluna,
        qnt_linhas= 10 , qnt_colunas= 10 , qnt_bombas= 10 ;
	opção de caractere ;
    if (argc == 4 )
    {
        qnt_linhas = atoi (argv[ 1 ]);
        qnt_colunas = atoi (argv[ 2 ]);
        qnt_bombas = atoi (argv[ 3 ]);
    }
    Tabuleiro = criaTabuleiro (qnt_linhas, qnt_colunas, qnt_bombas);
	imprimeTabuleiro (&Tabuleiro, minas, true );
	pausador ();
	fazer {
		Limpar Tela ();
		imprimeTabuleiro (&Tabuleiro, normal , verdadeiro );
		printf ( " \n Digite a posição para jogar (linha coluna): " );
		scanf ( " %d  %d " , &linha, &coluna);
		
		opt= ' n ' ;
		printf ( " Deseja [V|v]isitar, marcando com [D|d]úvida, ou com [B|b]andeira: " );
		while (opt != ' v ' && opt != ' V ' && opt != ' d ' && opt != ' D ' && opt != ' b ' && opt != ' B ' )
		{
			scanf ( " %c " ,&opt);
		}
		mudar (optar) {
			caso  ' v ' :
			caso  ' V ' :
				usuarioMarcaPosicao (&Tabuleiro,linha- ​​1 ,coluna- 1 ,visitado);
				quebrar ;
			caso  ' d ' :
			caso  ' D ' :
				usuarioMarcaPosicao (&Tabuleiro,linha- ​​1 ,coluna- 1 ,duvida);
				quebrar ;
			caso  ' b ' :
			caso  ' B ' :
				usuarioMarcaPosicao (&Tabuleiro,linha- ​​1 ,coluna- 1 ,bandeira);
				quebrar ;
			padrão :
				Aviso ( " Opção Inválida! " );
				pausador ();
		}
	} while ( usuarioVerificaSituacao (&Tabuleiro) == jogando);

	Limpar Tela ();
	imprimeTabuleiro (&Tabuleiro, minas, true );
	switch ( usuarioVerificaSituacao (&Tabuleiro) ) {
		caso ganhou:
			linda Ganhou ();
			quebrar ;
		caso perdeu:
			linda Perdeu ();
			quebrar ;
	}
	liberaMemoriaTabuleiro (&Tabuleiro);
	pausador ();
}
