//CLASSWORK
#include <stdio.h>

void myFunction() {
printf("\nI just got executed!");
}
int myFunction2(int x, int y) {
return x + y;
}
//Declaration
int myFunction3(int, int);
//table sunction
int tablee(int n){
    for (int i=1;i<=10;i++){
        printf("\n%d",n);
        printf(" * %d",i);
        printf(" = %d",n*i);
    }
}
int main() {
    printf("Hello World!");
    int myNum = 15;
    float myFloatNum = 5.99;
    char myLetter = 'D';
    const float PI = 3.14; // PI will always be 3.14
    int x = 5; //Basic
    int y = 3;
    printf("%d\n", x + y); //Assignment
    printf("%d\n", x > 3 && y < 10); //Relational and Logical
    int myNum1 = 15; // Integer (whole number)
    float myFloatNum1 = 5.99; // Floating point number
    char myLetter1 = 'D'; // Character
    printf("%d\n", myNum1);
    printf("%f\n", myFloatNum1);
    printf("%c\n", myLetter1);
    float myFloatNum2 = 3.5;
    printf("%f\n", myFloatNum2); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum2); // Only show 1 digit
    printf("%.2f\n", myFloatNum2); // Only show 2 digits
    printf("%.4f\n", myFloatNum2); // Only show 4 digits
    int myNumm;
    printf("Type a number: \n");
    scanf("%d", &myNumm);
    printf("\nYour number is: %d", myNumm);

    int time = 22;
    if (time < 10) {
    printf("Good morning.");
    } else if (time < 20) {
    printf("Good day.");
    } else {
    printf("\nGood evening.");
    }

    

    myFunction(); // call the function

    

    int result = myFunction2(5, 3);
    printf("\nResult is = %d", result);
  
    // The main method
    int res = myFunction3(5, 3); // call the function
    printf("Result is = %d", result);
    
    //prints a table
    printf("\nenter a number: ");
    int numbr;
    scanf("\n%d",&numbr);
    if (numbr>0){
        tablee(numbr);
    }

    //comparing 2 numbers
    printf("\nenter a number1: ");
    int num1,num2;
    scanf("\n%d",&num1);
    printf("\nenter a number2: ");
    scanf("\n%d",&num2);
    if (num1>5 && num2>5){
        printf("\n %d",num1+num2);

    }
    else if(num1>5 || num2>5){
        printf("\n %d",num1*num2);
    }
    if (num1<5 && num2<5){
        printf("\n %d %d",num1+1,num2+1);
    }else {
        printf("hello world");
    }
    
    return 0;
}

// Function definition
int myFunction3(int x, int y) {
return x + y;
}