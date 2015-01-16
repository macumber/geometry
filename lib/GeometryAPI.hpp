#ifndef OPENSTUDIO_UTILITIESAPI_HPP
#define OPENSTUDIO_UTILITIESAPI_HPP

#if (_WIN32 || _MSC_VER)

#ifdef openstudio_geometry_EXPORTS
#define OPENSTUDIO_GEOMETRY_API __declspec(dllexport)
#else
#define OPENSTUDIO_GEOMETRY_API __declspec(dllimport)
#endif

#else

#define OPENSTUDIO_GEOMETRY_API

#endif

#endif
