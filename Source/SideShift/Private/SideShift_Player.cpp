// Copyright of SideShift.

#include "SideShift_Player.h"

// Sets default values
ASideShift_Player::ASideShift_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASideShift_Player::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void ASideShift_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASideShift_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

