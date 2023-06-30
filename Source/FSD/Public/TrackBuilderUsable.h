#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InstantUsable.h"
#include "Templates/SubclassOf.h"
#include "TrackBuilderUsable.generated.h"

class AActor;
class APlayerCharacter;
class ATrackBuilderItem;
class ATrackBuilderSegment;
class USceneComponent;
class UTrackBuilderUsable;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TrackStartComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NextSegment, meta=(AllowPrivateAccess=true))
    ATrackBuilderSegment* NextSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
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

