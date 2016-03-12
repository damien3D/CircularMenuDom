/*==============================================================================
Copyright (c) 2010-2013 QUALCOMM Austria Research Center GmbH.
All Rights Reserved.
Proprietary - QUALCOMM Austria Research Center GmbH.

@file 
    Rectangle.h

@brief
    Header file for Rectangle class.
==============================================================================*/
#ifndef _QCAR_RECTANGLE_H_
#define _QCAR_RECTANGLE_H_


#include "Area.h"


namespace QCAR
{


/// Rectangle defines a 2D rectangular area
class QCAR_API Rectangle : public Area
{
public:
    Rectangle();

    Rectangle(const Rectangle& other);

    Rectangle(float leftTopX, float leftTopY,
              float rightBottomX, float rightBottomY);

    virtual ~Rectangle();

    Rectangle& operator=(const Rectangle& other);

    float getLeftTopX() const;

    float getLeftTopY() const;

    float getRightBottomX() const;

    float getRightBottomY() const;

    float getWidth() const;

    float getHeight() const;

    float getAreaSize() const;

    virtual TYPE getType() const;

protected:
    float left,top,right,bottom;
};


// Integer version of the Rectangle class
class QCAR_API RectangleInt : public Area
{
public:
    RectangleInt();

    RectangleInt(const RectangleInt& other);

    RectangleInt(int leftTopX, int leftTopY,
        int rightBottomX, int rightBottomY);

    virtual ~RectangleInt();

    RectangleInt& operator=(const RectangleInt& other);

    int getLeftTopX() const;

    int getLeftTopY() const;

    int getRightBottomX() const;

    int getRightBottomY() const;

    int getWidth() const;

    int getHeight() const;

    int getAreaSize() const;

    virtual TYPE getType() const;

protected:
    int left,top,right,bottom;
};

} // namespace QCAR



#endif // _QCAR_RECTANGLE_H_