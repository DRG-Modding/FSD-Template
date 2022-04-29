#pragma once
#include "CoreMinimal.h"
#include "DiscordServerInviteGuildData.h"
#include "DiscordServerInviteData.generated.h"

USTRUCT(BlueprintType)
struct FDiscordServerInviteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 approximate_presence_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 approximate_member_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordServerInviteGuildData guild;
    
    FSD_API FDiscordServerInviteData();
};

