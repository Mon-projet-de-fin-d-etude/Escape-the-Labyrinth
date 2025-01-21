// Fill out your copyright notice in the Description page of Project Settings.


#include "LeCompteur.h"

// Sets default values
ALeCompteur::ALeCompteur()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALeCompteur::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle timerHandle;

	GetWorldTimerManager().SetTimer(timerHandle, this, &ALeCompteur::CompteurDescendant, 1.f, true, 0.0);
	
}

// Called every frame
void ALeCompteur::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALeCompteur::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ALeCompteur::CompteurDescendant()
{
	if (secondes != 0)
	{
		secondes--;
	}
	else {
		if (minutes == 0)
		{
			// faire un truc quand le compteur a terminé
		}
		else {
			minutes--;
			secondes = 59;
		}
	}
}

