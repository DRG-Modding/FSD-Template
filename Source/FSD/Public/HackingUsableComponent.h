#pragma once
#include "CoreMinimal.h"
#include "HackingUsableState.h"
#include "InstantUsable.h"
#include "ItemDelegateDelegate.h"
#include "HackingUsableComponent.generated.h"

class AHackingToolItem;
class APlayerCharacter;
class UHackingToolWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UHackingUsableComponent : public UInstantUsable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHackedDelegate, APlayerCharacter*, InHackedBy);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHackedDelegate OnHacked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate BeingHackedUpdated;
    
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

