#include "proposition.h"

using namespace omm::proposition;

Proposition::Proposition() : value(TruthValue::getTruthValue(2)) {}

Proposition::Proposition(int value) : value(TruthValue::getTruthValue(value)) {}

Proposition::Proposition(TruthValue value) : value(value) {}

Proposition::~Proposition() {}

omm::truthvalue::TruthValue Proposition::getValue() { return this->value; }

void Proposition::setValue(TruthValue value) { this->value = value; }