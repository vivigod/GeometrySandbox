// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sandbox.generated.h"

UCLASS()
class GEOMETRYSANDBOX_API ASandbox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASandbox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	int32 WeaponsNum = 4;

	UPROPERTY(EditDefaultsOnly)
	int32 KillsNum = 7;

	UPROPERTY(EditInstanceOnly)
	float Health = 34.45353f;

	UPROPERTY(EditAnywhere)
	bool IsDead = false;

	UPROPERTY(VisibleAnywhere)
	bool HasWeapon = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:
	void PrintFunction();
};
