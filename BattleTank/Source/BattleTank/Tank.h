#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

class UTankAimingComponent;
class UTankBarrel;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	void AimAt(FVector HitLocation) const;
	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelReference(UTankBarrel* BarrelToSet) const;

protected:
	UPROPERTY()
	UTankAimingComponent* TankAimingComponent = nullptr;
	
private:
	ATank();
	void Tick(float DeltaTime) override;
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Firing)
	float LaunchSpeed = 4000.0;
};
