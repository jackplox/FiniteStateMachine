#include <stdio.h>

int candyMachine(int damt, int acamt);

int main() {
    int accumulated_amount = 0;
    int input = -1;

    printf("Finite State Machine Exercise\n\nby Jack\n\n");

    while(input != 0 && accumulated_amount != -1){
        printf("Current accumulated amount : %i\n", accumulated_amount);
        printf("\n...\nPlease select an option : "
               "\n0) Exit"
               "\n1) Deposit a nickel"
               "\n2) Deposit a dime"
               "\n3) Deposit a quarter"
               "\n4) Candy 1 --- 0.30"
               "\n5) Candy 3 --- 0.35"
               "\n6) Candy 3 --- 0.4"
               "\n7) Candy 4 --- 0.45"
               "\n8) Candy 5 --- 0.5"
               "\n...\n");
        scanf("%i", &input);

        accumulated_amount = candyMachine(input, accumulated_amount);

    }

    return 0;
}

int candyMachine(int damt, int acamt){

    // damt = Input from scanf
    // acamt = Accumulated amount
    /*
     * damt = 1,2,3 = nickel, dime, quarte
     *
     */

    if(acamt == 0){
        switch (damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 5;
            case 2:
                return 10;
            case 3:
                return 25;
        }
    }
    else if(acamt == 5){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 10;
            case 2:
                return 15;
            case 3:
                return 30;
        }
    }
    else if(acamt == 10){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 15;
            case 2:
                return 20;
            case 3:
                return 35;
        }
    }
    else if(acamt == 15){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 20;
            case 2:
                return 25;
            case 3:
                return 40;
        }

    }
    else if(acamt == 20){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 25;
            case 2:
                return 30;
            case 3:
                return 45;
        }
    }
    else if(acamt == 25){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 30;
            case 2:
                return 35;
            case 3:
                return 50;
        }
    }
    else if(acamt == 30){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 35;
            case 2:
                return 40;
            case 4:
                printf("\n\nYou've purchased candy #1!\n\n");
                return -1;
        }
    }
    else if(acamt == 35){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 40;
            case 2:
                return 45;
            case 4:
                printf("\n\nYou've purchased candy #1!\n\n");
                return -1;
            case 5:
                printf("\n\nYou've purchased candy #2!\n\n");
                return -1;
        }
    }
    else if(acamt == 40){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 45;
            case 2:
                return 50;
            case 4:
                printf("\n\nYou've purchased candy #1!\n\n");
                return -1;
            case 5:
                printf("\n\nYou've purchased candy #2!\n\n");
                return -1;
            case 6:
                printf("\n\nYou've purchased candy #3!\n\n");
                return -1;
        }
    }
    else if(acamt == 45){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 1:
                return 50;
            case 4:
                printf("\n\nYou've purchased candy #1!\n\n");
                return -1;
            case 5:
                printf("\n\nYou've purchased candy #2!\n\n");
                return -1;
            case 6:
                printf("\n\nYou've purchased candy #3!\n\n");
                return -1;
            case 7:
                printf("\n\nYou've purchased candy #4!\n\n");
                return -1;
        }
    }
    else if(acamt == 50){
        switch(damt){
            default:
                printf("\n\nInvalid selection\n\n");
                return acamt;
            case 0:
                return 0;
            case 4:
                printf("\n\nYou've purchased candy #1!\n\n");
                return -1;
            case 5:
                printf("\n\nYou've purchased candy #2!\n\n");
                return -1;
            case 6:
                printf("\n\nYou've purchased candy #3!\n\n");
                return -1;
            case 7:
                printf("\n\nYou've purchased candy #4!\n\n");
                return -1;
            case 8:
                printf("\n\nYou've purchased candy #5!\n\n");

        }
    }



}
