#include <iostream>
using namespace std;

class Andriodphone{
    string modelName;
    string brand;
    int ram;
    int storage;
    
    public:
    void setModelName(string n){
        modelName=n;
    }
    string getModelName() {
        return modelName;
    }
    void setBrand(string b){
        brand=b;
    }
    string getBrand(){
        return brand;
    }
    void setRam(int r){
        ram=r;
    }
    int getRam(){
        return ram;
    }
    void setStorage(int s){
        storage=s;
    }
    int getStorage(){
        return storage;
    }
    
    void displayDetails(){
        cout<<"Phone details:"<<endl;
        cout<<"Model Name:"<<getModelName()<<endl;
        cout<<"Brand:"<<getBrand()<<endl;
        cout<<"Ram:"<< getRam()<<endl;
        cout<<"Storage:"<<getStorage()<<endl;
    }
};
int main(){
    Andriodphone phone;
    phone.setModelName("galaxy s23");
    phone.setBrand("samsung");
    phone.setRam(8);
    phone.setStorage(128);
    
    phone.displayDetails();
    return 0;
    
}
