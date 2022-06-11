#include <iostream>
#include <cmath>
using namespace std;

int larger (int  , int );

int main() {
    int n1,n2 ;
    // cout <<"Enter First number "<<"\n";
    // cin>> n1 ;
    // cout <<"Enter Second number "<< "\n";
    // cin>> n2;
   // cout<<"the larger is : " << larger(n1,n2)<< "\n";
   // int result = larger(n1,n2) ;
    int result = larger(10,20) ;
    cout<<"the larger is : "<< result ;

    return 0;
}
int larger (int x , int y)
{
   // int max;
    if(x>=y){
        return x ;
    }
       // max=x;

   // }
    else
   // {
     //   max = y ;
    //}
    return y;

}