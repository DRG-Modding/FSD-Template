#include "CampaignRequirement.h"

class UCampaign;
class AFSDPlayerController;

bool UCampaignRequirement::IsRequirementMet(AFSDPlayerController* Player, UCampaign* Campaign) const {
    return false;
}

UCampaignRequirement::UCampaignRequirement() {
}

