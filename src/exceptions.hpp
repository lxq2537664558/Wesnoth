/* $Id: exceptions.hpp 49036 2011-03-27 20:55:35Z mordante $ */
/*
   Copyright (C) 2010 - 2011 by Guillaume Melquiond <guillaume.melquiond@gmail.com>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/
#ifndef EXCEPTIONS_HPP_INCLUDED
#define EXCEPTIONS_HPP_INCLUDED

#include <exception>
#include <string>

namespace game {

/**
 * Base class for all the errors encountered by the engine.
 * It provides a field for storing custom messages related to the actual
 * error.
 */
struct error : std::exception
{
	std::string message;

	error() : message() {}
	error(const std::string &msg) : message(msg) {}
	~error() throw() {}

	const char *what() const throw()
	{
		return message.c_str();
	}
};

}

#endif
