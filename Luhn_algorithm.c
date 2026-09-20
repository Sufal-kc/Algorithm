#include <stdio.h>
#include <string.h>

bool Luhn_algorithm(String card_number){
    int i=0;
    for (i= i+1; i < cardNumberLength; i+2){
        
    }
}


int main(){
    String card_number[16];
    printf("Enter the card number: ");
    scanf("%s", card_number);
    if (Luhn_algorithm(card_number)==true){
        printf("The card number is valid.\n");
    } else {
        printf("The card number is invalid.\n");
    };
}