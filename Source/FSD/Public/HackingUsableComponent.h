#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "HackingUsableState.h"
#include "HackingUsableComponent.generated.h"

class APlayerCharacter;
class AHackingToolItem;
class UHackingToolWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UHackingUsableComponent : public UInstantUsable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHackedDelegate, APlayerCharacter*, InHackedBy);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHackedDelegate OnHacked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHackingToolItem> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHackingToolWidget> HackingWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HackingState, meta=(AllowPrivateAccess=true))
    FHackingUsableState HackingState;
    
public:
    UHackingUsableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HackingState(const FHackingUsableState& oldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHacked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBeingHacked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UHackingToolWidget> GetHackingWidgetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetHackedBy() const;
    
};

