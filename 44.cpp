#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void to_title_case(char *s) {
    char *word = strtok(s, " ");
    while (word != NULL) {
        // Check if the word is an acronym (all uppercase)
        int isAcronym = 1;
        for (int i = 0; word[i] != '\0'; i++) {
            if (!isupper((unsigned char)word[i])) {
                isAcronym = 0;
                break;
            }
        }

        if (isAcronym) {
            printf("%s ", word);
        } else {
            // Capitalize the first letter of the word
            word[0] = toupper((unsigned char)word[0]);
            // Convert the rest of the word to lowercase
            for (size_t i = 1; i < strlen(word); ++i) {
                word[i] = tolower((unsigned char)word[i]);
            }
            printf("%s ", word);
        }
        word = strtok(NULL, " ");
    }
}

int main() {
    int t;
    scanf("%d\n", &t);

    for (int i = 0; i < t; ++i) {
        char s[1024]; // Assuming input lines are less than 1024 characters
        fgets(s, 1024, stdin);
        // Remove trailing newline, if any
        s[strcspn(s, "\n")] = 0;
        to_title_case(s);
        printf("\n");
    }

    return 0;
}
