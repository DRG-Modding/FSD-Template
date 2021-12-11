#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InstantUsable.h"
#include "UObject/NoExportTypes.h"
#include "TrackBuilderUsable.generated.h"

class APlayerCharacter;
class UTrackBuilderUsable;
class AActor;
class USceneComponent;
class ATrackBuilderSegment;
class ATrackBuilderItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrackBuilderUsableOnNextSegmentChanged, UTrackBuilderUsable*, InUsable, ATrackBuilderSegment*, InSegment);

UCLASS()
class FSD_API UTrackBuilderUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTrackBuilderUsableOnNextSegmentChanged OnNextSegmentChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATrackBuilderItem> BuilderItemType;
    
    UPROPERTY(EditAnywhere)
    FString ColliderName;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* TrackStartComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_NextSegment)
    ATrackBuilderSegment* NextSegment;
    
    UPROPERTY(Replicated, Transient)
    TWeakObjectPtr<APlayerCharacter> InUseBy;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NextSegment();
    
    UFUNCTION(BlueprintCallable)
    void OnNextSegmentDestroyed(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetStartTransform() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishUse(APlayerCharacter* User, ATrackBuilderSegment* InSegment);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTrackBuilderUsable();
};

