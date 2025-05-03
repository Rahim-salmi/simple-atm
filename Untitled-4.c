#include <stdio.h>
// a simple banking program 
double deposit(double balance){
   double amount = 0.0 ;
   printf("how much do you wanna deposit in $ : ");
   scanf("%lf",&amount);
   while(amount < 0){
      printf("please enter a positive number");
      scanf("%lf",&amount);
      if(amount > 0) break;
   }
   printf("you have deposited %.2lf in your bank account succefully\n",amount);
   balance += amount;
   return balance;
}
double withdraw(double balance){
   double amount = 0.0 ;
   printf("how much do you wanna withdraw in $ : ");
   scanf("%lf",&amount);
   while(amount > balance){
   printf("you only have %.2lf please enter less or equal to what you have in your bank account\n",balance);
   scanf("%lf",&amount);
   if(amount <= balance) break;
   }
   printf("you have withdrawed %.2lf from your bank account succefully\n",amount);
   balance -= amount;
   return balance;
}
void checkbalance(double balance){
   printf("you have $ %.2lf in your bank account\n",balance);
}
int main(){
int choice;
double balance = 0.0 ;
while(1){
printf("\nWelcome to [bank name] atm machine\npress 1 to deposit\npress 2 to withdraw\npress 3 to check balance\npress 4 to leave\n");
scanf("%d",&choice);
while(choice > 4 || choice < 1){
   printf("please only enter 1, 2, 3, or 4 to continue : ");
   scanf("%d",&choice);
   if(choice == 1 || choice == 2 ||choice == 3|| choice == 4) break;
}
switch(choice){
case 1 :
balance = deposit(balance);
break;
case 2 :
balance = withdraw(balance);
break;
case 3 :
checkbalance(balance);
break;
case 4 :
printf("Thank you for dealing with [bank name]");
break;
} 
if(choice == 4) break;
}
return 0;
}
