#include "truthvalue.h"
#include <string>

using namespace omm::truthvalue;

const string TruthValue::stringValue[] = { "false", "true", "undefined" };

TruthValue::TruthValue() : value(2) {}

TruthValue::TruthValue(int value) : value(value) {}

TruthValue::TruthValue(string stringValue) {
    this->value = 2;
    for (int i = 0; i < 3; i++)
        if (TruthValue::stringValue[i] == stringValue)
            this->value = i;
}

TruthValue::~TruthValue() {}

int TruthValue::getValue() { return this->value; }

void TruthValue::setValue(int value) { this->value = value; }

void TruthValue::setValue(string stringValue) {
    this->value = 2;
    for (int i = 0; i < 3; i++)
        if (TruthValue::stringValue[i] == stringValue)
            this->value = i;
}

string TruthValue::toString() { return TruthValue::stringValue[this->value]; }