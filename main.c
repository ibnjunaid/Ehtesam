/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description: 
 *
 *
 *        Version:  1.0
 *        Created:  22/03/2020 21:48:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ehtesam, 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "functions.c"


int main(){
    
    printf("Problem 1:");
    int quantity;
    printf("\nEnter Purchase Quantity");
    scanf("%d",&quantity);
    printf("\nTotal Cost :: %d", totalCost(quantity,100));
    
    printf("\nProblem2:");
    int salary , yOe;
    printf("\nEnter Salary:");
    scanf("%d",&salary);
    printf("\nEnter yrs of experience :");
    scanf("%d",&yOe);
    printf("\nTotal Bonus: %f", bonus(salary,yOe));

    printf("\nProblem 3:");
    int ageArray[3];
    for(int i = 0; i <= 2; i++ ){
        printf("\nEnter Age for person %d :", i+1);
        scanf("%d",&ageArray[i]);
    }
    YoungestEldeset(ageArray,3);
    printf("\nProblem 4:");
    int classesAttended;
    int classesHeld;
    printf("\nEnter the number of classes Held::");
    scanf("%d",&classesHeld);
    printf("\nEnter the number of classes attended::");
    scanf("%d",&classesAttended);
    attendenceCalculator(classesHeld,classesAttended);
}
