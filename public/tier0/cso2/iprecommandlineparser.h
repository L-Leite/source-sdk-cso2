#pragma once

#include <string>

typedef unsigned long long usersn_t;

abstract_class ICSO2PreCommandLineParser
{
public:
	virtual ~ICSO2PreCommandLineParser() = default;	

	virtual int GetBuildNumber() = 0; // unsure about it

	virtual const char* GetAnsiBaseDirectory() = 0;
	virtual const wchar_t* GetUnicodeBaseDirectory() = 0;
	virtual const char* GetAnsiBinDirectory() = 0;
	virtual const wchar_t* GetUnicodeBinDirectory() = 0;
	virtual const char* GetAnsiBinDirName() = 0;
	virtual const wchar_t* GetUnicodeBinDirName() = 0;
	virtual const char* GetAnsiDataDirectory() = 0;
	virtual const wchar_t* GetUnicodeDataDirectory() = 0;

	// these 6 methods return null strings (?), probably removed from shipped version
	virtual int Unknown00() = 0;
	virtual int Unknown01() = 0;
	virtual int Unknown02() = 0;
	virtual int Unknown03() = 0;
	virtual int Unknown04() = 0;
	virtual int Unknown05() = 0;

	virtual int Unknown06() = 0; // returns 1

	virtual const char* GetAnsiLogPath() = 0;
	virtual const wchar_t* GetUnicodeLogPath() = 0;

	virtual const char* GetSID() = 0;
	virtual const wchar_t* GetComment() = 0; // gets the argument that comes with the param "-comment"

	virtual bool WasFileNotFound() = 0; // true when launched with "-filenotfound"
	virtual int GetExecuteCount() = 0; // "-executecount"

	virtual const char* ToAnsiString( const std::wstring& szString ) = 0;
	virtual const wchar_t* ToUnicodeString( const std::string& szString ) = 0;

	virtual int Unknown07() = 0; // returns 0
	virtual int Unknown08() = 0; // returns 0

	virtual bool Unknown09() = 0; // returns false

	virtual bool NoPatch() = 0; // true when "-nopatch" is present in the arguments
	virtual bool NoPassport() = 0; // true when "/passport" isnt present in the args, probably ngm's login stuff
	virtual bool NoNM() = 0; // nm = nexon (game) manager? always true on chinese version
	virtual bool ShouldExtractHash() = 0; // true when passing "-extracthash"
	virtual bool ShouldExtractVersion() = 0; // true when passing "-extractversion"

	virtual bool Unknown10() = 0; // returns false
	virtual bool Unknown11() = 0; // returns false

	virtual bool IsPrelive() = 0; // when "/prelive" is passed
	virtual bool IsNaVersion() = 0; // when "/naver" ispassed


	virtual bool IsInternal() = 0; // when "-internal" is passed		

	virtual bool ShouldAskRNN() = 0;	// true when "-ask_rrn" is passed
	virtual bool IsVCOnly() = 0; // no clue on what vc stands for
	virtual usersn_t GetUserSNO() = 0;
	virtual bool IsLeague() = 0;
	virtual bool IsUsingLeagueData() = 0;	// it's called when setting IsLeague
											// returns true when it finds 1b87dfeeekr51kwjfhgu3886k29skg57.pkg and the first byte is 1
	virtual bool ShouldCvtToFull() = 0;	// should convert from *something* (maybe league?) version to full version
	virtual int GetGfxDebug() = 0; // might have multiple values
	virtual bool IsFullDirectoryInAnsi() = 0;	// it converts the full dir from wchar to char, char to wchar
												// and compares the new converted string with the original one
												// probably here to avoid issues with the ansi functions the game uses
};

PLATFORM_INTERFACE ICSO2PreCommandLineParser* GetCSO2PreCommandLineParser();