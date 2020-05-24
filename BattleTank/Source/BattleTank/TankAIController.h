#pragma once

#include "AIController.h"
#include "CoreMinimal.h"
#include "Tank.h"
#include "TankAIController.generated.h"

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
	void BeginPlay() override;
	void Tick(float DeltaSeconds) override;
	ATank* GetControlledTank() const;
	ATank* GetPlayerTank() const;
};
