// Student - Randolph Chabot
// Date - 7/20/22 
// Class - ITCS 2530

#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

// Function Prototype of Vowel Chkr
int vowelChkr(char);

int main(){
   char a[50], b[50];
   int c, d = 0;
   cout<<"Enter the word you would like to delete the vowels from?\n";
   cin>>a;
   for(c = 0; a[c] != '\0'; c++) { // Post Increment Operator 
      // Conditional statement calling custom vowel chckr function
      if(vowelChkr(a[c]) == 0){
         b[d] = a[c];
         d++; // Post Increment Operator 
      }
   }
   b[d] = '\0';
   strcpy(a, b);
   // String Output 
   cout<<"String after delete vowels:"<<a;
   return 0;
}

// Function that checks for Vowels 
int vowelChkr(char ch){
   if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
      return 1;
   else
      return 0;
}