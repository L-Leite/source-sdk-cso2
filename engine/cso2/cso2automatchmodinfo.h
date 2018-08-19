#pragma once

#include "cso2modmapinfo.h"		

// size: 0x80
class CSO2AutoMatchModInfo : public CSO2ModMapInfo
{
public:
	CSO2AutoMatchModInfo();
	virtual ~CSO2AutoMatchModInfo() = default;
	virtual bool Unknown00();
	virtual bool AssignOptionValues(BaseOptionList* pOptionList, int a3, KeyValues* a4);
	//virtual void Unknown02();
	virtual BaseOptionList* CreateOptionList();
	virtual bool Unknown04();
private:
	std::vector<int> m_vPenaltyLeaveTime; //0x0074
};