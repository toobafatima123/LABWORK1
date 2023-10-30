#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct distance{
    int feet;
    int inches;
    };


int main(int argc, char const *argv[])
{
    int num;
    int sum=0;
    printf("enter a number");
    scanf("%d",&num);
    for (int a=0;a<num*2;a++){
      if ( a%2!=0){
        printf("%d\n ", a);
        sum+=a;
      }
    }
       
    printf("\nsum is: ");
    printf("%d\n",sum);
    int i=1;
    int sum2=0;
    while(i<num*2){
        if ( i%2!=0){
        printf("%d\n ", i);
        sum2+=i;
        }
        i++;
    
    }
    printf("\nsum from while loop: %d",sum2);
    int j=1;
    int sum3=0;
    do{
        if ( j%2!=0){
        printf("%d\n ", j);
        sum3+=j;
        }
        j++;
    
    }while(j<num*2);
    printf("\nsum from do while loop: %d",sum3);

    //exercise 2
    int rows;
    printf("\nenter no. of rows: ");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++){
      for (j=1;j<=rows-i;j++){
        printf(" ");
      }
    
      for (int k=1;k<=i;k++){
        printf("* ");
      }
      printf("\n");
    }
    //exercise 3

    char str1[20];
    printf("\nenter string 1: ");
    scanf("%s",&str1);
    char str2[20];
    printf("\nenter string 2: ");
    scanf("%s",&str2);
    if (strlen(str1) != strlen(str2)){
      printf("length of string should be same!");
    }
    else{
      int check=0;
      for (i=0;i<strlen(str1);i++){
      if (str1[i] != str2[i]){
        printf("strings are not equal!!");
          check=1;
          break;
      }
    if (check==0){
      printf("string is equal");
    }
    }
    }

    //exercise 4

    char sent[50];
    printf("\nEnter sentence: ");
    scanf(" %49[^\n]", sent);
  
    for (int f = 0; f < strlen(sent); f++) {
        if (sent[f] != ' ') {
            if (islower(sent[f])) {
                sent[f] = toupper(sent[f]);
            } else {
                sent[f] = tolower(sent[f]);
            }
        }
    }
    printf("%s\n", sent);

    //exercise 5
    int arr[100];
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j=0;j<n;j++){
      int uniq=1;
      for (int l=0;l<n;l++){
        if (j!=l && arr[j]==arr[l]){
          uniq=0;
        }
      }
      if (uniq==1){
        printf("\n%d",arr[j]);
      }

    }
    //exercise 6
    struct distance dist1,dist2,summ;
    printf("\nenter distance 1 in feet and inches:");
    scanf("\n%d %d",&dist1.feet,&dist1.inches);
    printf("\nenter distance 2 in feet and inches:");
    scanf("\n%d %d",&dist2.feet,&dist2.inches);
    summ.feet=dist1.feet+dist2.feet;
    summ.inches=dist1.inches+dist2.inches;
    
    if (summ.inches>=12){
      summ.inches-=12;
      summ.feet++;
    }
    printf("\nsum of the distances is: %d",summ.feet);
    printf(".%d",summ.inches);
    return 0;

}


