// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Robot.generated.h"

UCLASS()
class HOLOLENS2_API ARobot : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARobot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		USkeletalMeshComponent* RobotMesh;

public:
	void AddRumpfWinkel(const float Value) { RumpfWinkel += Value; };
	void AddSchulterWinkel(const float Value) { SchulterWinkel += Value; };
	void AddEllenbogenWinkel(const float Value) { EllenbogenWinkel += Value; };
	void AddHand1Winkel(const float Value) { Hand1Winkel += Value; };
	void AddHand2Winkel(const float Value) { Hand2Winkel += Value; };
	void AddHand3Winkel(const float Value) { Hand3Winkel += Value; };

	UFUNCTION(BlueprintCallable, Category = "Winkel")
		void SetRumpfWinkel(const float Value) { RumpfWinkel = Value; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		void SetSchulterWinkel(const float Value) { SchulterWinkel = Value; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		void SetEllenbogenWinkel(const float Value) { EllenbogenWinkel = Value; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		void SetHand1Winkel(const float Value) { Hand1Winkel = Value; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		void SetHand2Winkel(const float Value) { Hand2Winkel = Value; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		void SetHand3Winkel(const float Value) { Hand3Winkel = Value; };

	UFUNCTION(BlueprintCallable, Category = "Winkel")
		float getRumpfWinkel() { return  RumpfWinkel; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		float getSchulterWinkel() { return SchulterWinkel; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		float getEllenbogenWinkel() { return EllenbogenWinkel; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		float getHand1Winkel() { return Hand1Winkel; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		float getHand2Winkel() { return Hand2Winkel; };
	UFUNCTION(BlueprintCallable, Category = "Winkel")
		float getHand3Winkel() { return Hand3Winkel; };

protected:
	float RumpfWinkel;
	float SchulterWinkel;
	float EllenbogenWinkel;
	float Hand1Winkel;
	float Hand2Winkel;
	float Hand3Winkel;

	FMatrix P_01;
	FMatrix P_12;
	FMatrix P_23;
	FMatrix P_34;
	FMatrix P_45;
	FMatrix P_56;
	FMatrix P_06 = P_01 + P_12 + P_23 + P_34 + P_45 + P_56;

};
