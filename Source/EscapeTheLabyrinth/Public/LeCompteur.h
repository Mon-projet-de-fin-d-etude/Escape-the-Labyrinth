// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LeCompteur.generated.h"

UCLASS()
class ESCAPETHELABYRINTH_API ALeCompteur : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALeCompteur();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CompteurDescendant();

	int minutes = 2;
	int secondes = 0;

};
