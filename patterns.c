#include <stdio.h>


int first() {
    int rows;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 4; k++) {
            printf("*");
        }
        printf("\n");  
    }

    return 0;
}

int second() {
    int rows;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    for 
}

void main() {
    printf("\n---------------------\n1. (*) thicc slash\n2. On/Off Triangle\n3. Number Pyramid\n4. Star Butterfly.\n---------------------\n");
    int choice;
    scanf("%d", &choice);
    
    switch (choice) {
        case 1: 
            first();
        
        default:
            printf("----------------------\nSelect 1/2/3/4 dumbass.\n----------------------\n");
    }

}


