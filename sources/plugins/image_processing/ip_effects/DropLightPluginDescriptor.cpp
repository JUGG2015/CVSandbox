/*
    Image processing effects plug-ins of Computer Vision Sandbox

    Copyright (C) 2011-2018, cvsandbox
    http://www.cvsandbox.com/contacts.html

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include <iplugincpp.hpp>
//#include <image_emboss_16x16.h>
#include "DropLightPlugin.hpp"

static void PluginInitializer( );

// Version of the plug-in
static xversion PluginVersion = { 1, 0, 0 };

// ID of the plug-in
static xguid PluginID = { 0xAF000003, 0x00000000, 0x00000006, 0x00000008 };

// Azimuth property
static PropertyDescriptor azimuthProperty =
{ XVT_R4, "Azimuth", "azimuth", "Direction where light comes from [degrees].", PropertyFlag_None };
// Elevation property
static PropertyDescriptor elevationProperty =
{ XVT_R4, "Elevation", "elevation", "Elevation of the light source [degrees].", PropertyFlag_None };
// Depth property
static PropertyDescriptor depthProperty =
{ XVT_R4, "Depth", "depth", "Depth of embossing.", PropertyFlag_None };

// Array of available properties
static PropertyDescriptor* pluginProperties[] =
{
    &azimuthProperty, &elevationProperty, &depthProperty
};

// Let the class itself know description of its properties
const PropertyDescriptor** DropLightPlugin::propertiesDescription = (const PropertyDescriptor**) pluginProperties;

/*
// Register the plug-in
REGISTER_CPP_PLUGIN_WITH_PROPS
(
    PluginID,
    PluginFamilyID_ImageEffect,

    PluginType_ImageProcessingFilter,
    PluginVersion,
    "Drop Light",
    "DropLight",
    "Something yet unknown.",
    "Some help about this routine.",
    0, //&image_emboss_16x16,
    0,
    DropLightPlugin,

    sizeof( pluginProperties ) / sizeof( PropertyDescriptor* ),
    pluginProperties,
    PluginInitializer,
    0, // no clean-up
    0  // no dynamic properties update
);
*/

// Complete properties description by initializing those parts, which were not
// initialized during properties array declaration
static void PluginInitializer( )
{
    // azimuth
    azimuthProperty.DefaultValue.type = XVT_R4;
    azimuthProperty.DefaultValue.value.fVal = 90;

    azimuthProperty.MinValue.type = XVT_R4;
    azimuthProperty.MinValue.value.fVal = 0;

    azimuthProperty.MaxValue.type = XVT_R4;
    azimuthProperty.MaxValue.value.fVal = 360;

    // elevation
    elevationProperty.DefaultValue.type = XVT_R4;
    elevationProperty.DefaultValue.value.fVal = 45;

    elevationProperty.MinValue.type = XVT_R4;
    elevationProperty.MinValue.value.fVal = 0;

    elevationProperty.MaxValue.type = XVT_R4;
    elevationProperty.MaxValue.value.fVal = 90;

    // depth
    depthProperty.DefaultValue.type = XVT_R4;
    depthProperty.DefaultValue.value.fVal = 2;

    depthProperty.MinValue.type = XVT_R4;
    depthProperty.MinValue.value.fVal = 1;

    depthProperty.MaxValue.type = XVT_R4;
    depthProperty.MaxValue.value.fVal = 50;
}
