#include <iostream>
using namespace std;
int main(){
       //take a real number and cheak if it is integer or not
       cout<<"enter a number: ";
       float x;
       cin>>x;
       int y;
       y = (int)x;
      if ((float)x == (int)y)
      cout<<"integer";
      else cout<<"not an integer";
}
