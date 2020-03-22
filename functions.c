#include<stdio.h>

/*2. A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
    Ask user for quantity
    Suppose, one unit will cost 100.
    Judge and print total cost for user.
*/

int totalCost(int unit,int priceEachUnit ){
    int totalPrice = unit * priceEachUnit; 
    if(totalPrice <1000)
       return totalPrice;
   return totalPrice * 0.9; 
}

/*
3. A company decided to give bonus of 5% to employee 
    if his/her year of service is more than 5 years.
*/
float bonus(int salary,int yearsOfService){
    if (yearsOfService > 5){
        return salary * 0.05;
    }
    return 0;
}

void YoungestEldeset(int age[],int size){
    int greatest = age[0];
    int youngest = age[0];
    for (int i=0; i<size;i++){
        if(age[i]>greatest){
           greatest = age[i];
        }
        if(age[i]<youngest){
            youngest = age[i];
        }
    }
    printf("\nGreatest:: %d",greatest);
    printf("\nYoungest:: %d",youngest);
}
/* 
. A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not. */

void attendenceCalculator(int classesHeld, int classesAttended){
    int percentAttendence = (classesAttended / (float)classesHeld)*100;
    if(percentAttendence < 75){
        printf("\nYour attendence is : %d %%",percentAttendence);
        printf("\n Sorry You arent allowed to sit in exam"); 
    }   
    else{
        printf("\nYour attendence is : %d %%",percentAttendence);
        printf("\nCongo ! You are allowed to sit in exam ");
    }
}

