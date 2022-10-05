#include <iostream>
#include "src/truthvalue/truthvalue.h"

using namespace std;
using namespace omm::truthvalue;

int main() {
    TruthValue a = TruthValue::getTruthValue(0), b = TruthValue::getTruthValue(1), c = TruthValue::getTruthValue(2);
    TruthValue d = TruthValue::getTruthValue("false"), e = TruthValue::getTruthValue("true"), f = TruthValue::getTruthValue("undefined");

    cout << a << " " << b << " " << c << endl;
    cout << d.getValue() << " " << e.getValue() << " " << f.getValue() << endl;
    cout << endl;

    cout << "FIRST\tSECOND\t\t&  and\t|  or\t^  xor" << endl<< "--------------------------------------------" << endl;

    TruthValue vals[3] = {a, b, c};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << vals[i] << "\t" << vals[j] << "\t\t";
            cout << (vals[i] & vals[j]) << "\t" << (vals[i] | vals[j]) << "\t" << (vals[i] ^ vals[j]) << endl;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "!" << vals[i] << " = " << !vals[i] << endl;
    }
}