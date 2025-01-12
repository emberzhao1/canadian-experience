project(MachineLib)

set(SOURCE_FILES
        pch.h
        IMachineSystem.h
        MachineSystemFactory.cpp MachineSystemFactory.h
        MachineStandin.cpp MachineStandin.h
        Polygon.cpp Polygon.h
        MachineDialog.cpp MachineDialog.h include/machine-api.h
        MachineSystemStandin.cpp
        MachineSystemStandin.h
        Const.cpp
        Const.h
        Component.cpp
        Component.h
        Pulley.cpp
        Pulley.h
        IMotionSink.h
        Shape.cpp
        Shape.h
        Motor.cpp
        Motor.h
        Machine.cpp
        Machine.h
        MachineSystem.cpp
        MachineSystem.h
        MachineCFactory.cpp
        MachineCFactory.h
        MotionSource.cpp
        MotionSource.h
)

# Removed:
# Motor.cpp Motor.h Pulley.cpp Pulley.h

find_package(wxWidgets COMPONENTS core base xrc html xml REQUIRED)
include(${wxWidgets_USE_FILE})

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
