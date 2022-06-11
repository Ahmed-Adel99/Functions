#include <iostream>
using namespace std;

void swap (int x , int y);


int main() {
  int x= 20 , y = 10;
          swap (x,y);
  cout << "x becomes"  << y << "\n";
  cout << "y becomes"  << x << "\n";
}

void swap (int  x , int y){
    int temp;
    temp = x ;
    x = y ;
    y = temp ;
}