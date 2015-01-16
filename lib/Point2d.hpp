/**********************************************************************
*  Copyright (c) 2008-2015, Alliance for Sustainable Energy.  
*  All rights reserved.
*  
*  This library is free software; you can redistribute it and/or
*  modify it under the terms of the GNU Lesser General Public
*  License as published by the Free Software Foundation; either
*  version 2.1 of the License, or (at your option) any later version.
*  
*  This library is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*  Lesser General Public License for more details.
*  
*  You should have received a copy of the GNU Lesser General Public
*  License along with this library; if not, write to the Free Software
*  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**********************************************************************/

#ifndef OPENSTUDIO_GEOMETRY_POINT2D_HPP
#define OPENSTUDIO_GEOMETRY_POINT2D_HPP

#include "GeometryAPI.hpp"

#include <vector>
#include <boost/optional.hpp>

namespace openstudio{

  // forward declaration
  //class Vector2d;

  class OPENSTUDIO_GEOMETRY_API Point2d{
  public:

    /// default constructor creates point at 0, 0
    Point2d();

    /// constructor with x, y
    Point2d(double x, double y);

    /// copy constructor
    Point2d(const Point2d& other);

    /// get x
    double x() const;

    /// get y
    double y() const;

    /// point plus a vector is a new point
    //Point2d operator+(const Vector2d& vec) const;

    /// point plus a vector is a new point
    //Point2d& operator+=(const Vector2d& vec);

    /// point minus another point is a vector
    //Vector2d operator-(const Point2d& other) const;

    /// check equality
    bool operator==(const Point2d& other) const;

  private:

    //REGISTER_LOGGER("utilities.Point3d");
    //Vector m_storage;
    double m_x;
    double m_y;
  };

  /// ostream operator
  OPENSTUDIO_GEOMETRY_API std::ostream& operator<<(std::ostream& os, const Point2d& point);

  /// ostream operator
  OPENSTUDIO_GEOMETRY_API std::ostream& operator<<(std::ostream& os, const std::vector<Point2d>& pointVector);

} // openstudio

#endif //OPENSTUDIO_GEOMETRY_POINT2D_HPP
