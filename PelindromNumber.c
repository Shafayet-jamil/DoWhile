#include<stdio.h>
int main(){
int num, reminder, reverse=0, temp;

printf("Enter a Number: ");

scanf("%d", &num);
temp=num;

 while(temp != 0)
 {
     reminder = temp%10;
     reverse = reverse*10+ reminder;
     temp = temp/10;
 }

printf("Reverse Number is : %d\n", reverse);

if(reverse==num){
    printf("%d is a Pelindrom Number.\n");
}
 else{
    printf("%d is not a Pelindrom Number.\n");
 }
 return 0;
}

 /*
 if(temp==reverse){
    printf("It is a Pelindrome Number");
}

else{
    printf("It's not a Pelindrome Number");
}
}
*/
