#include<stdio.h>
 
int main(){

	char message[300];
	char c;
	int letter;
	int RotationAmount;
	int n;
	int selection = 0;
	
	printf(" For encryption of message press 1\n");
	printf(" For decryprion of message press 2\n");
	scanf("%d", &selection);
	getchar();
	

if((selection > 2) || (selection < 1)){
    printf(" Invalid selection\n");
}
	
	
	if(selection == 1){
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
		
		if(message[n] == 32 && message[n+1] == 32){
        break;
        }
        
		message[letter] = n;
		}
	}
	
printf("Encrypted message: %s\n", message);

}

	if(selection == 2){
	printf(" Enter a message to decrypt: ");
	gets(message);
	printf(" Enter rotation amount: ");
	scanf("%d", &RotationAmount);
	
	
	
	
	for(letter = 0; message[letter] != '\0'; ++letter){
		
		
		c = message[letter];
		
		if(c >= 65 && c <= 90){
			
			n = c + RotationAmount;
			
		if(n > 90){
			n = n - 26;
		}
		
		if(message[n] == 32 && message[n+1] == 32){
        break;
        }
        
		message[letter] = n;
		}
	}
	
printf(" Decrypted message: %s\n", message);

}
}
