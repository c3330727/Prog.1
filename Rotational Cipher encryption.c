#include<stdio.h>
 
int main(){

	char message[300];
	char c;
	int letter;
	int RotationAmount;
	int n;
	
	printf("Enter a message to encrypt: ");
	gets(message);
	printf("Enter rotation amount: ");
	scanf("%d", &RotationAmount);
	
	for(letter = 0; message[letter] != '\0'; ++letter){
		
		
		c = message[letter];
		
		if(c >= 65 && c <= 90){
			
			n = c + RotationAmount;
			
		if(n > 90){
			n = n - 26;
		}
			
		message[letter] = n;
		}
	}
	
printf("Encrypted message: %s/n", message);

}
