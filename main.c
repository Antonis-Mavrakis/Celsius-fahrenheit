


#include <stdio.h>
int main(void) {

    float C;
    float F;
    char choice;

    printf("type C for Celsius -> Fahrenheit\n OR\n F for Fahrenheit -> Celsious\n");
    scanf("%c", &choice);
    printf("enter the number: ");
    if (choice == 'C') {
        scanf("%f", &C);
        F = C* 9.0/5.0 + 32;
        printf("result: %.2f Fahrenheit\n", F);
    } else if(choice == 'F') {
        scanf("%f", &F);
        C = (F-32) * 5.0/9.0;
        printf("result: %.2f Celsius\n", C);
    }
    
        else {
            printf("try again\n");

        }




    





    return 0;
}

