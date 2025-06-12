#ifndef ZERO_COUPON_BOND_H
#define ZERO_COUPON_BOND_H

#include "Bond.h"

class ZeroCouponBond : public Bond {
public:
    ZeroCouponBond(double faceValue, double maturity);

    double price(double ytm, bool continuous) const override;
    double duration(double ytm, bool continuous) const override;
    double yieldToMaturity(double marketPrice, bool continuous) const override;
};

#endif
