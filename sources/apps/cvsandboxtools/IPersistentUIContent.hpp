/*
    Common tools for Computer Vision Sandbox

    Copyright (C) 2011-2019, cvsandbox
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

#pragma once
#ifndef CVS_IPERSISTENTUICONTENT_HPP
#define CVS_IPERSISTENTUICONTENT_HPP

#include "IUIPersistenceService.hpp"

class IPersistentUIContent
{

public:
    virtual void SaveWidgetContent( IUIPersistenceService& persistanceService, const QString& groupName ) = 0;
    virtual void RestoreWidgetContent( IUIPersistenceService& persistanceService, const QString& groupName ) = 0;
};

Q_DECLARE_INTERFACE(IPersistentUIContent, "CVSandbox.Tools.IPersistentUIContent")

#endif // CVS_IPERSISTENTUICONTENT_HPP
