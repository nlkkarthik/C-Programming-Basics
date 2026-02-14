#include <stdio.h>
#include <string.h>

int isSame(char s[]) {
    int l, i, j;
    int match = -1;

    l = strlen(s);
    i = 0;
    j = l - 1;

    while (i < j && match) {
        if (s[i] != s[j]) {
            match = 0;
            return match;
        }
        i++;
        j--;
    }

    return match;
}

int main() {
    char str[100];
    int match = -1;

    printf("Enter string: ");
    scanf("%s", str);

    match = isSame(str);

    if (match)
        printf("The given string is a palindrome.\n");
    else
        printf("The given string is not a palindrome.\n");

    return 0;
}
