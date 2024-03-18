#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double d,h,treeHight,angle;
    cout <<"Enter distance from you and tree in inches: ";
    cin>>d;
    cout<<"Enter  the height of your eye when peering into your angle-measuring device feet and inches: ";
    cin>>h;
    cout<<"Enter angle in degrees: ";
    cin>>angle;
    treeHight = h+d*tan(angle);
    cout<<"The hight of the tree is: "<<treeHight;
    return 0;
}
