#include <iostream>
#include<cmath>

using namespace std;

double deg2rad(double rad){
    double x ;
    x = rad*M_PI/180;
    return x;
}
double rad2deg(double deg){
    double y ;
    y = deg*180/M_PI;
    return y;
}

double findXComponent(double l1,double l2,double a1,double a2){
    double x = l1*cos(a1) + l2*cos(a2) ;
    return x;
}

double findYComponent(double l1,double l2,double a1,double a2){
    double y = l1*sin(a1) + l2*sin(a2) ;
    return y;
}

double pythagoras(double xcomp,double ycomp){
    double x = pow(xcomp,2)+pow(ycomp,2);
    return pow(x,0.5);
}

void showResult(double len,double diretion){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << len << endl;
    cout << "Direction of the resultant vector (deg) = " << diretion << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}



int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
