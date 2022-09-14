#ifndef _TRUTHVALUE__H_
#define _TRUTHVALUE__H_

#include <string>

using namespace std;

namespace omm {
    namespace truthvalue {
        class TruthValue {
        private:
            int value;
            static const string stringValue[];
        public:
            // ctor / detor
            TruthValue();
            TruthValue(int value);
            TruthValue(string stringValue);
            ~TruthValue();

            // getter / setter
            int getValue();
            void setValue(int value);
            void setValue(string stringValue);
            string toString();
        };
    }
}

#endif