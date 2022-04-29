#include "ModioSubmissionExtensionLibrary.h"

class UModioSubsystem;

void UModioSubmissionExtensionLibrary::K2_SubmitNewModFileForModFromMemory(UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params) {
}

bool UModioSubmissionExtensionLibrary::K2_LoadModFileToMemory(UModioSubsystem* Target, FModioModID ModId, TArray<uint8>& ModData) {
    return false;
}

UModioSubmissionExtensionLibrary::UModioSubmissionExtensionLibrary() {
}

