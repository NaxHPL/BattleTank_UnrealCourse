#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

UCLASS( meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 5.0;
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40.0;
	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0.0;
};
