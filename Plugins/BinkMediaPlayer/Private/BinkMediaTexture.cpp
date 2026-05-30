#include "BinkMediaTexture.h"

UBinkMediaTexture::UBinkMediaTexture() {
    NeverStream = true;
    AddressX = TA_Wrap;
    AddressY = TA_Wrap;
    MediaPlayer = nullptr;
    PixelFormat = PF_B8G8R8A8;
    tonemap = false;
    OutputNits = 10000.00f;
    alpha = 1.00f;
    DecodeSRGB = true;
}

void UBinkMediaTexture::SetMediaPlayer(UBinkMediaPlayer* InMediaPlayer) {
}

void UBinkMediaTexture::Clear() {
}


