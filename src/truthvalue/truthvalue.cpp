#include "truthvalue.h"
#include <string>

namespace omm {
    namespace truthvalue {
        const string TruthValue::stringValues[3] = { "false", "true", "undefined" }; // for toString
        const TruthValue TruthValue::truthValues[3] = { TruthValue(0), TruthValue(1), TruthValue(2) }; // for singleton

        // constructor
        TruthValue::TruthValue(int value) : value(value) {}

        // singleton functions
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

        // getter
        int TruthValue::getValue() { return this->value; }
        string TruthValue::toString() { return TruthValue::stringValues[this->value]; }
    }
}