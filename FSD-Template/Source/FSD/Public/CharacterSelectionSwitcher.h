#pragma once
#include "CoreMinimal.h"
#include "EVanitySlot.h"
#include "GameFramework/Actor.h"
#include "CharacterSelectionSwitcher.generated.h"

class APlayerCharacter;
class UVictoryPose;

UCLASS()
class ACharacterSelectionSwitcher : public AActor {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictoryPoseChanged(UVictoryPose* VictoryPose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVanityItemEquipped(EVanitySlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* GetViewerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    APlayerCharacter* GetActiveCharacter() const;
    
    ACharacterSelectionSwitcher();
};

