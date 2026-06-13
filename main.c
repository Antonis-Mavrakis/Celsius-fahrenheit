#include <stdio.h>
int main(void) {

    float C;
    float F;
    char choice;

    printf("choice C for Celsius to get Fahrenheit\n OR\n F for Fahrenheit to get Celsious\n");
    scanf("%c", &choice);
    printf("enter the number: ");
    if (choice == 'C') {
        scanf("%.2f", &C);
        F = C* 9.0/5.0 + 32;
        printf("result: %.2f Celsius\n", F);
    } else if(choice == 'F') {
        scanf("%.2f", &F);
        C = (F-32) * 5.0/9.0;
        printf("result: %.2f Fahrenheit\n", C);
    }
    
        else {
            printf("try again");
        }




    





    return 0;
}

