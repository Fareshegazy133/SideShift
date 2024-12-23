// Copyright of SideShift.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SideShift_Player.generated.h"

UCLASS()
class SIDESHIFT_API ASideShift_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASideShift_Player();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
