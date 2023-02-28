// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Myinventory/Public/Struct.h"
#include "Myinventory/Public/InteractableInterface.h"
#include "Item.generated.h"

UCLASS()
class MYINVENTORY_API AItem : public AActor, public IInteractableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:

	//Created basic item mesh
	UPROPERTY(EditDefaultsOnly, Category="Mesh")
	class UStaticMeshComponent* ItemMesh;
	
	UPROPERTY(EditDefaultsOnly, Category="Mesh")
	FItemData ItemData;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	virtual void Interact() override;
};
