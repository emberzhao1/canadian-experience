/**
 * @file MachineSystem.cpp
 * @author Emberlynn Zhao
 */

#include "pch.h"
#include "MachineSystem.h"
#include "Machine.h"
#include "MachineCFactory.h"

MachineSystem::MachineSystem(std::wstring resourcesDir) : mResourcesDir(resourcesDir)
{
    SetMachineNumber(1);
}
/**
 * Setting the location of the machine system
 * @param location
 */
void MachineSystem::SetLocation(wxPoint location)
{
    mLocation = location;
}
/**
 * Getting the location of the machine system
 * @return
 */
wxPoint MachineSystem::GetLocation()
{
    return mLocation;
}
/**
 * Draw the machine
 * @param graphics Graphics context to draw on.
 */
void MachineSystem::DrawMachine(std::shared_ptr<wxGraphicsContext> graphics)
{
    // This will put the machine where it is supposed to be drawn
    graphics->PushState();
    graphics->Translate(mLocation.x, mLocation.y);

    mMachine->Draw(graphics);

    graphics->PopState();
}
/**
 * setting the machine frame
 * @param frame
 */
void MachineSystem::SetMachineFrame(int frame)
{
    if (frame < mMachine->GetFrame())
    {
        Reset();
        mMachine->SetFrame(frame);
        mMachine->SetTime(mMachine->GetFrame() / mMachine->GetFrameRate());
        return;
    }

    while (mMachine->GetFrame() < frame) {
        int currFrame = mMachine->GetFrame();
        currFrame++;
        mMachine->SetFrame(currFrame);
        mMachine->SetTime(mMachine->GetFrame() / mMachine->GetFrameRate());
    }
}
/**
 * Setting the frame rate
 * @param rate
 */
void MachineSystem::SetFrameRate(double rate)
{

}
/**
 * Set the machine number, creating the appropriate machine
 * @param machine Machine number
 */
void MachineSystem::SetMachineNumber(int machine)
{
    if (machine == 1)
    {
        // makes a machine factory object
        MachineCFactory factory(mResourcesDir);

        // then create the machine
        mMachine = factory.Create();
    }
    else
    {
        mMachine = std::make_shared<Machine>(2);
    }

}
/**
 * Getting the machine number
 * @return
 */
int MachineSystem::GetMachineNumber()
{
    return mMachine->GetNumber();
}
/**
 * Getting the machine time
 * @return
 */
double MachineSystem::GetMachineTime()
{
    return 0.0;
}
/**
 * Setting the flag
 * @param flag
 */
void MachineSystem::SetFlag(int flag)
{

}

void MachineSystem::Reset()
{
    // Reset the current time and restore to defaults.
    mMachine->SetFrameRate(30);

//    for (auto machine : mMachine)
//    {
//        machine->Reset();
//    }
}