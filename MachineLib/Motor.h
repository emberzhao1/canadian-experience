/**
 * @file Motor.h
 * @author Emberlynn Zhao
 *
 *
 */

#ifndef CANADIANEXPERIENCE_MACHINELIB_MOTOR_H
#define CANADIANEXPERIENCE_MACHINELIB_MOTOR_H

#include "pch.h"
#include "Component.h"
#include "IMotionSink.h"
#include "Polygon.h"

class Motor: public Component
{
private:
    /// the body of the motor
    cse335::Polygon mBody;

    /// the rotor of the motor
    cse335::Polygon mRotor;

    ///the images directory
    std::wstring mImagesDir;

    /// the speed of the motor
    double mSpeed = 0.0;
public:
    Motor(std::wstring imagesDir);
    void Draw(std::shared_ptr<wxGraphicsContext> graphics) override;
    void SetTime(double time);
    void SetSpeed(double speed) {mSpeed = speed; }
    double GetSpeed() {return mSpeed;}
};

#endif //CANADIANEXPERIENCE_MACHINELIB_MOTOR_H
