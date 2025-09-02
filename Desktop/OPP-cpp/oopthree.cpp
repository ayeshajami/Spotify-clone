#include<iostream>
#include<cmath>
using namespace std;

class Arc{
    private:
    double radius;
    double angle;
    double arc_length;
    
    public:
    void setRadius(double r){
        radius=r;
    }
    void setAngle(double a){
        angle=a;
    }
    void setArc_length(double arc){
        arc_length=arc;
    }
    
    void readValues() const{
        cout<<"Radius:"<<radius<<endl;
        cout<<"Angle:"<<angle<<endl;
        cout<<"Arc Length"<<arc_length<<endl;
    }

    void calculateArcLength(){
        arc_length=(angle/360)*2*M_PI*radius;
    }
};
int main(){
    Arc myArc;
    myArc.setRadius(5.0);
    myArc.setAngle(90.0);
    myArc.calculateArcLength();
    myArc.readValues();
    return 0;
    
}
