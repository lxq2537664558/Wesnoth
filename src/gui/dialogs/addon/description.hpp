/* $Id: description.hpp 48882 2011-03-13 10:18:51Z mordante $ */
/*
   Copyright (C) 2010 - 2011 by Ignacio R. Morelle <shadowm2006@gmail.com>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

#ifndef GUI_DIALOGS_ADDON_DESCRIPTION_HPP_INCLUDED
#define GUI_DIALOGS_ADDON_DESCRIPTION_HPP_INCLUDED

#include "gui/dialogs/dialog.hpp"

#include <vector>

struct addon_info
{
	addon_info()
		: name()
		, description()
		, icon()
		, version()
		, author()
		, sizestr()
		, translations()
	{
	}

	std::string name;
	std::string description;
	std::string icon;
	std::string version;
	std::string author;
	std::string sizestr;
	std::vector<std::string> translations;
};

namespace gui2 {

class taddon_description : public tdialog
{
public:

	/**
	 * Constructor.
	 *
	 * @param addon               The information about the addon to show.
	 */
	explicit taddon_description(const addon_info& addon);

	/** The display function see @ref tdialog for more information. */
	static void display(const addon_info& addon, CVideo& video)
	{
		taddon_description(addon).show(video);
	}

private:

	/** Inherited from tdialog, implemented by REGISTER_DIALOG. */
	virtual const std::string& window_id() const;
};

}

#endif
