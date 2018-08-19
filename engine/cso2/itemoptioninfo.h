#pragma once

#include <stdint.h>
#include <map>
#include <string>
#include <vector>

struct ItemEffect
{											 
	std::string szEffectName;
	std::string szEffectMaterial;
};

// size: 0x1C
class CItemOptionInfo
{
public:
	std::map<int, int> m_Unknown00; //0x0014 unknown type
	std::vector<ItemEffect*> m_vItemEffects; //0x0008
	std::map<int, int> m_Unknown01; //0x0014 unknown type
};
