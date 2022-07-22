// Student Name - Randolph Chabot
// Date - _____ - 6/30/22
// Course - ___ - ITCS 2530 C++ 1
// Assignment - - LAB 1 Ref pg 184 prob. # 7
// Reference -__- C++ Programming: From Problem  Analysis to Program Design.

/*Malik, D. S.. C++ Programming: From Problem Analysis to Program Design (MindTap Course List) (p. xxxiii). Cengage Learning. Kindle Edition. */


#include <iostream>

using namespace std;

int main() {
  // all variables are declared at once with their______ 
  // names separated by commas__________________________
double netBalance, payment, d1, d2,interestRate,averageDailyBalance,interest;
   //Print Statement cout & cin are examples of________
   //using namespace std;_____________________________
cout<<"Enter net balance: ";

cin>>netBalance;

  //Ouput Statement

cout<<"Enter payment: ";  //__________________________
  //Input statement
cin>>payment; //____________________________________
  //OUTPUT
cout<<"Enter number of days in the billing cycle: ";  //____
  //INPUT
cin>>d1;    //____________________________________
cout<<"Enter number of days payment is made before billing cycle: ";
cin>>d2;    //____________________________________
cout<<"Enter interestRate: ";
cin>>interestRate;   //____________________________________

//Declaring new variable value which equals the value of the ___
// algebraic expression expressed through variable double input 
//  types _______________________________________________________

averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

//Declaring the Value of interest calling variable input values

interest = averageDailyBalance * interestRate;

//Output statement declaring interest

cout<<"Total Interest: "<<interest;


}