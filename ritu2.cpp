#include<iostream>
#include<time.h>
using namespace std;
int main(){
   int a=(rand()%9);
   int b;
   srand(time(0));
   do{
   cout<<"Guess any number between 1 to 10:";
   cin>>b;
   cout<<endl;
   if(b>a){
    cout<<"The number you have guessed is larger than expected number!!"<<endl;
    cout<<"Try again!!!"<<endl;
   }
    else if(b<a){
    cout<<"The number you have guessed is smaller than expected number!!"<<endl;
    cout<<"Try again!!!"<<endl;
   }
   else{
    cout<<"Congrated!!You have guessed it right"<<endl;
    cout<<"You won!!"<<endl;
   }
   }
   while(b!=a);
   cout<<"The expected number was:"<<a<<endl;
    return 0;
   
}