#include<stdio.h>

int main(){
    char c[50]; int vow = 0, cons = 0, space = 0;
    scanf("%[^\n]s", &c);
    // printf("Output : %s", c);
    for (int i=0; c[i] != '\0'; i++)
    {
        if (c[i] != ' '){
            if (c[i]== 'A' || c[i]=='E' || c[i]=='a' ||c[i]=='I' ||c[i]=='O' ||c[i]=='U' ||c[i]=='e' ||c[i]=='i' ||c[i]=='o' ||c[i]=='u'){
                printf("Vowel: %c\n", c[i]);
                vow+=1;
            }
            else{
                printf("Consonant: %c\n", c[i]);
                cons+=1;
            }
        }
        else {        
        printf("Space character detected\n");
        space+=1;
        }
    }
    printf("\nVowels: %d\n", vow);
    printf("Consonants: %d\n", cons);
    printf("Spaces: %d\n", space);
}