#ifndef PRICINGENGINE_H
#define PRICINGENGINE_H

#include "option.h"

class PricingEngine {
    public:
        virtual ~PricingEngine() = default;
        virtual float price(const Option& option) const = 0;
};

#endif