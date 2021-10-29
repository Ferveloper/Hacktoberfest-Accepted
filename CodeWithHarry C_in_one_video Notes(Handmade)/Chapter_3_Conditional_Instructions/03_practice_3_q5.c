//Character Identification on the base of ASCII Values.
#include<stdio.h>
int main(){
    char letter;
    printf("Enter a Character:~>");
    scanf("%c", &letter);
    if(letter >= 65 && letter <= 90){
        printf("Entered Character is Upper Case.");
    }
    else if(letter >= 97 && letter <= 122){
        printf("Entered Character is Lower Case.");
    }
    else if(letter >= 48 && letter <= 57){
        printf("Entered Character is Number.");
    }
    else{
        printf("Entered Character is a Symbol/Unknown ASCII Character.");
    }
    return 0;
}