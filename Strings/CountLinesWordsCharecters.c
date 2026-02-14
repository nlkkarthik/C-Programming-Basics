#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i;
    int line = 0, word = 0, ch = 0;

    printf("Enter text (terminate with ~):\n");
    scanf("%[^~]", str);   // Read input until '~'

    for(i = 0; str[i] != '\0'; i++) {

        if(str[i] == '\n') {
            line++;
            word++;
        }
        else if(str[i] == ' ' || str[i] == '\t') {
            word++;
        }

        ch++;
    }

    printf("\nNo. of characters: %d", ch);
    printf("\nNo. of words: %d", word);
    printf("\nNo. of lines: %d\n", line);

    return 0;
}
