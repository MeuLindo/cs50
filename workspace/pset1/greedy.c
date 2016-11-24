#include <stdio.h>
#include <cs50.h> 

int main(void){
    
    
    
    printf("WHAT IS THA MONAY?\n");
    float total = GetFloat();
   
    while(total < 0){
        
        printf("Invalid number. Use the right one now plz\n");
        total = GetFloat();
    }
    
    int totalCentavos = total * 100;
    
    int quarter = 25;
    int quarters = 0;
    int dime = 10;
    int dimes = 0;
    int nickel = 5;
    int nickels = 0;
    int penny = 1;
    int pennys = 0;
    
    
    if(totalCentavos >= quarter){
        
        quarters = totalCentavos/quarter;
        totalCentavos %= quarter;
        
    } 
     
    if(totalCentavos >= dime){
        
        dimes = totalCentavos/dime;
        totalCentavos %= dime;
        
        
    }    
    
    if(totalCentavos >= nickel){
        
        nickels = totalCentavos/nickel;
        totalCentavos %= nickel;
        
    }
    
      if(totalCentavos >= penny){
        
        pennys = totalCentavos/penny;
        totalCentavos %= penny;
        
    }
    int totalDeMoedas;
    
    totalDeMoedas = pennys + nickels + dimes + quarters;
    
  /*printf("Total de quarters = %.2d\n", quarters);
  printf("Total de dimes = %.2d\n", dimes);
  printf("Total de quarters = %.2d\n", nickels);
  printf("Total de dimes = %.2d\n", pennys);
  printf("A menor quantidade de moedas possíveis são : ");*/
  printf("%d\n", totalDeMoedas);
  
  
    
}