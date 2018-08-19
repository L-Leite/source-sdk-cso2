#pragma once

#include <stdint.h>
#include <string>
#include <vector>

struct ClanGrade
{											 
	int iLevel;
	int iMinExp;
	int iMaxExp;
	int iBonusExp;
	std::string iGrade;
};

class CClanInfo
{
private:
	std::vector<ClanGrade*> m_vClanGrades;
};
