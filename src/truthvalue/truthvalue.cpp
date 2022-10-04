#include "truthvalue.h"
#include <string>

namespace omm {
    namespace truthvalue {
        const string TruthValue::stringValues[3] = { "false", "true", "unknown" }; // for toString
        const TruthValue TruthValue::truthValues[3] = { TruthValue(0), TruthValue(1), TruthValue(2) }; // for singleton

        const int TruthValue::andValues[3][3] = { {0, 0, 0}, {0, 1, 2}, {0, 2, 2} }; // and
        const int TruthValue::orValues[3][3] = { {0, 1, 2}, {1, 1, 1}, {2, 1, 2} }; // or
        const int TruthValue::xorValues[3][3] = { {0, 1, 2}, {1, 0, 2}, {2, 2, 2} }; // xor
        const int TruthValue::notValues[3] = { 1, 0, 2 }; // not

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
        int TruthValue::getValue() const { return this->value; }
        string TruthValue::toString() const { return TruthValue::stringValues[this->value]; }
        std::ostream& operator<<(std::ostream& os, const TruthValue& value) { return os << value.toString(); }

        // operations
        TruthValue TruthValue::operator&(const TruthValue& other) const { return TruthValue::truthValues[TruthValue::andValues[this->value][other.value]]; }
        TruthValue TruthValue::operator|(const TruthValue& other) const { return TruthValue::truthValues[TruthValue::orValues[this->value][other.value]]; }
        TruthValue TruthValue::operator^(const TruthValue& other) const { return TruthValue::truthValues[TruthValue::xorValues[this->value][other.value]]; }
        TruthValue TruthValue::operator!() const { return TruthValue::truthValues[TruthValue::notValues[this->value]]; }
    }
}