#include "ZeroCouponBond.h"
#include <cmath>

ZeroCouponBond::ZeroCouponBond(double faceValue, double maturity)
    : Bond(faceValue, maturity) {}

double ZeroCouponBond::price(double ytm, bool continuous) const {
    if (continuous) {
        return faceValue * std::exp(-ytm * maturity);
    } else {
        return faceValue / std::pow(1 + ytm, maturity);
    }
}

double ZeroCouponBond::duration(double ytm, bool continuous) const {
    return maturity;
}

double ZeroCouponBond::yieldToMaturity(double marketPrice, bool continuous) const {
    if (continuous) {
        return -std::log(marketPrice / faceValue) / maturity;
    } else {
        return std::pow(faceValue / marketPrice, 1.0 / maturity) - 1;
    }
}
