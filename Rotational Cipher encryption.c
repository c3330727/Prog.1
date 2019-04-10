#include <stdio.h>
#include <string.h>
//asfds
char encryptionEquation(char c);

int main(void)
{
    char rotationAmount;
    char encryptedResult;
    int numberOfCharacters = 0;
    char message[1000];
    int counter = 0;
    char n = 0;
    int c;
    
    
    printf(" Select rotation amount: ");
    scanf("%d", &rotationAmount);
    printf(" Write a message in uppercase characters: ");
    fgets(message, 1000, stdin);
    scanf ("%[^\n]%*c", message);
    
    numberOfCharacters = strlen(message);
    
        printf(" Amount of characters in message: %d\n", numberOfCharacters);

    printf(" Encrypted message: "); 
     
     for(n = 0; n < numberOfCharacters ; n++){
    
        c = message[n] + rotationAmount ;
        
         if(c > 32 && c < 61){
            c = c - rotationAmount;
        }
        if(c > 90){
            c = c - 26;
        }
        
        
        printf("%c", c);
     }
    
   
}