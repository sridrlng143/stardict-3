/*
 * StarDict is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * StarDict is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with StarDict.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _ISKEYSPRESSED_HPP_
#define _ISKEYSPRESSED_HPP_

#include <string>
#include <list>

class hotkeys {
public:
  virtual ~hotkeys() {}
  virtual const std::list<std::string>& possible_combs() = 0;
  virtual void set_comb(const std::string& comb) = 0;
  virtual bool is_pressed() = 0;
};

#endif//!_ISKEYSPRESSED_HPP_
