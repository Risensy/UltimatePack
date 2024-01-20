// Copyright 2024, Risensy

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FUltimatePackModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
