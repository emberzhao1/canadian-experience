/**
 * @file Machine.h
 * @author Emberlynn Zhao
 *
 *
 */

#ifndef CANADIANEXPERIENCE_MACHINELIB_MACHINE_H
#define CANADIANEXPERIENCE_MACHINELIB_MACHINE_H

#include "MachineSystem.h"
class Shape;
class Component;
/**
 * The base machine class
 */
class Machine
{
private:

    /// the frame rate of the machine animation in seconds
    int mFrameRate = 30;

    /// the current frame we are in
    int mFrame = 0;

    /// the starting frame of the animation
    int mStartingFrame = 0;

    /// the ending frame of the animation
    int mEndingFrame = 0;

    /// the location of the machine
    wxPoint mLocation = wxPoint(0,0);

    /// Machine number
    int mNumber;

    /// the resource directory
    std::wstring mResourceDir;

    /// the vector of components
    std::vector<std::shared_ptr<Component>> mComponents;

    double mTime = 0.0;

public:
    /**
     * Constructor
     * @param machineNumber The machine number to set
     */
    Machine(int machineNumber) : mNumber(machineNumber) {}

    /**
     * Getting the machine number from the system
     * @return
     */
    int GetNumber() {return mNumber;}
    /**
     * Setting the machine number to the system
     * @param number
     */
    void SetNumber(int number){mNumber = number;}

    void AddComponent(std::shared_ptr<Component> component);

    void Draw(std::shared_ptr<wxGraphicsContext> graphics);

    /**
     * Geting the location of the machine
     */
    wxPoint GetLocation() { return mLocation; }

    /**
     * Setting the location of the machine
     * @param location
     */
    void SetLocation(wxPoint location) {mLocation = location;}

    /**
     * Setting the time of the machine
     * @param time
     */
    void SetTime(double time) {mTime = time;}

    /**
     * Getting the time of the machine
     * @return time
     */
    double GetTime() {return mTime;}

    /**
     * Getting the current frame
     * @return frame
     */
    int GetFrame() {return mFrame;}

    /**
     * Setting the frame
     * @param frame
     */
    void SetFrame(int frame) {mFrame = frame;}
    /**
     * Getting the frame rate
     * @return frame rate
     */
    int GetFrameRate() {return mFrameRate;}
    /**
     * Setting the frame rate
     * @param frameRate
     */
    void SetFrameRate(int frameRate) {mFrameRate = frameRate; }

};

#endif //CANADIANEXPERIENCE_MACHINELIB_MACHINE_H
