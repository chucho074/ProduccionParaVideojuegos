// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BP_Player.generated.h"

class UInputComponent;
class UCameraComponent;
class USkeletalMeshComponent;
class USoundBase;
class UAnimMontage;

UCLASS()
class J_A_FPS_API ABP_Player : public ACharacter
{
	GENERATED_BODY()

	//Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent * m_PlayerMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent* m_GunMesh;

public:
	// Sets default values for this character's properties
	ABP_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
