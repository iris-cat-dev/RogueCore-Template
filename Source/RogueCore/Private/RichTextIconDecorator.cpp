#include "RichTextIconDecorator.h"

URichTextIconDecorator::URichTextIconDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->WidgetClass = nullptr;
    this->bEmbedToolTipText = false;
}

void URichTextIconDecorator::SetEmbedToolTipText(bool InEmbed) {
}


