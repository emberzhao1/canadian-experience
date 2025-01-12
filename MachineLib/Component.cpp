/**
 * @file Component.cpp
 * @author Emberlynn Zhao
 */

#include "Component.h"
/**
 * Constructor
 */
Component::Component()
{
}

/**
 * Drawing the components
 * @param graphics
 */
void Component::Draw(std::shared_ptr<wxGraphicsContext> graphics)
{
    DrawPolygon(graphics, GetPosition().x, GetPosition().y);
}

/**
 * Adding sinks to the components
 * @param sink
 */
void Component::AddSink(Component sink)
{

}

/**
 * Resetting the components
 */
void Component::Reset()
{

}