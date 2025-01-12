/**
 * @file IMotionSink.cpp
 * @author Emberlynn Zhao
 * Interface that represents a motion sink
 */
#ifndef CANADIANEXPERIENCE_MACHINESYSTEM_H
#define CANADIANEXPERIENCE_MACHINESYSTEM_H
#include "pch.h"
/**
 * Interface that represents a motion sink.
 */
class IMotionSink {
public:
    /// Destructor
    virtual ~IMotionSink() = default;

    virtual void SetRotation(double amount);

};

#endif //CANADIANEXPERIENCE_MACHINESYSTEM_H
