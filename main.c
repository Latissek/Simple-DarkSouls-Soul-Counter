#include <stdio.h>
#define VYPIS printf("Number of souls: %d\n",counter)

int main(){
    unsigned int counter = 0;
    unsigned int number;
    char choise;
    int dead = 0;
    while (1){
        scanf(" %c",&choise);
        switch (choise){
        case 'p':
        case '+':
            scanf("%d",&number);
            counter += number;
            VYPIS;
            break;
        case 'm':
        case '-':
        case 'o':
            scanf("%d",&number);
            counter -= number;
            VYPIS;
            break;
        case 'c':
        case '=':
            VYPIS;
            break;
        case 's':
            counter += 8;
            VYPIS;
            break;
        case 'd':
            if(dead == 0){
                dead = counter;
                counter = 0;
                printf("YOU DIED FOOL zero souls for you!\n");
                break;
            }
            else{
                counter += dead;
                dead = 0; 
                VYPIS;
            }
            
            break;
        default:
            break;
        }
    }
}
