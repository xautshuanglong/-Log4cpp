/*
 * Manipulator.hh
 *
 * Copyright 2005, Francis ANDRE. All rights reserved.
 *
 * See the COPYING file for the terms of usage and distribution.
 */

#ifndef _LOG4CPP_MANIPULATOR_HH
#define _LOG4CPP_MANIPULATOR_HH

#include <iostream>
#include <log4cpp/Portability.hh>
namespace log4cpp {
	class width {
	private:
		unsigned int size;
	public:
inline	width(unsigned int i) : size(i) {}
		friend std::ostream& operator<< (std::ostream& os, const width& w);
	};
class tab {
	private:
		unsigned int size;
	public:
inline	tab(unsigned int i) : size(i) {}
		friend std::ostream& operator<< (std::ostream& os, const tab& w);
	};
};
#endif