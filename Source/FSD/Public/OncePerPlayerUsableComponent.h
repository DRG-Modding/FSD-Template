#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "InstantUsable.h"
#include "UserAddedDelegate.h"
#include "OncePerPlayerUsableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOncePerPlayerUsableComponent : public UInstantUsable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserAdded OnUsersChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Users, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> Users;
    
public:
    UOncePerPlayerUsableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUsersChanged(const TArray<FUniqueNetIdRepl>& userList);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Users();
    
};

