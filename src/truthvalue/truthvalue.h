#ifndef _TRUTHVALUE__H_
#define _TRUTHVALUE__H_

#include <string>

using namespace std;

namespace omm {
    namespace truthvalue {
        class TruthValue {
        private:
            int value;
            static const string stringValues[];
            static const TruthValue truthValues[];

            // ctor / detor
            TruthValue(int value);
            ~TruthValue();
        public:
            // ctor alternatives
            TruthValue getTruthValue();
            TruthValue getTruthValue(int value);
            TruthValue getTruthValue(string stringValue);

            // getter / setter
            int getValue();
            string toString();
        };
    }
}

#endif