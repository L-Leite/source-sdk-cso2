#pragma once

#include "cso2modmapinfo.h"		

#define MAPINFO_FLAG_NEW 1
#define MAPINFO_FLAG_EVENT 2
#define MAPINFO_FLAG_CONTINUOUS 4

// size: 0xA0
class CSO2MapInfo : public CSO2ModMapInfo
{
public:
	CSO2MapInfo();
	virtual ~CSO2MapInfo() = default;
	virtual bool Unknown00();
	virtual bool AssignOptionValues(BaseOptionList* pOptionList, int a3, KeyValues* a4);
	//virtual void Unknown02();
	virtual BaseOptionList* CreateOptionList();
	virtual bool Unknown04();

private:
	// leftovers from an early version?
	std::vector<std::string> m_vLoadingBackground; //0x0074

	// if (flag & MAPINFO_FLAG_NEW == true) then it's a new map
	// if (flag & MAPINFO_FLAG_EVENT == true) then it's an event map
	// if (flag & MAPINFO_FLAG_CONTINUOUS == true) then it can be used in a playlist or something
	std::vector<int> m_vMapFlags; //0x0080

	std::vector<int> m_vCategory; //0x008C
	std::map<int, int> m_Unknown03; //0x0098 unknown type
};