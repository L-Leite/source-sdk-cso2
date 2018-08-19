#include "optionlist.h"

BaseOptionList::BaseOptionList()
{
	m_Unknown00 = 0;
	m_Unknown01 = 0;
}		 

ModOptionList::ModOptionList()
{
	m_Unknown02 = 0;
	m_Unknown03 = 0;
	m_Unknown04 = 0;
	m_Unknown05 = 0;
	m_Unknown06 = 255;
}

ModOptionList& ModOptionList::operator=(const ModOptionList& other)
{
	this->m_Unknown00 = other.m_Unknown00;
	this->m_Unknown01 = other.m_Unknown01;
	this->m_Unknown02 = other.m_Unknown02;
	this->m_Unknown03 = other.m_Unknown03;
	this->m_Unknown04 = other.m_Unknown04;
	this->m_szTeamNameCt = other.m_szTeamNameCt;
	this->m_szTeamNameTr = other.m_szTeamNameTr;
	this->m_szGamemodeDescription = other.m_szGamemodeDescription;
	this->m_Unknown05 = other.m_Unknown05;
	this->m_Unknown06 = other.m_Unknown06;

	return *this;
}

AutoMatchOptionList::AutoMatchOptionList()
{
	m_Unknown03 = 0;
}
