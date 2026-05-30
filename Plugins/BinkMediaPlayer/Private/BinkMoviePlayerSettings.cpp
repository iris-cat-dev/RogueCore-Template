#include "BinkMoviePlayerSettings.h"

UBinkMoviePlayerSettings::UBinkMoviePlayerSettings() {
    BinkBufferMode = MP_Bink_Stream;
    BinkSoundTrack = MP_Bink_Sound_Simple;
    BinkSoundTrackStart = 0;
    BinkPixelFormat = PF_B8G8R8A8;
}


