/**
 * @file MotionSource.h
 * @author Emberlynn Zhao
 *
 *
 */

#ifndef CANADIANEXPERIENCE_MACHINELIB_MOTIONSOURCE_H
#define CANADIANEXPERIENCE_MACHINELIB_MOTIONSOURCE_H
#include "Motor.h"
#include "Pulley.h"
#include "IMotionSink.h"
class MotionSource
{
private:
    Pulley mPulley;
    Motor mMotor;
public:
    void Drive();
   // void SetSink(IMotionSink sink);
   void SetRotation(double amount);
};

#endif //CANADIANEXPERIENCE_MACHINELIB_MOTIONSOURCE_H
