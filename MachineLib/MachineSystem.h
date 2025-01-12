/**
 * @file MachineSystem.h
 * @author Emberlynn Zhao
 *
 *
 */

#ifndef CANADIANEXPERIENCE_MACHINELIB_MACHINESYSTEM_H
#define CANADIANEXPERIENCE_MACHINELIB_MACHINESYSTEM_H

#include "IMachineSystem.h"
class Machine;

class MachineSystem : public IMachineSystem
{
private:
    /// the location of the machine system
    wxPoint mLocation = wxPoint(0,0);

    /// the machine
    std::shared_ptr<Machine> mMachine;

    /// the resource directory
    std::wstring mResourcesDir;



 public:
    /// Destructor
    ~MachineSystem() = default;

    MachineSystem(std::wstring resourcesDir);

    void SetLocation(wxPoint location) override;

    wxPoint GetLocation() override;

    void DrawMachine(std::shared_ptr<wxGraphicsContext> graphics) override;

    void SetMachineFrame(int frame) override;

    void SetFrameRate(double rate) override;

    void SetMachineNumber(int machine) override;

    int GetMachineNumber() override;

    double GetMachineTime() override;

    void SetFlag(int flag) override;

    void Reset();
};

#endif //CANADIANEXPERIENCE_MACHINELIB_MACHINESYSTEM_H
