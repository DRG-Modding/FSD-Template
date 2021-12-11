#include "CampaignRequirement.h"

class AFSDPlayerController;
class UCampaign;

bool UCampaignRequirement::IsRequirementMet(AFSDPlayerController* Player, UCampaign* Campaign) const {
    return false;
}

UCampaignRequirement::UCampaignRequirement() {
}

