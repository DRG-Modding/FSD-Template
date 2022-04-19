#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FloatPerkComponent.h"
#include "BeastMasterComponent.generated.h"

class AFSDPawn;
class UDamageComponent;
class UActorComponent;
class APlayerCharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBeastMasterComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ShowCanCharmIcon;
    
    UBeastMasterComponent();
    UFUNCTION(BlueprintCallable)
    void SetDamage(UDamageComponent* cmp, float dmg);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddPetComponent(TSubclassOf<UActorComponent> ComponentClass, AFSDPawn* targetPet, APlayerCharacter* petOwner);
    
};

