/**
 * @file Shape.h
 * @author Emberlynn Zhao
 *
 *
 */

#ifndef CANADIANEXPERIENCE_MACHINELIB_SHAPE_H
#define CANADIANEXPERIENCE_MACHINELIB_SHAPE_H
#include "Component.h"
#include "IMotionSink.h"

class Shape : public Component
{
private:
public:
    Shape();
    
    /// Copy constructor (disabled)
    Shape(const Shape &) = delete;
    
    /// Assignment operator
    void operator=(const Shape &) = delete;

    void Draw(std::shared_ptr<wxGraphicsContext> graphics) override;
    void SetRotation(double amount) override;

};

#endif //CANADIANEXPERIENCE_MACHINELIB_SHAPE_H
