/* countword -- counts the number of words in a string
 *  word -- defined as a combination of characters without a space inbetween
 *
 *  Fallacies -- if no words are entered then it will still register that there is a word
 *                  It also does not accept tabs as a valid word separator
 */

#include <stdio.h>
int count_words(char string[])
{
    int i, words; /* Counters */
    for (i = 0, words = 0; string[i] != '\0'; ++i) {
        if (string[i] == ' ' || string[i] == '\n') {
            if (string[i-1] != ' ')
                ++words;
        }
    }
    return words;
}
int main(int argc, char const *argv[])
{
    char line[100]; /* Line for user data */
    fgets(line, sizeof(line), stdin);

    int words = count_words(line);

    printf("There are %d words in this string.\n", words);

    return 0;
}

