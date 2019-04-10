#include <stdio.h>
#include <string.h>

char encryptionEquation(char c);

int main(void)
{
    char rotationAmount;
    char encryptedResult;
    int numberOfCharacters = 0;
    char message[numberOfCharacters];
    int counter = 0;
    char n = 0;
    int c;
    //int size;
    
    
    printf(" Select rotation amount: ");
    scanf("%d", &rotationAmount);
    printf(" Select a message in uppercase characters: ");
    fgets("%s", message);
    
    
    numberOfCharacters = strlen(message);
    
      //      while (message[numberOfCharacters] < size)
          // {
        //numberOfCharacters++;
    //}
        printf(" Amount of characters in string: %d\n", numberOfCharacters);

    
    
    
     
     for(n = 0; n < numberOfCharacters ; n++){
     
        if(n == 32){
            n = n - rotationAmount;
        }
        
        c = message[n] + rotationAmount ;
        
        
        
        
        if(c > 90){
            c = c - 26;
        }
        

        
        printf("%c", c);
     }
    
   
}
   