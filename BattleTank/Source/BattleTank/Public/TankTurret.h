// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()	
	UTankTurret();

private:

	UPROPERTY(Category = Setup, EditDefaultsOnly)
		float MaxDegreesPerSecond;

public:
	void ChangeAzimuth(float RelativeSpeed);
};
