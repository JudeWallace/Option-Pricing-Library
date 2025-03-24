#include "BlackScholes.h"
#include <cmath>

float BlackScholes::normCDF(const double& x) const{
    return 0.5 * (1.0 + std::erf(x / std::sqrt(2.0)));
}

float BlackScholes::price(const Option& option) const {
    double d1 = (std::log(option.St_ / option.K_) + (option.r_ + 0.5 * std::pow(option.sigma_, 2)) * option.t_) / (option.sigma_ * std::sqrt(option.t_));
    double d2 = d1 - option.sigma_ * std::sqrt(option.t_);

    switch(option.type_) {
        case OptionType::CALL:
            return option.St_ * normCDF(d1) - option.K_ * std::exp(-option.r_ * option.t_) * normCDF(d2);
        case OptionType::PUT:
            return option.K_ * std::exp(-option.r_ * option.t_) * normCDF(-d2) - option.St_ * normCDF(-d1);
    }

    return -1;
};
