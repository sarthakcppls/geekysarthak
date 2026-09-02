#include <iostream>
using namespace std;
int main(){
       // take length and breath of rectangle and find out 
       // wheather the area is greater than parameter
       cout<<"enter the length: ";
       int l;
       cin>>l;
       cout<<"enter the breath: ";
       int b;
       cin>>b;
       if (2*(l + b ) < (l * b)) cout<<"area is greater";
       else cout<<"area is less";
       
}
