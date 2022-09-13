#include <iostream>
#include "src/omm.h"

using namespace std;
using namespace omm;

int main() {
    truthvalue::TruthValue a(0), b(1), c(2);
    truthvalue::TruthValue d("false"), e("true"), f("undefined");

    cout << a.toString() << " " << b.toString() << " " << c.toString() << endl;
    cout << d.getValue() << " " << e.getValue() << " " << f.getValue() << endl;
}