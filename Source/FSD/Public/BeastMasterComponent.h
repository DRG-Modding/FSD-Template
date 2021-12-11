#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FloatPerkComponent.h"
#include "BeastMasterComponent.generated.h"

class APlayerCharacter;
class UDamageComponent;
class UActorComponent;
class AFSDPawn;

UCLASS()
class UBeastMasterComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool ShowCanCharmIcon;
    
    UFUNCTION(BlueprintCallable)
    void SetDamage(UDamageComponent* cmp, float dmg);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddPetComponent(TSubclassOf<UActorComponent> ComponentClass, AFSDPawn* targetPet, APlayerCharacter* petOwner);
    
    UBeastMasterComponent();
};

