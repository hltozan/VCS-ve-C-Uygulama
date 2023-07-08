#include <stdio.h>
#include <string.h>

void ReverseText(char* text) {
    int length = strlen(text);
    int i;
    char temp;
    for (i = 0; i < length / 2; i++) {
        temp = text[i];
        text[i] = text[length - i - 1];
        text[length - i - 1] = temp;
    }
}

int main() {
    char text[100];
    printf("Metni girin: ");
    fgets(text, sizeof(text), stdin);
    ReverseText(text);
    printf("Yeni metin %s", text);
    return 0;
}