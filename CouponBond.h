#ifndef COUPON_BOND_H
#define COUPON_BOND_H

#include "Bond.h"

class CouponBond : public Bond {
private:
    double couponRate;
    int frequency;

public:
    CouponBond(double faceValue, double maturity, double couponRate, int frequency);

    double price(double ytm, bool continuous) const override;
    double duration(double ytm, bool continuous) const override;
    double yieldToMaturity(double marketPrice, bool continuous) const override;
};

#endif
