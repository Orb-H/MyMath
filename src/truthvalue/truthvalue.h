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
            static const string stringValues[]; // for toString
            static const TruthValue truthValues[]; // for singleton

            // ctor
            TruthValue(int value);
        public:
            // ctor alternatives
            static TruthValue getTruthValue();
            static TruthValue getTruthValue(int value);
            static TruthValue getTruthValue(string stringValue);

            // getter
            int getValue();
            string toString();
        };
    }
}

#endif