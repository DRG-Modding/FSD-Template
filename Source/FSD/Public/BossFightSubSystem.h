#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BossFightSubSystem.generated.h"

class AActor;
class IBossFightInterface;
class UBossFightInterface;
class UUserWidget;

UCLASS(Blueprintable)
class UBossFightSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomWidgetDelegate, UUserWidget*, InWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossFightDelegate, const TScriptInterface<IBossFightInterface>&, BossFight);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightDelegate OnNewBossFight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightDelegate OnBossFightRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomWidgetDelegate OnCustomWidgetAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomWidgetDelegate OnCustomWidgetRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IBossFightInterface>> ActiveBossFights;
    
public:
    UBossFightSubSystem();
    UFUNCTION(BlueprintCallable)
    void RemoveCustomBossFightWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBossFight(TScriptInterface<IBossFightInterface> BossFight);
    
    UFUNCTION(BlueprintCallable)
    void DeregisterBossFight(AActor* boss);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomBossFightWidget(UUserWidget* InWidget);
    
};

