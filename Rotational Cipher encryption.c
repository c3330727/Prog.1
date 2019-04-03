#include <stdio.h>
#include <string.h>

char encryptionEquation(char c);

int main(void)
{
    char c;
    char rotationAmount;
    char encryptedResult;
    char message[200];
    c = c - 65;
    printf(" Select rotation amount: ");
    scanf("%c", &rotationAmount);
    printf(" Select a message in uppercase characters: ");
    scanf("%s", message);
    printf(" Message is : %s", message);
    
    return 0;
}

char encryptionEquation (char c){
    
    char c;
    char rotationAmount = 1;
    char selectedLettter;
    
    encryptedResult = (c - rotationAmount) * (% 26);
    
    
    
    return encryptedResult;
    
}