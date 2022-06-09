
/* 
*Aluno: Ezequiel Teodoro Mendes
*Matrícula: 2018104179

*algoritmo:

*declarar as variáveis: recseg, pgseg, cseg, recter, pgter, cter, recqua, pgqua, cqua, recqui, pgqui, cqui, recsex, pgsex, csex;

*recseg = recebido segunda, pgseg = pagamento segunda, cseg = caixa segunda
*recter = recebido terça, pgter = pagamento terça, cter = caixa terça
*recqua = recebido quarta, pgqua = pagamento quarta, cqua = caixa quarta
*recqui = recebido quinta, pgqui = pagamento quinta, cqui = caixa quinta
*recsex = recebido sexta, pgsex = pagamento sexta, csex = caixa sexta


*pedir os valores recebidos na segunda e ler o valor em recseg;
*pedir os valores pagos na segunda e ler o valor em pgseg;
*cseg = recseg - pgseg;
*se cseg > 2000: saldo positivo;
*senão se cseg < -500: saldo negativo;

*fiz o passo acima análogo para os outros dias da semana (terça, quarta, quinta e sexta).
 
*/

#include <stdio.h>
int main (){
    float recseg, pgseg, cseg, recter, pgter, cter, recqua, pgqua, cqua, recqui, pgqui, cqui, recsex, pgsex, csex;
    
    
    // Segunda-Feira
    
    printf ("Digite o valor recebido na segunda-feira: ");
    scanf ("%f", & recseg);
    printf ("Digite o valor pago na segunda-feira: ");
    scanf ("%f", & pgseg);
    
    cseg = recseg - pgseg;
    
    printf ("Valor do caixa atual: R$ %.2f\n", cseg);
    
    // Avisos 
    
    if (cseg > 2000) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recseg);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgseg);
        printf ("Saldo atual positivo: R$ %.2f\n", cseg);
    }
        
    else if (cseg < -500) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recseg);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgseg);
        printf ("Saldo atual negativo: R$ %.2f\n", cseg);
        
    }
    
    
    // Terça-Feira
    
    printf ("Digite o valor recebido na terça-feira: ");
    scanf ("%f", & recter);
    printf ("Digite o valor pago na terça-feira: ");
    scanf ("%f", & pgter);
    
    cter = recter - pgter;
    
    printf ("Valor do caixa atual: R$ %.2f\n", cter);
    
    // Avisos 
    
    if (cter > 2000) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recter);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgter);
        printf ("Saldo atual positivo: R$ %.2f\n", cter);
    }
        
    else if (cter < -500) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recter);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgter);
        printf ("Saldo atual negativo: R$ %.2f\n", cter);
        
    }
    
      // Quarta-Feira
    
    printf ("Digite o valor recebido na quarta-feira: ");
    scanf ("%f", & recqua);
    printf ("Digite o valor pago na quarta-feira: ");
    scanf ("%f", & pgqua);
    
    cqua = cqua - pgqua;
    
    printf ("Valor do caixa atual: R$ %.2f\n", cqua);
    
    // Avisos 
    
    if (cqua > 2000) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recqua);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgqua);
        printf ("Saldo atual positivo: R$ %.2f\n", cqua);
    }
        
    else if (cqua < -500) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recqua);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgqua);
        printf ("Saldo atual negativo: R$ %.2f\n", cqua);
        
    }
    
    
     // Quinta-Feira
    
    printf ("Digite o valor recebido na quinta-feira: ");
    scanf ("%f", & recqui);
    printf ("Digite o valor pago na quinta-feira: ");
    scanf ("%f", & pgqui);
    
    cqui = recqui - pgqui;
    
    printf ("Valor do caixa atual: R$ %.2f\n", cqui);
    
    // Avisos 
    
    if (cqui > 2000) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recqui);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgqui);
        printf ("Saldo atual positivo: R$ %.2f\n", cqui);
    }
        
    else if (cqui < -500) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recqui);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgqui);
        printf ("Saldo atual negativo: R$ %.2f\n", cqui);
        
    }
    
    
     // Sexta-Feira
    
    printf ("Digite o valor recebido na sexta-feira: ");
    scanf ("%f", & recsex);
    printf ("Digite o valor pago na sexta-feira: ");
    scanf ("%f", & pgsex);
    
    csex = recsex - pgsex;
    
    printf ("Valor do caixa atual: R$ %.2f\n", csex);
    
    // Avisos 
    
    if (csex > 2000) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recsex);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgsex);
        printf ("Saldo atual positivo: R$ %.2f\n", csex);
    }
        
    else if (csex < -500) {
        printf ("Total de dinheiro recebido: R$ %.2f\n", recsex);
        printf ("Total de pagamentos realizados: R$ %.2f\n", pgsex);
        printf ("Saldo atual negativo: R$ %.2f\n", csex);
        
    }
    
    
        
    
}
