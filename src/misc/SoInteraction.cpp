/**************************************************************************\
 *
 *  Copyright (C) 1998-1999 by Systems in Motion.  All rights reserved.
 *
 *  This file is part of the Coin library.
 *
 *  This file may be distributed under the terms of the Q Public License
 *  as defined by Troll Tech AS of Norway and appearing in the file
 *  LICENSE.QPL included in the packaging of this file.
 *
 *  If you want to use Coin in applications not covered by licenses
 *  compatible with the QPL, you can contact SIM to aquire a
 *  Professional Edition license for Coin.
 *
 *  Systems in Motion AS, Prof. Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ sales@sim.no Voice: +47 22114160 Fax: +47 67172912
 *
\**************************************************************************/

/*!
  \class SoInteraction SoInteraction.h Inventor/SoInteraction.h
  \brief The SoInteraction class ... blablabla ...

  FIXME: write doc
 */

#include <Inventor/SoInteraction.h>
#include <Inventor/draggers/SoDragger.h>
#include <Inventor/manips/SoClipPlaneManip.h>
#include <Inventor/manips/SoDirectionalLightManip.h>
#include <Inventor/manips/SoPointLightManip.h>
#include <Inventor/manips/SoSpotLightManip.h>
#include <Inventor/manips/SoTransformManip.h>
#include <Inventor/manips/SoCenterballManip.h>
#include <Inventor/manips/SoHandleBoxManip.h>
#include <Inventor/manips/SoJackManip.h>
#include <Inventor/manips/SoTabBoxManip.h>
#include <Inventor/manips/SoTrackballManip.h>
#include <Inventor/manips/SoTransformBoxManip.h>
#include <Inventor/manips/SoTransformerManip.h>
#include <Inventor/nodekits/SoInteractionKit.h>
#include <Inventor/nodes/SoAntiSquish.h>
#include <Inventor/nodes/SoExtSelection.h>
#include <Inventor/nodes/SoSelection.h>
#include <Inventor/nodes/SoSurroundScale.h>


/*!
  FIXME: write doc
 */
void
SoInteraction::init(void)
{
  SoAntiSquish::initClass();
  SoSelection::initClass();
  SoExtSelection::initClass();
  SoSurroundScale::initClass();

  SoInteractionKit::initClass();

  SoDragger::initClass();

  SoClipPlaneManip::initClass();
  SoDirectionalLightManip::initClass();
  SoPointLightManip::initClass();
  SoSpotLightManip::initClass();
  SoTransformManip::initClass();
  SoCenterballManip::initClass();
  SoHandleBoxManip::initClass();
  SoJackManip::initClass();
  SoTabBoxManip::initClass();
  SoTrackballManip::initClass();
  SoTransformBoxManip::initClass();
  SoTransformerManip::initClass();
}
