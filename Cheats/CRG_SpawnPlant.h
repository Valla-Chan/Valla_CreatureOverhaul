#pragma once

#include <Spore\BasicIncludes.h>

using namespace Simulator;

class CRG_SpawnPlant 
	: public ArgScript::ICommand
{
public:
	CRG_SpawnPlant();
	~CRG_SpawnPlant();

	// Called when the cheat is invoked
	void ParseLine(const ArgScript::Line& line) override;
	
	// Returns a string containing the description. If mode != DescriptionMode::Basic, return a more elaborated description
	const char* GetDescription(ArgScript::DescriptionMode mode) const override;
private:
	const uint32_t mdl_carcass01 = id("CRG_Food_Carcass_01");
};

