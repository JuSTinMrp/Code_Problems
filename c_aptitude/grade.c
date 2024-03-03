#include<stdio.h>
//  USE strcmp

int main(){
    char a;
    scanf("%c", &a);

    switch(a){
        case 'O':
        printf("You scored a top grade");
        break;
        
        case 'A':
        printf("You scored a better grade");
        break;
        
        case 'B':
        printf("You scored a average grade");
        break;
        
        case 'C':
        printf("You scored a not bad grade");
        break;
        
        case 'D':
        printf("You scored a worse grade");
        break;
        
        default:
        printf("You entered a invalid grade. \nTry 0,A,B,C,D");
        break;
    }
}

// if you need to compare strings,  
// #include <stdio.h>
// #include <string.h> // Include string.h for strcmp function

// int main() {
//     char grade[3]; // Create a char array to store grade
//     scanf("%s", grade); // Read grade as a string
    
//     if (strcmp(grade, "O") == 0 || strcmp(grade, "A") == 0 || strcmp(grade, "B") == 0 ||
//         strcmp(grade, "C") == 0 || strcmp(grade, "D+") == 0) {
//         printf("You scored a top grade");
//     } else {
//         printf("You entered an invalid grade. \nTry O, A, B, C, D+");
//     }

//     return 0;
// }


// USING SWITCH case
// #include<stdio.h>

// int main(){
//     char a[3];
//     scanf("%2s", a);
    
//     switch(a[0]){
//         case 'O':
//         case 'A':
//         case 'B':
//         case 'C':
//         case 'D':
//             if(a[1] == '+' && a[2] == '\0'){
//                 printf("You scored a top grade");
//                 break;
//             }
//             // If grade is D without the '+', fall through to default
//         default:
//             printf("You entered an invalid grade. \nTry O, A, B, C, D+");
//             break;
//     }
//     return 0;
// }
