#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h"

UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	ATank* GetControlledTank() const;
	void BeginPlay() override;
	void Tick(float DeltaSeconds) override;
	void AimTowardsCrosshair();
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	
	UPROPERTY(EditAnywhere, meta=(ClampMin = "0.0", ClampMax = "1.0"))
	float CrosshairLocationX = 0.5;
	UPROPERTY(EditAnywhere, meta=(ClampMin = "0.0", ClampMax = "1.0"))
	float CrosshairLocationY = 0.33333;
};
