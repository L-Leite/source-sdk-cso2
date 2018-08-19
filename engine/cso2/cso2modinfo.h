#pragma once

#include "cso2modmapinfo.h"

// size: 0x114
class CSO2ModInfo : public CSO2ModMapInfo
{
public:
	CSO2ModInfo();
	virtual ~CSO2ModInfo() = default;
	virtual bool Unknown00();
	virtual bool AssignOptionValues(BaseOptionList* pOptionList, int a3, KeyValues* a4);
	//virtual void Unknown02();
	virtual BaseOptionList* CreateOptionList();
	virtual bool Unknown04();

private:
	std::vector<int> m_Unknown03; //0x0074 unk type
	std::vector<int> m_Unknown04; //0x0080 unk type
	std::vector<int> m_Unknown05; //0x008C unk type
	std::map<int,int> m_Unknown06; //0x0098 unk type
	void* m_Unknown07; //0x00A0 unk type
	std::vector<int> m_vGamemodeRuleId; //0x00A4
	std::vector<int> m_Unknown08; //0x00B0 unk type
	std::vector<int> m_Unknown09; //0x00BC unk type
	int m_Unknown10; //0x00C8 same as iGamemodes
	std::vector<int> m_Unknown11; //0x00CC unk type
	int m_Unknown12; //0x00D8	same as iGamemodes
	std::vector<int> m_vGamemodeLuaRefType; //0x00DC
	int m_Unknown13; //0x00E8 same as iGamemodes
	std::vector<int> m_Unknown14; //0x00EC unk type
	std::vector<int> m_Unknown15; //0x00F8 unk type
	std::vector<int> m_Unknown16; //0x0104 unk type
	int m_Unknown17; //0x0110 same as iGamemodes
};