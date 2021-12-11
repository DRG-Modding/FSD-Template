#pragma once
#include "CoreMinimal.h"
#include "ResourcesComponent.h"
#include "PlayerResourceComponent.generated.h"

class APlayerCharacter;
class UPlayerResourceComponent;

UCLASS()
class UPlayerResourceComponent : public UResourcesComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerResourceComponent* GetFromPlayer(APlayerCharacter* PlayerCharacter);
    
    UPlayerResourceComponent();
};

