#include <iostream>
#include "src/omm.h"

using namespace std;
using namespace omm::truthvalue;

int main() {
    TruthValue a = TruthValue::getTruthValue(0), b = TruthValue::getTruthValue(1), c = TruthValue::getTruthValue(2);
    TruthValue d = TruthValue::getTruthValue("false"), e = TruthValue::getTruthValue("true"), f = TruthValue::getTruthValue("undefined");

    cout << a << " " << b << " " << c << endl;
    cout << d.getValue() << " " << e.getValue() << " " << f.getValue() << endl;
}