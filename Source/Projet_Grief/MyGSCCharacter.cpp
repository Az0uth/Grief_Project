// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGSCCharacter.h"
#include "Interfaces/ArcInventoryInterface.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"

#include "ArcInventory.h"
#include "AbilitySystemComponent.h"
#include "Modular/ArcInventoryModularBPFL.h"

FName AMyGSCCharacter::InventoryComponentName(TEXT("InventoryComponent"));

AMyGSCCharacter::AMyGSCCharacter(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer.SetDefaultSubobjectClass<UArcInventoryComponent_Modular>(InventoryComponentName))
{
    InventoryComponent = CreateDefaultSubobject<UArcInventoryComponent>(InventoryComponentName);

}