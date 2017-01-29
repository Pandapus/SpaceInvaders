// Fill out your copyright notice in the Description page of Project Settings.

#include "SpaceInvaders.h"
#include "MyAlien.h"


// Sets default values
AMyAlien::AMyAlien()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("MyAlien"));
}

// Called when the game starts or when spawned
void AMyAlien::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyAlien::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

