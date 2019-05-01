#include <toneAC.h>
#include "pitches.h"

#define PAUSETIME 30

/*===========================================
 Sample Songs to play using the Piezo Buzzer
 ===========================================*/
// Star Wars
const int starwars[] = {
    NOTE_AS2, 8, NOTE_AS2, 8, PAUSE, 16, NOTE_F3, 8, NOTE_F3, 8, PAUSE, 16, NOTE_DS3, 16, PAUSE, 16, NOTE_D3, 16, PAUSE, 16, NOTE_C3, 16, PAUSE, 16, 
    NOTE_AS3, 8, NOTE_AS3, 8, PAUSE, 16, NOTE_F3, 8, PAUSE, 16, NOTE_DS3, 16, PAUSE, 16, NOTE_D3, 16, PAUSE, 16, NOTE_C3, 16, PAUSE, 16, NOTE_AS3, 8, 
    NOTE_AS3, 8, PAUSE, 16, NOTE_F3, 8, PAUSE, 16, NOTE_DS3, 16, PAUSE, 16, NOTE_D3, 16, PAUSE, 16, NOTE_DS3, 16, PAUSE, 16, NOTE_C3, 8, NOTE_C3, 8,
    MUSIC_END
};

const int imperialMarch[] = {
    NOTE_A3, 4, NOTE_A3, 4, NOTE_A3, 4, NOTE_F3, 6, NOTE_C4, 16, 
    NOTE_A3, 4, NOTE_F3, 6, NOTE_C4, 16, NOTE_A3, 2,
    NOTE_E4, 4, NOTE_E4, 4, NOTE_E4, 4, NOTE_F4, 6, NOTE_C4, 16,
    NOTE_GS3, 4, NOTE_F3, 6, NOTE_C4, 16, NOTE_A3, 2,
    NOTE_A4, 4, NOTE_A3, 6, NOTE_A3, 16, NOTE_A4, 4, NOTE_GS4, 6, NOTE_G4, 16,
    NOTE_FS4, 16, NOTE_E4, 16, NOTE_F4, 8, PAUSE, 8, NOTE_AS3, 8, NOTE_DS4, 4, NOTE_D4, 6, NOTE_CS4, 16,
    MUSIC_END     
};

// Fur Elise
const int furelise[] = {
    NOTE_E4, 8, NOTE_DS4, 8, NOTE_E4, 8, NOTE_DS4, 8, NOTE_E4, 8, NOTE_B3, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_A3, 8, PAUSE, 8,
    NOTE_C3, 8, NOTE_E3, 8, NOTE_A3, 8, NOTE_B3, 4, PAUSE, 8, NOTE_E3, 8, NOTE_GS3, 8, NOTE_B3, 8, NOTE_C4, 4, PAUSE, 8, NOTE_E3, 8,
    NOTE_E3, 8, NOTE_DS4, 8, NOTE_E4, 8, NOTE_DS4, 8, NOTE_E4, 8, NOTE_B3, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_A3, 8, PAUSE, 8, NOTE_C3, 8,
    NOTE_E3, 8, NOTE_A3, 8, NOTE_B3, 4, PAUSE, 8, NOTE_E3, 8, NOTE_C4, 8, NOTE_B3, 8, NOTE_A3, 4,
    MUSIC_END
};

// Beatles, Hey Jude
const int Jude[] = {
    NOTE_G2, 8, NOTE_E2, 8, PAUSE, 16, NOTE_E2, 16, NOTE_E2, 16, NOTE_G2, 16, NOTE_A2, 16, NOTE_D2, 8, PAUSE, 16, NOTE_D2, 16, NOTE_E2, 16, NOTE_F2, 8,
    NOTE_C3, 8, NOTE_C3, 16, NOTE_C3, 16, NOTE_B2, 16, NOTE_G2, 16, NOTE_A2, 16, NOTE_G2, 16, NOTE_F2, 16, NOTE_E2, 8, PAUSE, 16, NOTE_G2, 16,
    NOTE_A2, 16, NOTE_A2, 8, NOTE_A2, 16, NOTE_D3, 16, NOTE_C3, 16, NOTE_B2, 16, NOTE_B2, 16, NOTE_C3, 16, NOTE_A2, 16, NOTE_G2, 8, PAUSE, 16,
    NOTE_C2, 16, NOTE_D2, 16, NOTE_E2, 16, NOTE_A2, 16, NOTE_A2, 16, NOTE_G2, 8,
    MUSIC_END
};

const int* songs[] = { starwars, imperialMarch, furelise, Jude };
const int song_bpm[] = { 120, 120, 60, 15 };
const char* song_names[] = { "Star Wars", "Imperial March", "Fur Elise", "Hey Jude" };

bool isPlaying = false;

void PlayMusicSetup() { }

/*!
    @brief  play some music
  
   sources: 
    * http://itp.nyu.edu/physcomp/labs/labs-arduino-digital-and-analog/tone-output-using-an-arduino/
    * https://bitbucket.org/teckel12/arduino-toneac/wiki/Home - toneAC library
    * http://aquaticus.info/pwm-music (borrowed code from cpp sample)
*/
void playSong( const int* pMusicNotes, int bpm = 120) {

    /* if BPM is 60, then a note should last 1 sec tempo = duration of 1 whole note
    */
    long noteName, noteLength;
    uint16_t duration, tempo = (uint16_t)(500 * (120 / (float)bpm));

    while ( *pMusicNotes ) {

    // get name of note - C,C#,D,D#,E,F,F#,G,G#,A,A#,B
    noteName = *pMusicNotes;
    pMusicNotes++;

    // get type of note - returns divisor, 1: whole, 2: half, 4: quarter, 8: eigth, 16: sixteenth
    noteLength = *pMusicNotes;
    pMusicNotes++;

    // calculate note duration for tempo 
    duration = tempo / noteLength;

    if (noteName == PAUSE) {
       noToneAC();
    }
    else {
      toneAC(noteName, 10, duration, true);
    }
    delay(duration + PAUSETIME);
  }
#ifdef DEBUG
  Serial.println(F("done playing music"));
#endif
  noToneAC();
  isPlaying = false;
}

/*!
    play a song through the buzzer
*/
void PlayMusicLoop() {

    if (!isPlaying) {
        isPlaying = true;
        #ifdef DEBUG
            Serial.println(F("Let's Play Some Music"));
        #endif
        ble.println("Let's Play Some Music");
        playSong( songs[3], song_bpm[3] );
    }
}
