#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n\n");
        printf("  /====================================================\\\n");
        printf(" ||                   FUNCTIONS MENU                   ||\n");
        printf(" ||      (Algorithms Computability and Complexity)     ||\n");
        printf("  \\===================================================/\n");
        printf("\n\t\t     Select a function to try!\t\t");
        printf("\n------------------------------------------------------------------");
        printf("\nFunction 1: Counting Distinct Occurrences");
        printf("\nFunction 2: Pair Analysis in a Triangular Matrix");
        printf("\nFunction 3: Three-Dimensional Matrices Comparison");
        printf("\nFunction 4: Analysis of Asymmetric Cases in Conditional Statements");
        printf("\nFunction 5: Counting Elements Present in a Sorted Array");
        printf("\n(6) Quit");
        printf("\n\n");

        printf("\nYour choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                //aaaaaaaaaaaa
                printf("\n1");
                break;
            case 2:
                //aaaaaaaaaaaa
                printf("\n2");
                break;
            case 3:
                //aaaaaaaaaaaa
                printf("\n3");
                break;
            case 4:
                //aaaaaaaaaaaa
                printf("\n4");
                break;
            case 5:
                //aaaaaaaaaaaa
                printf("\n5");
                break;
            case 6:
                printf("\nLeaving program...\n\n");
                return 0;
            default:
                printf("Invalid option! Please try again.");
        }

    } while (choice =! 6);

    return 0;
}
