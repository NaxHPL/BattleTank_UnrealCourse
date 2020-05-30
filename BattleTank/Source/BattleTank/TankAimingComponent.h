#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

class UTankBarrel;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UTankAimingComponent();
	void SetBarrelReference(UTankBarrel* BarrelToSet);
	void AimAt(FVector HitLocation, float LaunchSpeed);
	
private:
	void MoveBarrelTowards(FVector AimDirection);
	
	UPROPERTY()
	UTankBarrel* Barrel = nullptr;
};
