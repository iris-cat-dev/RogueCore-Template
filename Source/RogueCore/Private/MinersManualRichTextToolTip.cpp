#include "MinersManualRichTextToolTip.h"

UMinersManualRichTextToolTip::UMinersManualRichTextToolTip() : UUserWidget(FObjectInitializer::Get()) {
    this->ManualList = EMinersManualDescriptionList::DamageTypes;
    this->ManualIndex = -1;
}

void UMinersManualRichTextToolTip::TryGetDescription(FDamageTypeDescription& OutDescription, bool& OutSuccess) const {
}


