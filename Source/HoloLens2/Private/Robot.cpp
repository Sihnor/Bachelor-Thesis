// Fill out your copyright notice in the Description page of Project Settings.


#include "Robot.h"

// Sets default values
ARobot::ARobot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->RumpfWinkel				= 0.0f;
	this->SchulterWinkel		= 0.0f;
	this->EllenbogenWinkel	= 0.0f;
	this->Hand1Winkel				= 0.0f;
	this->Hand2Winkel				= 0.0f;
	this->Hand3Winkel				= 0.0f;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	RobotMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RobotMesh"));
	RobotMesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void ARobot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

