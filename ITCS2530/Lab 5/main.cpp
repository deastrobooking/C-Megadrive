// Student - Randolph Chabot
// Date - 7/20/22 
// Class - ITCS 2530
// Assignment - Lab 5 

#include<bits/stdc++.h>
using namespace std;
void linear_search(int list[],string list1[]){ //linear search
// for(int i=0;i<10;i++){
// cout<<list1[i];
// }
cout<<"Enter studnet id to search \n";
int n;
cin>>n;
for(int i=0;i<10;i++){
if(list[i]==n){
cout<<"student found and the name is: "<<list1[i];
}
}

}
int binarySearch(string list[], int l, int r, string x)
{
if (r >= l) {
int mid = l + (r - l) / 2;

// If the element is present at the middle
// itself
if (list[mid] == x)
return mid;

// If element is smaller than mid, then
// it can only be present in left sublistay
if (list[mid] > x)
return binarySearch(list, l, mid - 1, x);

// Else the element can only be present
// in right sublistay
return binarySearch(list, mid + 1, r, x);
}

// We reach here when element is not
// present in listay
return -1;
}
void function3(int list[],string list1[]){
// for(int i=0;i<10;i++){
// cout<<list1[i];
// }
}
int main(){
cout<<" 1. Search Student by Student ID \n 2. Search Student by their full name\n 3. See list of students (sorted by their first name in alphabetical order)\n";
int list2[] = {10005,
10003,
10009,
10001,
10002,
10007,
10004,
10006,
10008,
10000
};
string list1[] = {"John Anderson",
"Carmen Bok",
"Ann Chang",
"Alberta Ethan",
"Darwin Holsworthy",
"Josephine Jefferson",
"Curtis McDonald",
"Matthew Truman",
"Alan Bloomberg",
"Stephen Bruno"};
int n;
cin>>n;
if(n<=3){
if(n==1){
linear_search(list2,list1);
}
else if(n==2){
cout<<"Enter the name of student \n";
string s;
int n = 10;
cin>>s;
//getline(cin,s);
cout<<binarySearch(list1, 0, n - 1, s);
}
else if(n==3){
function3(list2,list1);
}
}
else{
cout<<"invalid input \n";
}
return 0;
}