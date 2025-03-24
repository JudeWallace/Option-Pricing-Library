#ifndef BLACKSCHOLES_H
#define BLACKSCHOLES_H
#include "PricingEngine.h"

class BlackScholes : public PricingEngine {
    public:
        float normCDF(const double& x) const;
        float price(const Option& option) const override;
};

#endif