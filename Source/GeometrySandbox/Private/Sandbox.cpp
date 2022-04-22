// Fill out your copyright notice in the Description page of Project Settings.


#include "Sandbox.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(MyLog, All, All)




// Sets default values
ASandbox::ASandbox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASandbox::BeginPlay()
{
	Super::BeginPlay();
	PrintFunction();
}

// Called every frame
void ASandbox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASandbox::PrintFunction()
{
	FString name = "John Connor";
	UE_LOG(MyLog, Display, TEXT("Name: %s"), *name);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, name);
}

