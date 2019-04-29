#include<stdio.h>
 
int main(){

	char message[300]; //
	char c; //temporary variable for each character from the string, to make rotation easier
	int letter; //variable used to count the letters for the for loop while rotaing
	int RotationAmount; //valuable for the amount of roation
	int n; //temporary variable used to 
	int selection = 0; //user interface selection variable
	
	printf("For Rotational Cipher encryption of message press 1\n");
	printf("For Rotational Cipher decryprion of message press 2\n");
	printf("For Substitution Cipher encryption press 3\n");
    printf("For Substitution Cipher decryption press 4\n");
	scanf("%d", &selection); //stores the users input so it can be used
    getchar(); //sacrificial barrier so scanf doesn't effect the gets function below
	
	if(selection == 1){ //if statement used to allow user to select which encryption/decryption they want to use
	printf("Enter a message to encrypt: ");
	gets(message); //collects the user's input for the encrypted message
	printf("Enter rotation amount between 1 - 26: ");
	scanf("%d", &RotationAmount); //stores the users selected rotation amount so it can be implemented later
	
	if(RotationAmount > 26 || RotationAmount < 1){ //stops user from accidently breaking the program from a wrong input for rotation amount
	    printf("Invalid rotaion amount!\n"); //this is printed to let the user know that they have made a mistake
	    return 0; //return 0; exits the program so the user has to go back through and make a valid choice
	}
	
    for(letter = 0; message[letter] != '\0'; ++letter){ //for loop allows each letter to be rotated, the != '\0' tells the for loop to stop at the end of the string
		
		c = message[letter]; //message[letter] is assigned to c as a temp variable to allow for rotation, as it converts the letters into their ASCII equivilent
		
		if(c >= 65 && c <= 90){ //This only allows roation of ASCII character of values 65-90 or A-Z
			
			n = c + RotationAmount; //the rotation happens then it is assigned to a second temp variable "n"
		
		if(n > 90){ //this if statement stops a character being rotated past the letters on the ASCII table eg 90 which is Z
			n = n - 26; // This bring the character back to the alphebet
		}
		
        message[letter] = n; //reassigns n to message[letter] so it can be printed as a string
        }
	}
	
	printf("Encrypted message: %s\n", message); //prints encrypted message

}

if(selection == 2){
    
    printf("Enter a message to decrypt: ");
	gets(message);
	printf("Enter rotation amount: ");
	scanf("%d", &RotationAmount);
	
	if(RotationAmount > 26 || RotationAmount < 1){
	    printf("Invalid rotaion amount!\n");
	    return 0;
}

	for(letter = 0; message[letter] != '\0'; ++letter){
		
		c = message[letter];
		
		if(c >= 65 && c <= 90){
			
			n = c - RotationAmount; //the rotation amount is negative to rotate back to orginal
			
		if(n < 65){
			n = n + 26; //positive 26 as the cipher is rotated negativly and needs the plus 26 to rotate back to the ASCII equivilent
	    }
	    
	    message[letter] = n;
	    
		}
	}
	
printf("Decrypted message: %s\n", message);

}
  if(selection == 3){

    printf("Enter a message to encrypt: ");
	gets(message); //collects string, same as the rotational cipher
	printf("Decrypted message: "); //the print statement needs to be before the substition process because letters are printed to the console each cycle through the switch statement
    
	for(letter = 0; message[letter] != '\0'; ++letter){
		
		switch(message[letter]){ //switch statement allows each letter to substituted once
    
    case 'A': //if "A" is implimented into the switch statement then "S" will be printed
        printf("S"); //encrypted letter is printed each time the original letter is put through the for loop
        break; //break statement is used to stop each case from being executed
    case 'B':
        printf("Q");
        break;
    case 'C':
        printf("L");
        break;
    case 'D':
        printf("K");
        break;
    case 'E':
        printf("P");
        break;
    case 'F':
        printf("X") ;
        break;
    case 'G':
       printf("Y") ;
        break;
    case 'H':
        printf("N") ;
        break;
    case 'I':
        printf("C") ;
        break;
    case 'J':
        printf("H") ;
        break;
    case 'K':
        printf("I") ;
        break;
    case 'L':
        printf("U") ;
        break;
    case 'M':
       printf("V") ;
        break;
    case 'N':
        printf("Z") ;
        break;
    case 'O':
        printf("J") ;
        break;
    case 'P':
        printf("O") ;
        break;
    case 'Q':
        printf("B") ;
        break;
    case 'R':
        printf("T") ;
        break;
    case 'S':
        printf("M") ;
        break;
    case 'T':
        printf("G") ;
        break;
    case 'U':
        printf("R") ;
        break;
    case 'V':
        printf("W") ;
        break;
    case 'W':
        printf("A") ;
        break;
    case 'X':
        printf("F") ;
        break;
    case 'Y':
        printf("E") ;
        break;
    case 'Z':
        printf("D") ;
        break;
    case ' ':
        printf(" ");
        break;
    case '!':
        printf("!");
        break;
	}
	}
	printf("\n"); //a new line is printed to optimise the output
}

if(selection == 4){
    
    printf("Enter a message to decrypt: ");
	gets(message);
	printf("Decrypted message: ");

for(letter = 0; message[letter] != '\0'; ++letter){
		
		switch(message[letter]){ //switch statement decrypts the substitution cipher
    
    case 'S':
        printf("A"); //printing the decrypted letters
        break;
    case 'Q':
        printf("B");
        break;
    case 'L':
        printf("C");
        break;
    case 'K':
        printf("D");
        break;
    case 'P':
        printf("E");
        break;
    case 'X':
        printf("F") ;
        break;
    case 'Y':
       printf("G") ;
        break;
    case 'N':
        printf("H") ;
        break;
    case 'C':
        printf("I") ;
        break;
    case 'H':
        printf("J") ;
        break;
    case 'I':
        printf("K") ;
        break;
    case 'U':
        printf("I") ;
        break;
    case 'V':
       printf("M") ;
        break;
    case 'Z':
        printf("N") ;
        break;
    case 'J':
        printf("O") ;
        break;
    case 'O':
        printf("P") ;
        break;
    case 'B':
        printf("Q") ;
        break;
    case 'T':
        printf("R") ;
        break;
    case 'M':
        printf("S") ;
        break;
    case 'G':
        printf("T") ;
        break;
    case 'R':
        printf("U") ;
        break;
    case 'W':
        printf("V") ;
        break;
    case 'A':
        printf("W") ;
        break;
    case 'F':
        printf("X") ;
        break;
    case 'E':
        printf("Y") ;
        break;
    case 'D':
        printf("Z") ;
        break;
    case ' ':
        printf(" ");
        break;
    case '!':
        printf("!");
        break;
	}	
	}
    printf("\n");
}
}
