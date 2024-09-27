#include <stdio.h>
int main() {
    char character = 'B';
    char key = 'J';       
    char encryptedCharacter, decryptedCharacter;

    encryptedCharacter = character ^ key;
   
    decryptedCharacter = encryptedCharacter ^ key;

    printf("Original character: %c\n", character);
    printf("Encrypted character: %c\n", encryptedCharacter);
    printf("Decrypted character: %c\n", decryptedCharacter);

    return 0;
}
