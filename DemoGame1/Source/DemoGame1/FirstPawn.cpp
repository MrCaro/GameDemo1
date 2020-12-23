// Fill out your copyright notice in the Description page of Project Settings.


#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "FirstPawn.h"

// Sets default values
AFirstPawn::AFirstPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	SetRootComponent(Cast<USceneComponent>(MeshComponent));

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

}

// Called when the game starts or when spawned
void AFirstPawn::BeginPlay()
{
	Super::BeginPlay();	
}

// Movement functions
void AFirstPawn::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveForward: %f"), Value);
	}
}

void AFirstPawn::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveRight: %f"), Value);
	}
}

// Called every frame
void AFirstPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AFirstPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFirstPawn::MoveRight);
}

