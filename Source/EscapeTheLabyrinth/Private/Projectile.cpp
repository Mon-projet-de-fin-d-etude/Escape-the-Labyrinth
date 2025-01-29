// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"

AProjectile::AProjectile()
{
    PrimaryActorTick.bCanEverTick = true;

    // Ajouter un composant de maillage
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Ajouter un mouvement de projectile
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->InitialSpeed = 1000.0f; // Vitesse initiale
    ProjectileMovement->MaxSpeed = 2000.0f;     // Vitesse max
    ProjectileMovement->bRotationFollowsVelocity = true; // La balle suit sa direction
    ProjectileMovement->bShouldBounce = false; // Désactiver le rebond
}

void AProjectile::BeginPlay()
{
    Super::BeginPlay();
}

void AProjectile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


