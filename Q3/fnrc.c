#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
    // TODO: YOUR CODE HERE!
    
    int varsta = 0; 
    
    int varcont = 0;
    
    int varle = 0; 
    
    int vardone = length -1;
    
    while (varle <= vardone) {
    
        varcont = 0;
    
        while (varcont <= vardone) {
    
            if( sentence[varcont]==sentence[varle] && varcont != varle){
    
                varsta = 0;
    
                break;
    
            }
    
            varsta = 1;
    
            varcont = varcont +1;
    
        }


    
        if ( varsta==1){
    
            printf("A primeira letra que se repete é ( %c )",sentence[varle]);
    
            printf("\nfirstNonRepeatingChar::END\n");
    
            return sentence[varle];
    
        }
    
        varle=varle +1;
      
    }
    
    printf("-1 (nenhuma letra se repete)");
    
    printf("\nfirstNonRepeatingChar::END\n");
    
    
    return -1;
    
}
int main(){
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    firstNonRepeatingChar("arara", 5);
    
    return 0;
}
