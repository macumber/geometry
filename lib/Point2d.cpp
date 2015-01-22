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

#include "Point2d.hpp"
//#include "Vector2d.hpp"

#include <iostream>

namespace openstudio{

  Point2d::Point2d()
    //: m_storage(2, 0.0)
    : m_x(0.0), m_y(0.0)
  {}

  /// constructor with x, y
  Point2d::Point2d(double x, double y)
    //: m_storage(2)
    : m_x(x), m_y(y)
  {
    //m_storage[0] = x;
    //m_storage[1] = y;
  }

  /// copy constructor
  Point2d::Point2d(const Point2d& other)
    //: m_storage(other.m_storage)
    : m_x(other.x()), m_y(other.y())
  {}

  /// get x
  double Point2d::x() const
  {
    //return m_storage[0];
    return m_x;
  }

  /// get y
  double Point2d::y() const
  {
    //return m_storage[1];
    return m_y;
  }

  /// point plus a vector is a new point
  //Point2d Point2d::operator+(const Vector2d& vec) const
  //{
  //  double newX = x()+vec.x();
  //  double newY = y()+vec.y();
  //  double newZ = z()+vec.z();
  //  return Point2d(newX, newY, newZ);
  //}

  /// point plus a vector is a new point
  //Point2d& Point2d::operator+=(const Vector2d& vec)
  //{
  //  m_storage[0] += vec.x();
  //  m_storage[1] += vec.y();
  //  m_storage[2] += vec.z();
  //  return *this;
  //}

  /// point minus another point is a vector
  //Vector2d Point2d::operator-(const Point2d& other) const
  //{
  //  double newX = x()-other.x();
  //  double newY = y()-other.y();
  // double newZ = z()-other.z();
  //  return Vector2d(newX, newY, newZ);
  //}

  /// check equality
  bool Point2d::operator==(const Point2d& other) const
  {
    //return (m_storage == other.m_storage);
    return (m_x == other.x()) && (m_y == other.y());
  }

  /// ostream operator
  std::ostream& operator<<(std::ostream& os, const Point2d& point)
  {
    os << "[" << point.x() << ", " << point.y() << "]";
    return os;
  }

  /// ostream operator
  std::ostream& operator<<(std::ostream& os, const std::vector<Point2d>& pointVector)
  {
    os << "[";
    for (unsigned i = 0; i < pointVector.size(); ++i){
      os << pointVector[i];
      if (i < pointVector.size() - 1){
        os << ", ";
      }
    }
    os << "]";
    return os;
  }


} // openstudio
