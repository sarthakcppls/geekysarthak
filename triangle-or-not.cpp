#include <iostream>
using namespace std;
int main(){
    int a,b,c;
   cout<<"enter the frist number: ";
   cin>>a;
   cout<<"enter the 2nd number: ";
   cin>>b;
   cout<<"enter the 3rd number: ";
   cin>>c;
   if (a+b > c and a+c > b and c+b > a) {
         cout<<"can be the sides of triangle";
         
   }
   else cout<<"can not be the triangle";
}
