/**
 * @file Shape.cpp
 * @author Emberlynn Zhao
 */

#include "Shape.h"

Shape::Shape()
{

}

/**
 * Drawing the shape
 * @param graphics
 */
void Shape::Draw(std::shared_ptr<wxGraphicsContext> graphics)
{
    DrawPolygon(graphics, GetPosition().x,GetPosition().y);
}
/**
 * Setting the rotation of the shape
 * @param amount
 */
void Shape::SetRotation(double amount)
{

}

//