/**************************************************************************\
 * Copyright (c) Kongsberg Oil & Gas Technologies AS
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * 
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
\**************************************************************************/

// FIXME: this class has not yet been implemented in Coin. this is a
// placeholder / stub / skeleton code, not yet built (nor installed,
// obviously).  --mortene.

/*!
  \class SoGlobalSimplifyAction SoGlobalSimplifyAction.h Inventor/actions/SoGlobalSimplifyAction.h
  \brief The SoGlobalSimplifyAction class is for globally simplifying the
  geometry of a scene graph, globally.
*/

#include <Inventor/SbName.h>
#include <Inventor/actions/SoGlobalSimplifyAction.h>
#include <coindefs.h> // COIN_STUB()


SO_ACTION_SOURCE(SoGlobalSimplifyAction);

/*!
  \copydetails SoAction::initClass(void)
*/
void
SoGlobalSimplifyAction::initClass(void)
{
  SO_ACTION_INTERNAL_INIT_CLASS(SoGlobalSimplifyAction, SoSimplifyAction);
}


/*!
  A constructor.
*/

SoGlobalSimplifyAction::SoGlobalSimplifyAction(void)
{
  COIN_STUB();
}

/*!
  The destructor.
*/

SoGlobalSimplifyAction::~SoGlobalSimplifyAction(void)
{
  COIN_STUB();
}

// Documented in superclass.
void
SoGlobalSimplifyAction::beginTraversal(SoNode * /* node */)
{
  COIN_STUB();
}
