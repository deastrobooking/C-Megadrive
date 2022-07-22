// Name Randolph Chabot 
// Date: July 16th 2022
// ITCS 2530 Lab 3

#include<bits/stdc++.h>

using namespace std;
// REFERENCE:
// https://cplusplus.com/reference/vector/vector/
//https://stackoverflow.com/questions/24853/what-is-the-difference-between-i-and-i

void input(vector<int> &nums,int n){
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        nums.push_back(val);
      // https://cplusplus.com/reference/vector/vector/push_back/
    }
}
/*_.size() _______________________________
https://www.geeksforgeeks.org/setsize-c-stl/#:~:text=size()%20function%20is%20used,elements%20in%20the%20set%20container.&text=Return%20Value%3A%20It%20returns%20the,elements%20in%20the%20set%20container.
*/
int getSum(vector<int> nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    return sum;
}

int getZeroes(vector<int> nums){
    int zeroes=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            zeroes++;
        }
    }
    return zeroes;
}

int getEvens(vector<int> nums){
    int evens=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            evens++;
        }
    }
    return evens;
}

int getOdds(vector<int> nums){
    int odds=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2!=0){
            odds++;
        }
    }
    return odds;
}

void print(vector<int> nums,int sum,int numZeroes,int evens,int odds,int mean){
    for(int i=0;i<nums.size();){
        for(int j=0;i<nums.size()&&j<10;j++){
            cout<<nums[i]<<" ";
            i++;
        }
        cout<<"\n";
    }
    cout<<"There are "<<evens<<" evens, which includes "<<numZeroes<<" zeroes\n";
    cout<<"Total number of odds are: "<<odds<<"\n";
    cout<<"The sum of numbers = "<<sum<<"\n";
    cout<<"The average is "<<mean;
}

int main(){
    int in;
    cin>>in;
    vector<int> nums;
    input(nums,in);
    int sum=getSum(nums);
    int numZeroes=getZeroes(nums);
    int evens=getEvens(nums);
    int odds=getOdds(nums);
    int mean=sum/nums.size();
    print(nums,sum,numZeroes,evens,odds,mean);
}