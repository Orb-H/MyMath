#ifndef _PROPOSITION__H_
#define _PROPOSITION__H_

#include "src/truthvalue/truthvalue.h"

namespace omm {
    using namespace truthvalue;

    namespace proposition {
        class Proposition {
        private:
            TruthValue value;
        public:
            // ctor / detor
            Proposition();
            Proposition(int value);
            Proposition(TruthValue value);
            ~Proposition();

            // getter / setter
            TruthValue getValue();
            void setValue(TruthValue value);
        };
    }
}

#endif