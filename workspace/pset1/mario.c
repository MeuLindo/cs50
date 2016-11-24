#include <cs50.h>
#include <stdio.h>

int main(void){
    int input = 0;
      printf("Até 23\n");
      scanf("%d", &input);
   
    for(int i = 1; i < input ; i++ ){
        
        for (int k = input; k >= i; k--){
          
          printf(" " );
       
        }
        
        for(int j = 0; j <= i ; j++ ){
          
          printf("#");  
          
        
        }
      printf("\n");
      
    }
        
   
    
}