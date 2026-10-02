#include <iostream>
using namespace std;
int main (){
      cout<<"enter 3 number ";
      int a,b,c;
      cin>>a>>b>>c;
      if(a+b>c and b+c>a and c+a>b){
            cout<<"can be side of a triangle";
      }
      else cout<<"not side of triangle";
}
