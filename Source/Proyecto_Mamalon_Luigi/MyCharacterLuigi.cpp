// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterLuigi.h"

// Sets default values
AMyCharacterLuigi::AMyCharacterLuigi()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterLuigi::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterLuigi::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}
void AMyCharacterLuigi::Dummy()
{

}
void AMyCharacterLuigi ::mamama()
{

}

void AMyCharacterLuigi::ImprimePantalla()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, TEXT("Funciona"));
}
// Called to bind functionality to input
void AMyCharacterLuigi::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}

