/*
  Keyboard.h

  Copyright (c) 2015, Arduino LLC
  Original code (pre-library): Copyright (c) 2011, Peter Barrett

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/


#include "ArduinoKeyboard.h"

class KeyboardInterface
{
public:
  KeyboardInterface(void);
  void begin(void);
  void end(void);
  size_t write(uint8_t k);
  size_t press(uint8_t k);
  size_t release(uint8_t k);
  void setNKROMode(uint8_t mode);
  uint8_t getNKROMode(void);
  void releaseAll(void);
  void releaseAllExcept(uint8_t k[18]);
};
extern KeyboardInterface AnimusKeyboard;
