#ifndef __PClass_H
#define __PClass_H
/*
 * Copyright (c) 2012 Stephen Williams (steve@icarus.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

# include  "PScope.h"
# include  "LineInfo.h"
# include  "StringHeap.h"

/*
 * SystemVerilog supports class declarations with their own lexical
 * scope, etc. The parser arranges for these to be created and
 * collected.
 */

class PClass : public PScopeExtra, public LineInfo {

    public:
      explicit PClass (perm_string name, LexicalScope*parent);
      ~PClass();

};

#endif
