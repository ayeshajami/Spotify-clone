#include <iostream>
#include <string>
using namespace std;

class Android_Device {
private:
    int IMEIno;
    string Type;
    string Make;
    int Modelno;
    float Memory;
    string Operating_System;

public:
    
    void setValues(int imei, string t, string m, int mNO, float mem, string os) {
        IMEIno = imei;
        Type = t;
        Make = m;
        Modelno = mNO;
        Memory = mem;
        Operating_System = os;
    }

    void displayValues() {
        cout << "IMEI Number: " << IMEIno << endl;
        cout << "Type: " << Type << endl;
        cout << "Make: " << Make << endl;
        cout << "Model Number: " << Modelno << endl;
        cout << "Memory: " << Memory << " GB" << endl;
        cout << "Operating System: " << Operating_System << endl;
    }
};

int main() {
    Android_Device myDevice;

    myDevice.setValues(123456789, "Smartphone", "Samsung", 101, 64.5, "Android");

    myDevice.displayValues();

    return 0;
}
