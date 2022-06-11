#include <iostream>
#include <cmath>
using namespace std;
int sum (int,int,int );
float average (int,int,int );


int main() {
  int x , y , z ;
  cout<< "enter 3 numbers \n" ;
  cin >> x >> y >> z ;
  cout <<"the sum is : " <<  sum (x,y,z) << "\n" ;
    cout <<"the average is : " << average (x,y,z) << "\n" ;



}
int sum (int n1,int n2,int n3 ){
    return n1 + n2 + n3 ;
}

float average (int n1,int n2,int n3 ){
    return sum (n1,n2,n3) / 3 ;


}