// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootierBoy.h"

// Sets default values
AShootierBoy::AShootierBoy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShootierBoy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AShootierBoy::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector() * Value);
}

void AShootierBoy::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector() * Value);
}

// Called every frame
void AShootierBoy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShootierBoy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AShootierBoy::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AShootierBoy::MoveRight);
}

