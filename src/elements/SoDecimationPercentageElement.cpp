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

/*!
  \class SoDecimationPercentageElement Inventor/elements/SoDecimationPercentageElement.h
  \brief The SoDecimationPercentageElement class is yet to be documented.

  \ingroup elements

  FIXME: write doc.
*/

#include <Inventor/elements/SoDecimationPercentageElement.h>


#include <cassert>

SO_ELEMENT_SOURCE(SoDecimationPercentageElement);

/*!
  \fn static SoType SoDecimationPercentageElement::getClassTypeId(void)

  This static method returns the class type.
*/

/*!
  \fn static int SoDecimationPercentageElement::getClassStackIndex(void)

  This static method returns the state stack index for the class.
*/

/*!
  \copydetails SoElement::initClass(void)
*/

void
SoDecimationPercentageElement::initClass(void)
{
  SO_ELEMENT_INIT_CLASS(SoDecimationPercentageElement, inherited);
}

/*!
  Destructor.
*/

SoDecimationPercentageElement::~SoDecimationPercentageElement(// virtual protected
    void)
{
}

//! FIXME: write doc.

void
SoDecimationPercentageElement::init(SoState * state)
{
  inherited::init(state);
  this->data = getDefault();
}

//! FIXME: write doc.

//$ EXPORT INLINE
void
SoDecimationPercentageElement::set(SoState * const state, SoNode * const node,
                          const float complexity)
{
  SoFloatElement::set(classStackIndex,state,node, complexity);
}

//! FIXME: write doc.

//$ EXPORT INLINE
void
SoDecimationPercentageElement::set(SoState * const state, const float complexity)
{
  set(state, NULL, complexity);
}

//! FIXME: write doc.

//$ EXPORT INLINE
float
SoDecimationPercentageElement::get(SoState * const state)
{
  return SoFloatElement::get(classStackIndex, state);
}

//! FIXME: write doc.

//$ EXPORT INLINE
float
SoDecimationPercentageElement::getDefault()
{
  return 1.0f;
}
