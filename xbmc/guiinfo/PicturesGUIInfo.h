#pragma once
/*
 *      Copyright (C) 2012-2013 Team XBMC
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "guiinfo/GUIInfoProvider.h"

#include <memory>

namespace GUIINFO
{

class GUIInfo;

class CPicturesGUIInfo : public CGUIInfoProvider
{
public:
  CPicturesGUIInfo();
  ~CPicturesGUIInfo() override;

  // GUIINFO::IGUIInfoProvider implementation
  bool InitCurrentItem(CFileItem *item) override;
  bool GetLabel(std::string& value, const CFileItem *item, int contextWindow, const GUIInfo &info, std::string *fallback) const override;
  bool GetInt(int& value, const CGUIListItem *item, int contextWindow, const GUIInfo &info) const override;
  bool GetBool(bool& value, const CGUIListItem *item, int contextWindow, const GUIInfo &info) const override;

  void SetCurrentSlide(CFileItem *item);
  const CFileItem* GetCurrentSlide() const;

private:
  std::unique_ptr<CFileItem> m_currentSlide;
};

} // namespace GUIINFO
