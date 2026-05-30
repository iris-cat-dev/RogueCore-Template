#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
#include "KeyStrokeMatcher.h"
#include "KeyStrokeMatcherLibrary.generated.h"

UCLASS(Blueprintable)
class UKeyStrokeMatcherLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKeyStrokeMatcherLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static bool TestKeyStroke(UPARAM(Ref) FKeyStrokeMatcher& KeyStrokeMatcher, const FKeyEvent& InKey);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseKeyStroke(UPARAM(Ref) FKeyStrokeMatcher& KeyStrokeMatcher, const FKeyEvent& InKey);
    
};

