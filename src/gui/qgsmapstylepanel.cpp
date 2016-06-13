/***************************************************************************
    qgsmapstylepanel.cpp
    ---------------------
    begin                : June 2016
    copyright            : (C) 2016 by Nathan Woodrow
    email                : woodrow dot nathan at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include "qgsmapstylepanel.h"
#include "qgspanelwidget.h"

QgsMapStylingPanel::QgsMapStylingPanel( QgsMapLayer *layer, QgsMapCanvas *canvas, QWidget *parent )
    : QgsPanelWidget( parent )
    , mLayer( layer )
    , mMapCanvas( canvas )
{

}

QgsMapStylingPanelFactory::QgsMapStylingPanelFactory()
{

}

QgsMapStylingPanelFactory::~QgsMapStylingPanelFactory()
{

}
