#include <stdio.h>
#include <string.h>

int IsPalindrome(const char* word) {
    int length = strlen(word);
    int i;
    for (i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char word[100];
    printf("Kelimeyi girin: ");
    fgets(word, sizeof(word), stdin);
    if (word[strlen(word) - 1] == '\n') {
        word[strlen(word) - 1] = '\0';
    }
    if (IsPalindrome(word)) {
        printf("%s kelimesi palindromdur.\n", word);
    } else {
        printf("%s kelimesi palindrom değildir.\n", word);
    }
    return 0;
}