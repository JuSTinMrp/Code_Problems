#include<stdio.h>
#include<strings.h>
#include <ctype.h>
                            // +32 to lower     a-z => 97 to 12
                            // -32 to upper     A-Z => 65 to 90
int main(){
    char s[50];
    scanf("%s", s);
    
    for (int i = 0; s[i] != '\0'; i++){
        if (islower(s[i])){
            s[i] = toupper(s[i]);
        }
        else if (isupper(s[i])){
            s[i] = tolower(s[i]);
        }
    }
    
    printf("%s\n", s);
    return 0;
}
