/**
 * @file Motor.cpp
 * @author Emberlynn Zhao
 */

#include "Motor.h"

/// the size of the motor is 80 x 80
const int MotorSize = 80;
/**
 * Constructor
 */
Motor::Motor( std::wstring imagesDir) : mImagesDir (imagesDir)
{
    mBody.SetImage(mImagesDir + L"/motor2.png");
    mRotor.SetImage(mImagesDir + L"/shaft.png");
    mBody.Rectangle(GetPosition().x, GetPosition().y, MotorSize, MotorSize);
    mRotor.CenteredSquare(MotorSize/3);
}
/**
 * Drawing the motor
 * @param graphics
 */
void Motor::Draw(std::shared_ptr<wxGraphicsContext> graphics)
{
    Component::Draw(graphics);
    mBody.DrawPolygon(graphics, GetPosition().x, GetPosition().y);
    mRotor.DrawPolygon(graphics, GetPosition().x * 3, GetPosition().y * 2.05);

}
/**
 * Setting the motor time
 * @param time
 */
void Motor::SetTime(double time){
    SetRotation(time);
}