/* file: cranefoot_utilities.h
  Copyright (C) 2008 Ville-Petteri Makinen

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the
  Free Software Foundation, Inc.,
  51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

  CITATION (if not provided by software website)
    Makinen V-P, software name, URL:http://www.iki.fi/~vpmakine/

  CONTACT (if not provided by citation)
    Ville-Petteri Makinen
 
    Folkhalsan Research Center
    Biomedicum Helsinki P.O.Box 63
    Haartmaninkatu 8 00014, Helsinki, Finland
    Tel: +358 9 191 25462
    Fax: +358 9 191 25452

    WWW:   http://www.iki.fi/~vpmakine
*/

#ifndef utilities_INCLUDED
#define utilities_INCLUDED

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <map>
#include <string>

extern void        display(std::string, std::string, int, bool);
extern void        get_color(char*, int);
extern void        get_hue(char*, float);
extern void        get_index_color(float*, float);
extern void        get_rgb(float*, int);
extern std::string clarify(unsigned long);
extern std::string pacify(std::string);
extern std::string pacify(std::string, unsigned int);

#endif /* utilities_INCLUDED */
