#include <iostream>
#include "src/proposition/proposition.h"

using namespace std;
using namespace omm::proposition;

int main() {
    Proposition a;
    cout << a.getValue().toString() << endl;
}