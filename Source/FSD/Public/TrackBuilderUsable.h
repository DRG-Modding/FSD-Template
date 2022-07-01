#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InstantUsable.h"
#include "UObject/NoExportTypes.h"
#include "TrackBuilderUsable.generated.h"

class AActor;
class ATrackBuilderItem;
class USceneComponent;
class UTrackBuilderUsable;
class ATrackBuilderSegment;
class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UTrackBuilderUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSegmentDelegate, UTrackBuilderUsable*, InUsable, ATrackBuilderSegment*, InSegment);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSegmentDelegate OnNextSegmentChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrackBuilderItem> BuilderItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ColliderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TrackStartComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NextSegment, meta=(AllowPrivateAccess=true))
    ATrackBuilderSegment* NextSegment;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    TWeakObjectPtr<APlayerCharacter> InUseBy;
    
public:
    UTrackBuilderUsable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NextSegment();
    
    UFUNCTION(BlueprintCallable)
    void OnNextSegmentDestroyed(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetStartTransform() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishUse(APlayerCharacter* User, ATrackBuilderSegment* InSegment);
    
};

