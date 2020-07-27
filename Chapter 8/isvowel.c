/* isvowel -- determines if the letter read in is a vowel or a consonant
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    char line[100]; /* Line for input data */
    char character; /* Character to be evaluated */

    while (1) {
        // Getting user data and formatting it
        printf("Enter a character: ");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%c", &character);
        // Checking if character is '\n'
        if (character == '\n')
            break;
        character = tolower(character);

        switch (character) {
            // If it is a vowel, fall through until the end, response will be the same for all
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a vowel!\n", character);
                break;
            default:
                printf("%c is a consanant :(\n", character);
                break;
        }

    }
    return 0;
}
