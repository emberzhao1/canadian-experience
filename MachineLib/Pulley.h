/**
 * @file Pulley.h
 * @author Emberlynn Zhao
 *
 *
 */

#ifndef CANADIANEXPERIENCE_MACHINELIB_PULLEY_H
#define CANADIANEXPERIENCE_MACHINELIB_PULLEY_H
#include "Component.h"
#include "IMotionSink.h"
/**
 * The pulley component class
 */
class Pulley : public Component
{
private:
    /// the radius of the pully
    double mRadius = 0.0;
public:
    /// Default constructor (disabled)
    Pulley() = delete;

    /// Copy constructor (disabled)
    Pulley(const Pulley &) = delete;

    /// Assignment operator
    void operator=(const Pulley &) = delete;

    Pulley(double radius);
    void Draw(std::shared_ptr<wxGraphicsContext> graphics) override;
    void SetRotation(double amount) override;

    /**
     * Getting the radius
     * @return radius
     */
    double GetRadius() {return mRadius;}

    /**
     * Setting the radius
     * @param radius
     */
    void SetRadius(double radius) {mRadius = radius;}



};

#endif //CANADIANEXPERIENCE_MACHINELIB_PULLEY_H
