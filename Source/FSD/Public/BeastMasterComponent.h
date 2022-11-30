#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FloatPerkComponent.h"
#include "BeastMasterComponent.generated.h"

class APlayerCharacter;
class UDamageComponent;
class AFSDPawn;
class UActorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBeastMasterComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCanCharmIcon;
    
    UBeastMasterComponent();
    UFUNCTION(BlueprintCallable)
    void SetDamage(UDamageComponent* cmp, float dmg);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddPetComponent(TSubclassOf<UActorComponent> ComponentClass, AFSDPawn* targetPet, APlayerCharacter* petOwner);
    
};

