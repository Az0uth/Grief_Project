// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularGameplayActors/GSCModularCharacter.h"
#include "Interfaces/ArcInventoryInterface.h"
#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "ArcInventory.h"
#include "MyGSCCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AMyGSCCharacter : public AGSCModularCharacter, public IGameplayCueInterface, public IArcInventoryInterface
{
	GENERATED_BODY()

        UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
        class UArcInventoryComponent* InventoryComponent;
        
public:
    static FName InventoryComponentName;

public:
    AMyGSCCharacter(const FObjectInitializer& ObjectInitializer);

    virtual UArcInventoryComponent* GetInventoryComponent() const override { return InventoryComponent; }
};
