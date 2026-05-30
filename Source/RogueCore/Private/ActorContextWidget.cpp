#include "ActorContextWidget.h"

UActorContextWidget::UActorContextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ContextActor = nullptr;
    this->ContextPrimitive = nullptr;
}

void UActorContextWidget::Update(UPrimitiveComponent* InContextPrimitive) {
}

void UActorContextWidget::Show(UPrimitiveComponent* InContextPrimitive) {
}





