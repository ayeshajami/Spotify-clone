#include<iostream>
#include<cmath>
using namespace std;

class Quadrilateral {
    private:
    double side1,side2,side3,side4;
    double angle1,angle2;
    
    public:
    void setSides(double s1, double s2, double s3,double s4){
        side1=s1;
        side2=s2;
        side3=s3;
        side4=s4;
    }
    void setAngles(double a1, double a2){
        angle1=a1;
        angle2=a2;
    }
    double getPerimeter(){
        return side1+side2+side3+side4;
    }
    double getArea(){
        double s=getPerimeter()/2;
        return sqrt(s*(s-side1)*(s-side2)*(s-side3)*(s-side4));
        
    }
    void display (){
        cout<<"Sides:"<<side1<<","<<side2<<","<<side3<<","<<side4<<endl;
        cout<<"Angle:"<<angle1<<","<<angle2<<endl;
        cout<<"Perimeter:"<<getPerimeter()<<endl;
        cout<<"Area:"<<getArea()<<endl;
    }
};
int main(){
    Quadrilateral quad;
    quad.setSides(5.0,6.0,6.0,9.0);
    quad.setAngles(90.0,90.0);
    quad.display();
    return 0;
}

