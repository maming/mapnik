/*****************************************************************************
 *
 * This file is part of Mapnik (c++ mapping toolkit)
 *
 * Copyright (C) 2012 Artem Pavlenko
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

#ifndef MAPNIK_UTIL_CONVERSIONS_HPP
#define MAPNIK_UTIL_CONVERSIONS_HPP

// mapnik
#include <mapnik/config.hpp>
#include <mapnik/value_types.hpp>

// stl
#include <string>

namespace mapnik { namespace util {

MAPNIK_DECL bool string2bool(const char * value, bool & result);
MAPNIK_DECL bool string2bool(std::string const& value, bool & result);

MAPNIK_DECL bool string2int(const char * value, int & result);
MAPNIK_DECL bool string2int(std::string const& value, int & result);

#ifdef BIGINT
MAPNIK_DECL bool string2int(const char * value, mapnik::value_integer & result);
MAPNIK_DECL bool string2int(std::string const& value, mapnik::value_integer & result);
#endif

MAPNIK_DECL bool string2double(std::string const& value, double & result);
MAPNIK_DECL bool string2double(const char * value, double & result);

MAPNIK_DECL bool string2float(std::string const& value, float & result);
MAPNIK_DECL bool string2float(const char * value, float & result);

MAPNIK_DECL bool to_string(std::string & str, int value);
#ifdef BIGINT
MAPNIK_DECL bool to_string(std::string & str, mapnik::value_integer value);
#endif
MAPNIK_DECL bool to_string(std::string & str, unsigned value);
MAPNIK_DECL bool to_string(std::string & str, bool value);
MAPNIK_DECL bool to_string(std::string & str, double value);

}}

#endif // MAPNIK_UTIL_CONVERSIONS_HPP
