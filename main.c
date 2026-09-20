#include <stdio.h>
#include "functions.h"
#include "utils.h"
#include <conio.h>


int main() {
    int choice;

    do {
        printf("\n\n");
        printf("  /====================================================\\\n");
        printf(" ||                   FUNCTIONS MENU                   ||\n");
        printf(" ||      (Algorithms Computability and Complexity)     ||\n");
        printf("  \\====================================================/\n");
        printf("\n\t\t     Select a function to try!\t\t");
        printf("\n------------------------------------------------------------------");
        printf("\n(1) Function 1: Counting Distinct Occurrences");
        printf("\n(2) Function 2: Pair Analysis in a Triangular Matrix");
        printf("\n(3) Function 3: Three-Dimensional Matrices Comparison");
        printf("\n(4) Function 4: Analysis of Asymmetric Cases in Conditional Statements");
        printf("\n(5) Function 5: Counting Elements Present in a Sorted Array");
        printf("\n(6) Quit");
        printf("\n\n");

        printf("\nYour choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                clear_screen();
                printf("\n+-------------------------------------------+");
                printf("\n| Function 1: Counting Distinct Occurrences |");
                printf("\n+-------------------------------------------+\n");

                count_distinct_occurrences();
                printf("\n\nPress any key to go back to menu.");
                _getch();
                clear_screen();

                break;
            case 2:
                clear_screen();
                printf("\n+--------------------------------------------------+");
                printf("\n| Function 2: Pair Analysis in a Triangular Matrix |");
                printf("\n+--------------------------------------------------+\n");

                printf("\n2");

                break;
            case 3:
                clear_screen();
                printf("\n+---------------------------------------------------+");
                printf("\n| Function 3: Three-Dimensional Matrices Comparison |");
                printf("\n+---------------------------------------------------+\n");

                //aaaaaaaaaaaa

                break;
            case 4:
                clear_screen();
                printf("\n+--------------------------------------------------------------------+");
                printf("\n| Function 4: Analysis of Asymmetric Cases in Conditional Statements |");
                printf("\n+--------------------------------------------------------------------+\n");

                //aaaaaaaaaaaa

                break;
            case 5:
                clear_screen();
                printf("\n+---------------------------------------------------------+");
                printf("\n| Function 5: Counting Elements Present in a Sorted Array |");
                printf("\n+---------------------------------------------------------+\n");

                //aaaaaaaaaaaa

                break;
            case 6:
                clear_screen();
                printf("\nLeaving program... Goodbye!\n\n");
                return 0;
            default:
                printf("\nInvalid option! Please try again.");
        }

    } while (choice != 6);

    return 0;
}
