// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FirstPawn.generated.h"

UCLASS()
class DEMOGAME1_API AFirstPawn : public APawn
{
	GENERATED_BODY()

	/*Mesh Component*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* MeshComponent;

	/*Camera position behind pawn*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/*Follow camera*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	// Sets default values for this pawn's properties
	AFirstPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*Input movement for y axis*/
	void MoveForward(float Value);

	/*Input movement for x axis*/ 
	void MoveRight(float Value);

	/*Speed to scale movement of character*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Speed;

	/*Store X and Y components axis of the Pawn direction*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	FVector2D Direction;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
