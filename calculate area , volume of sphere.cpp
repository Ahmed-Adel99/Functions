#include <iostream>
#include <cmath>
using namespace std;

double area(int r);
double volume (int r);
int main() {
    int radius;
    cout<<"please enter the sphere radius \n";
    cin>> radius ;
    cout << "the sphere area is : "  << area(radius)<<"\n";
    cout << "the sphere volume is:" << volume(radius)<<"\n";


}
double area(int r)
{
    return 4*3.14*r*r ;

}
double volume (int r)
{
    return 3/4 * 3.14 * r * r * r ;
}