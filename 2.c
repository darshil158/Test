#include <stdio.h>

void count(char str[]) {
    int cons[26] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        if((ch >= 'a' && ch <= 'z') && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            cons[ch - 'a']++; 
        }
    }
    printf("Consonants :- \n");
    for (int i = 0; i < 26; i++) {
        char ch = 'a' + i;
        if (cons[i] > 0 && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            printf("%c :- %d\n", ch, cons[i]);
        }
    }
}
int main() {
    char str[100];
    printf("Enter a Sentence(One Word)  :- ");
    scanf("%s", str); 

    count(str);

    return 0;
}
