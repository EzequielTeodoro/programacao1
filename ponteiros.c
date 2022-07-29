/* *
* @autor: Jacson Rodrigues Correia da Silva <jacsonrcsilva@gmail.com>
 */
# inclui  " pontos.h "

int   d1= 100 , d2= 200 , d3= 300 , d4= 400 ;
int *p1=&d1, *p2=&d2, *p3=&d3, *p4=&d4;

int  impresso ()
{
	LIMPA_TELA;
	printf ( "     [Endereço de Memória] Valor: \n " );
	IMP ( " d1 " ); IMP_END ( " d1 " ,d1); IMP_INT ( " d1 " ,d1); DIGITAR;
	IMP ( " d2 " ); IMP_END ( " d2 " ,d2); IMP_INT ( " d2 " ,d2); DIGITAR;
	IMP ( " d3 " ); IMP_END ( " d3 " ,d3); IMP_INT ( " d3 " ,d3); DIGITAR;
	IMP ( " d4 " ); IMP_END ( " d4 " ,d4); IMP_INT ( " d4 " ,d4); DIGITAR;

	IMP ( " p1 " ); IMP_END ( " p1 " ,p1); IMP_PONT ( " p1 " ,p1); DIGITAR;
	IMP ( " p2 " ); IMP_END ( " p2 " ,p2); IMP_PONT ( " p2 " ,p2); DIGITAR;
	IMP ( " p3 " ); IMP_END ( " p3 " ,p3); IMP_PONT ( " p3 " ,p3); DIGITAR;
	IMP ( " p4 " ); IMP_END ( " p4 " ,p4); IMP_PONT ( " p4 " ,p4); DIGITAR;

	DIGITAR;
	retorno  1 ;
}

int  qualNumero ( int inicio, int fim, const  char *pal) {
	int resp;
	fazer {
		printf ( " Digite qual é %s [1-4]: " , amigo);
		scanf ( " %d " , &resp);
	} while (resp < inicio || resp > fim);
	retorno resp;
}

// Altera o valor de um ponteiro
void  valorPonteiro () {
	int resp = qualNumero ( 1,4 , " o ponteiro " );
	printf ( " Digite o valor em hexadecimal: p %d = " , resp);
	alternar (resp) {
		caso  1 : scanf ( " %p " , &p1); quebrar ;
		caso  2 : scanf ( " %p " , &p2); quebrar ;
		caso  3 : scanf ( " %p " , &p3); quebrar ;
		caso  4 : scanf ( " %p " , &p4); quebrar ;
	}
}

void  velorReferenciado () {
	int resp = qualNumero ( 1,4 , " o ponteiro " );
	printf ( " Digite o valor em inteiro: *p %d = " , resp);
	alternar (resp) {
		caso  1 : scanf ( " %d " , p1); quebrar ;
		caso  2 : scanf ( " %d " , p2); quebrar ;
		caso  3 : scanf ( " %d " , p3); quebrar ;
		caso  4 : scanf ( " %d " , p4); quebrar ;
	}
}

void  valorVariavel () {
	int resp = qualNumero ( 1,4 , " uma variável " ) ;
	printf ( " Digite o valor em inteiro: d %d = " , resp);
	alternar (resp) {
		caso  1 : scanf ( " %d " , &d1); quebrar ;
		caso  2 : scanf ( " %d " , &d2); quebrar ;
		caso  3 : scanf ( " %d " , &d3); quebrar ;
		caso  4 : scanf ( " %d " , &d4); quebrar ;
	}
}

int  principal ()
{
	int resp = 0 ;
	impressão ();
	while ( resp != 4 ) {
		printf ( " Menu \n "
		       "   [1] - Alteração o valor armazenado em p1, p2, p3 ou p4 (Ex.: p1=0x557b840e8028). \n "
		       "   [2] - Alteração o valor armazenado em d1, d2, d3 ou d4 (Ex.: d1=400. \n "
		       "   [3] - Alteração o valor referenciado por p1, p2, p3 ou p4 (Ex.: *p1=400). \n "
		       "   [4] - Senhor. \n "
		       " Digite a opção desejada: " );
		scanf ( " %d " , &resp);
		alternar (resp) {
			caso  1 : valorPonteiro ();
				quebrar ;
			caso  2 : valorVariavel ();
				quebrar ;
			caso  3 : velorReferenciado ();
				quebrar ;
			case  4 : printf ( " Até mais! \n " );
				quebrar ;
			default : printf ( " Não entendi! \n " );
		}
		impressão ();
	}
	LIMPA_TELA;
}
