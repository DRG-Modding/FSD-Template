#pragma once
#include "CoreMinimal.h"
#include "SimpleObjectInfoComponent.h"
#include "MixerEnemyNameChangeDelegate.h"
#include "EnemyComponent.generated.h"

class UEnemyFamily;
class UTexture2D;
class UDialogDataAsset;
class UEnemyID;

UCLASS(meta=(BlueprintSpawnableComponent))
class UEnemyComponent : public USimpleObjectInfoComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyFamily* Family;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* KillShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyID* EnemyID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString mixerName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMixerEnemyNameChange OnMixerNameChange;
    
public:
    UEnemyComponent();
    UFUNCTION(BlueprintCallable)
    UEnemyID* GetID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFamilyName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFamilyIcon() const;
    
};

