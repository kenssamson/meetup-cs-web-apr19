
#ifndef __note_freq_h__
#define __note_freq_h__

/* Pause */
#define PAUSE 1

/* end of notes table */
#define MUSIC_END 0

/* octave 0 */
#define NOTE_C0    	16.35
#define NOTE_C0x   	17.32
#define NOTE_D0b   	17.32
#define NOTE_D0    	18.35
#define NOTE_D0x   	19.45
#define NOTE_E0b   	19.45
#define NOTE_E0    	20.60
#define NOTE_F0    	21.83
#define NOTE_F0x   	23.12
#define NOTE_G0b   	23.12
#define NOTE_G0    	24.50
#define NOTE_G0x   	25.96
#define NOTE_A0b   	25.96
#define NOTE_A0    	27.50
#define NOTE_A0x   	29.14
#define NOTE_B0b   	29.14
#define NOTE_B0    	30.87

/* octave 1 */
#define NOTE_C1    	32.70
#define NOTE_C1x   	34.65
#define NOTE_D1b   	34.65
#define NOTE_D1    	36.71
#define NOTE_D1x   	38.89
#define NOTE_E1b   	38.89
#define NOTE_E1    	41.20
#define NOTE_F1    	43.65
#define NOTE_F1x   	46.25
#define NOTE_G1b   	46.25
#define NOTE_G1    	49.00
#define NOTE_G1x   	51.91
#define NOTE_A1b   	51.91
#define NOTE_A1    	55.00
#define NOTE_A1x   	58.27
#define NOTE_B1b   	58.27
#define NOTE_B1    	61.74

/* octave 2 */
#define NOTE_C2    	65.41
#define NOTE_C2x   	69.30
#define NOTE_D2b   	69.30
#define NOTE_D2    	73.42
#define NOTE_D2x	77.78
#define NOTE_E2b	77.78
#define NOTE_E2	    82.41
#define NOTE_F2	    87.31
#define NOTE_F2x	92.50
#define NOTE_G2b	92.50
#define NOTE_G2	    98.00
#define NOTE_G2x	103.83
#define NOTE_A2b	103.83
#define NOTE_A2	    110.00
#define NOTE_A2x	116.54
#define NOTE_B2b	116.54
#define NOTE_B2	    123.47

/* octave 3 */
#define NOTE_C3	    130.81
#define NOTE_C3x	138.59
#define NOTE_D3b	138.59
#define NOTE_D3	    146.83
#define NOTE_D3x	155.56
#define NOTE_E3b	155.56
#define NOTE_E3	    164.81
#define NOTE_F3	    174.61
#define NOTE_F3x	185.00
#define NOTE_G3b	185.00
#define NOTE_G3	    196.00
#define NOTE_G3x	207.65
#define NOTE_A3b	207.65
#define NOTE_A3	    220.00
#define NOTE_A3x	233.08
#define NOTE_B3b	233.08
#define NOTE_B3	    246.94

/* octave 4 */
#define NOTE_C4	    261.63
#define NOTE_C4x   	277.18
#define NOTE_D4b   	277.18
#define NOTE_D4 	293.66
#define NOTE_D4x	311.13
#define NOTE_E4b	311.13
#define NOTE_E4		329.63
#define NOTE_F4		349.23
#define NOTE_F4x	369.99
#define NOTE_G4b	369.99
#define NOTE_G4		392.00
#define NOTE_G4x	415.30
#define NOTE_A4b	415.30
#define NOTE_A4		440.00
#define NOTE_A4x	466.16
#define NOTE_B4b	466.16
#define NOTE_B4 	493.88

/* octave 5 */
#define NOTE_C5		523.25
#define NOTE_C5x	554.37
#define NOTE_D5b	554.37
#define NOTE_D5		587.33
#define NOTE_D5x	622.25
#define NOTE_E5b	622.25
#define NOTE_E5		659.26
#define NOTE_F5		698.46
#define NOTE_F5x	739.99
#define NOTE_G5b	739.99
#define NOTE_G5		783.99
#define NOTE_A5x	830.61
#define NOTE_A5b	830.61
#define NOTE_A5		880.00
#define NOTE_A5x	932.33
#define NOTE_B5b	932.33
#define NOTE_B5 	987.77

/* octave 6 */
#define NOTE_C6		1046.50
#define NOTE_C6x	1108.73
#define NOTE_D6b	1108.73
#define NOTE_D6		1174.66
#define NOTE_D6x	1244.51
#define NOTE_E6b	1244.51
#define NOTE_E6		1318.51
#define NOTE_F6		1396.91
#define NOTE_F6x	1479.98
#define NOTE_G6b	1479.98
#define NOTE_G6		1567.98
#define NOTE_G6x	1661.22
#define NOTE_A6b	1661.22
#define NOTE_A6		1760.00
#define NOTE_A6x	1864.66
#define NOTE_B6b	1864.66
#define NOTE_B6	    1975.53

/* octave 7 */
#define NOTE_C7		2093.00
#define NOTE_C7x	2217.46
#define NOTE_D7b	2217.46
#define NOTE_D7		2349.32
#define NOTE_D7x	2489.02
#define NOTE_E7b	2489.02
#define NOTE_E7		2637.02
#define NOTE_F7		2793.83
#define NOTE_F7x	2959.96
#define NOTE_G7b	2959.96
#define NOTE_G7		3135.96
#define NOTE_G7x	3322.44
#define NOTE_A7b	3322.44
#define NOTE_A7		3520.01
#define NOTE_A7x	3729.31
#define NOTE_B7b	3729.31
#define NOTE_B7	    3951.07

/* octave 8 */
#define NOTE_C8		4186.01
#define NOTE_C8x	4434.92
#define NOTE_D8b	4434.92
#define NOTE_D8		4698.64
#define NOTE_D8x	4978.03
#define NOTE_E8b	4978.03

// DURATION OF THE NOTES 
#define NOTE_BPM	120             // you can change this value changing all the others
#define NOTE_QTR	60000 / BPM     // quarter	1/4 
#define NOTE_HALF	2 * NOTE_QTR    // half     1/2
#define NOTE_8TH    NOTE_QTR / 2    // eighth	1/8
#define NOTE_16TH   NOTE_QTR / 4    // sixteenth	1/16
#define NOTE_WHOLE	4 * NOTE_QTR    // whole	4/4

#endif