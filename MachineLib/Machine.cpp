/**
 * @file Machine.cpp
 * @author Emberlynn Zhao
 */

#include "Machine.h"
#include "Shape.h"

void Machine::AddComponent(std::shared_ptr<Component> component)
{
    mComponents.push_back(component);
}

void Machine::Draw(std::shared_ptr<wxGraphicsContext> graphics)
{
    for (auto component : mComponents)
    {
        component->Draw(graphics);
    }
}