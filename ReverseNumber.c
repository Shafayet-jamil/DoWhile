//Reverse Number
#include<stdio.h>
int main(){
int number, reminder, reverse=0;
printf("Enter a number: ");
scanf("%d", &number);

while(number!=0){

reminder = number%10;
reverse= reverse*10 + reminder;
number = number/10;
}
printf("The reverse number is %d", reverse);
return 0;

}

