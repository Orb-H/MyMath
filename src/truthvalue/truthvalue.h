#ifndef _TRUTHVALUE__H_
#define _TRUTHVALUE__H_

#include <string>

using namespace std;

namespace omm {
    namespace truthvalue {
        class TruthValue {
        private:
            // internal values
            int value;
            static const string stringValues[3]; // for toString
            static const TruthValue truthValues[3]; // for singleton

            // operator table
            static const int andValues[3][3]; // and
            static const int orValues[3][3]; // or
            static const int xorValues[3][3]; // xor
            static const int notValues[3]; // not

            // ctor
            TruthValue(int value);
        public:
            // ctor alternatives
            static TruthValue getTruthValue();
            static TruthValue getTruthValue(int value);
            static TruthValue getTruthValue(string stringValue);

            // getter
            int getValue() const;
            string toString() const;
            friend std::ostream& operator<<(std::ostream& os, const TruthValue& value);

            // operations
            TruthValue operator&(const TruthValue& other) const;
            TruthValue operator|(const TruthValue& other) const;
            TruthValue operator^(const TruthValue& other) const;
            TruthValue operator!() const;
        };
    }
}

#endif