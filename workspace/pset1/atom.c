#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
  
   char pos, botao;
   int entrada, saida, contratos;
   float final, corretagem = 1.8;
   
    printf("Bom dia meu querido criador, como está o seu café hoje?\n");
    printf("Infelizmente não há nada que eu possa fazer pois não fui configurado para receber a reposta dessa pergunta\n");
    printf("Vamos ao que interessa?\n");
    printf("Voce gostaria de calcular suas operações? S/N\n");
     botao = GetChar();
    
    while (botao != 'n' ){
        
     printf("Qual a sua posicão na operação? C/V\n");
     pos = GetChar();
     
     printf("Quantos contratos posicionados?\n");
     contratos = GetFloat();
    
     printf("Qual o preço da entrada?\n");
     entrada = GetInt();
     
     printf("Qual o preço da saída?\n");
     saida = GetInt();
     
     if(pos == 'C' || pos == 'c')
     {
         
         final = saida - entrada;
         
     }
     
     else {
         
         final = entrada - saida;
         
          }
     final *= contratos;
     
    float real;
    real = final * 0.2;
    
    printf("O resultado dessa operação foi de R$%.2f, o que são %.1f pontos por contrato resultando em um total de %.2f pontos.\n", real, final/contratos ,final);
    printf("Considerando o pacote de corretagem atual (R$%.2f) o resultado liquido foi de: R$%.2f\n\n",corretagem, real - contratos*corretagem);
    printf("Gostaria de continuar calculando?\n");
    botao = GetChar(); 
    
   }
   
}