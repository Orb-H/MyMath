#include "truthvalue.h"
#include <string>

using namespace omm::truthvalue;

const string TruthValue::stringValues[] = { "false", "true", "undefined" };
const TruthValue TruthValue::truthValues[] = { TruthValue(0), TruthValue(1), TruthValue(2) };

TruthValue::TruthValue(int value) : value(value) {}

TruthValue TruthValue::getTruthValue() { return TruthValue::truthValues[2]; }

TruthValue TruthValue::getTruthValue(int value) {
    if (value < 0 || value > 2) throw exception();
    return TruthValue::truthValues[value];
}

TruthValue TruthValue::getTruthValue(string stringValue) {
    for (int i = 0; i < 3; i++)
        if (stringValue == stringValues[i])
            return truthValues[i];
    return truthValues[2];
}

int TruthValue::getValue() { return this->value; }

string TruthValue::toString() { return TruthValue::stringValues[this->value]; }