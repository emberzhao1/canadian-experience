/**
 * @file Component.h
 * @author Emberlynn Zhao
 *
 *
 */

#ifndef CANADIANEXPERIENCE_MACHINELIB_COMPONENT_H
#define CANADIANEXPERIENCE_MACHINELIB_COMPONENT_H

#include "pch.h"
#include <wx/gdicmn.h>
#include <wx/graphics.h>
#include "Polygon.h"
#include "Machine.h"
/**
 * The component base class
 */
class Component : public cse335::Polygon
{
private:
    /// the position of the current component
    wxPoint mPosition;

    /// the origin position of the current component
    wxPoint mOrigin = wxPoint(0,0);

    /// the rotation of the current component
    double mRotation = 0.0;

    /// the polygon we are working with
    cse335::Polygon mPolygon;

public:
    Component();

    /// Copy constructor (disabled)
    Component(const Component &) = delete;

    /// Assignment operator
    void operator=(const Component &) = delete;

    virtual void Draw(std::shared_ptr<wxGraphicsContext> graphics);

    void AddSink(Component sink);

    void Reset();

    /**
     * Getting the position of the component
     * @return position
     */
    wxPoint GetPosition() {return mPosition;}

    /**
     * Setting the position of the component
     * @param position
     */
    void SetPosition(int x, int y) {mPosition = wxPoint(x,y);}

    /**
     * Getting the origin position of the component
     * @return origin
     */
    wxPoint GetOrigin() {return mOrigin;}

    /**
     * Setting the origin position of the component
     * @param origin
     */
    void SetOrigin(wxPoint origin) {mOrigin = origin;}
    /**
     * Getting the polygon
     * @return polygon
     */
    cse335::Polygon *GetPolygon() {return &mPolygon; }

    void SetPolygon(cse335::Polygon *polygon);


};

#endif //CANADIANEXPERIENCE_MACHINELIB_COMPONENT_H
