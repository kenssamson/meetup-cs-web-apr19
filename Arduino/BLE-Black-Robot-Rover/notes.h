/*
ICR values for AVR micro controllers to play sound using PWM.
System clock:   8000000 [Hz]
Prescaler:      8
PWM mode:       phase/frequency correct 16 bit

This file was automatically generated using script from 
http://aquaticus.info/pwm-music
*/

#ifndef __PWM_NOTES_H__
#define __PWM_NOTES_H__

/* Pause */

#define PAUSE 1

/* end of notes table */
#define MUSIC_END 0

/* There are 12 notes in octave + variations (lower case, other names)  */

/* Octave #2 */

#define NOTE_C2   7645 	/* PWM: 65.40 Hz, note freq: 65.41 Hz, error 0.01% */
#define NOTE_c2   7645 	/* PWM: 65.40 Hz, note freq: 65.41 Hz, error 0.01% */
#define NOTE_C2x  7215 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.01% */
#define NOTE_c2x  7215 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.01% */
#define NOTE_D2b  7215 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.01% */
#define NOTE_d2b  7215 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.01% */
#define NOTE_D2   6810 	/* PWM: 73.42 Hz, note freq: 73.42 Hz, error 0.01% */
#define NOTE_d2   6810 	/* PWM: 73.42 Hz, note freq: 73.42 Hz, error 0.01% */
#define NOTE_D2x  6428 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define NOTE_d2x  6428 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define NOTE_E2b  6428 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define NOTE_e2b  6428 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define NOTE_E2   6067 	/* PWM: 82.41 Hz, note freq: 82.41 Hz, error 0.01% */
#define NOTE_e2   6067 	/* PWM: 82.41 Hz, note freq: 82.41 Hz, error 0.01% */
#define NOTE_F2   5727 	/* PWM: 87.31 Hz, note freq: 87.31 Hz, error 0.00% */
#define NOTE_f2   5727 	/* PWM: 87.31 Hz, note freq: 87.31 Hz, error 0.00% */
#define NOTE_F2x  5405 	/* PWM: 92.51 Hz, note freq: 92.50 Hz, error 0.01% */
#define NOTE_f2x  5405 	/* PWM: 92.51 Hz, note freq: 92.50 Hz, error 0.01% */
#define NOTE_G2b  5405 	/* PWM: 92.51 Hz, note freq: 92.50 Hz, error 0.01% */
#define NOTE_g2b  5405 	/* PWM: 92.51 Hz, note freq: 92.50 Hz, error 0.01% */
#define NOTE_G2   5102 	/* PWM: 98.00 Hz, note freq: 98.00 Hz, error 0.00% */
#define NOTE_g2   5102 	/* PWM: 98.00 Hz, note freq: 98.00 Hz, error 0.00% */
#define NOTE_G2x  4816 	/* PWM: 103.82 Hz, note freq: 103.83 Hz, error 0.01% */
#define NOTE_g2x  4816 	/* PWM: 103.82 Hz, note freq: 103.83 Hz, error 0.01% */
#define NOTE_A2b  4816 	/* PWM: 103.82 Hz, note freq: 103.83 Hz, error 0.01% */
#define NOTE_a2b  4816 	/* PWM: 103.82 Hz, note freq: 103.83 Hz, error 0.01% */
#define NOTE_A2   4545 	/* PWM: 110.01 Hz, note freq: 110.00 Hz, error 0.01% */
#define NOTE_a2   4545 	/* PWM: 110.01 Hz, note freq: 110.00 Hz, error 0.01% */
#define NOTE_A2x  4290 	/* PWM: 116.55 Hz, note freq: 116.54 Hz, error 0.01% */
#define NOTE_a2x  4290 	/* PWM: 116.55 Hz, note freq: 116.54 Hz, error 0.01% */
#define NOTE_B2b  4290 	/* PWM: 116.55 Hz, note freq: 116.54 Hz, error 0.01% */
#define NOTE_b2b  4290 	/* PWM: 116.55 Hz, note freq: 116.54 Hz, error 0.01% */
#define NOTE_B2   4050 	/* PWM: 123.46 Hz, note freq: 123.47 Hz, error 0.01% */
#define NOTE_b2   4050 	/* PWM: 123.46 Hz, note freq: 123.47 Hz, error 0.01% */

/* Octave #3 */

#define NOTE_A3   2273 	/* PWM: 219.97 Hz, note freq: 220.00 Hz, error 0.01% */
#define NOTE_a3   2273 	/* PWM: 219.97 Hz, note freq: 220.00 Hz, error 0.01% */
#define NOTE_A3b  2408 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */
#define NOTE_a3b  2408 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */
#define NOTE_A3x  2145 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define NOTE_a3x  2145 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define NOTE_B3   2025 	/* PWM: 246.91 Hz, note freq: 246.94 Hz, error 0.01% */
#define NOTE_b3   2025 	/* PWM: 246.91 Hz, note freq: 246.94 Hz, error 0.01% */
#define NOTE_B3b  2145 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define NOTE_b3b  2145 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define NOTE_C3   3822 	/* PWM: 130.82 Hz, note freq: 130.81 Hz, error 0.01% */
#define NOTE_c3   3822 	/* PWM: 130.82 Hz, note freq: 130.81 Hz, error 0.01% */
#define NOTE_C3x  3608 	/* PWM: 138.58 Hz, note freq: 138.59 Hz, error 0.01% */
#define NOTE_c3x  3608 	/* PWM: 138.58 Hz, note freq: 138.59 Hz, error 0.01% */
#define NOTE_D3   3405 	/* PWM: 146.84 Hz, note freq: 146.83 Hz, error 0.01% */
#define NOTE_d3   3405 	/* PWM: 146.84 Hz, note freq: 146.83 Hz, error 0.01% */
#define NOTE_D3b  3608 	/* PWM: 138.58 Hz, note freq: 138.59 Hz, error 0.01% */
#define NOTE_d3b  3608 	/* PWM: 138.58 Hz, note freq: 138.59 Hz, error 0.01% */
#define NOTE_D3x  3214 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define NOTE_d3x  3214 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define NOTE_E3   3034 	/* PWM: 164.80 Hz, note freq: 164.81 Hz, error 0.01% */
#define NOTE_e3   3034 	/* PWM: 164.80 Hz, note freq: 164.81 Hz, error 0.01% */
#define NOTE_E3b  3214 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define NOTE_e3b  3214 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define NOTE_F3   2863 	/* PWM: 174.64 Hz, note freq: 174.61 Hz, error 0.02% */
#define NOTE_f3   2863 	/* PWM: 174.64 Hz, note freq: 174.61 Hz, error 0.02% */
#define NOTE_F3x  2703 	/* PWM: 184.98 Hz, note freq: 185.00 Hz, error 0.01% */
#define NOTE_f3x  2703 	/* PWM: 184.98 Hz, note freq: 185.00 Hz, error 0.01% */
#define NOTE_G3   2551 	/* PWM: 196.00 Hz, note freq: 196.00 Hz, error 0.00% */
#define NOTE_g3   2551 	/* PWM: 196.00 Hz, note freq: 196.00 Hz, error 0.00% */
#define NOTE_G3b  2703 	/* PWM: 184.98 Hz, note freq: 185.00 Hz, error 0.01% */
#define NOTE_g3b  2703 	/* PWM: 184.98 Hz, note freq: 185.00 Hz, error 0.01% */
#define NOTE_G3x  2408 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */
#define NOTE_g3x  2408 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */

/* Octave #4 */

#define NOTE_A4   1136 	/* PWM: 440.14 Hz, note freq: 440.00 Hz, error 0.03% */
#define NOTE_a4   1136 	/* PWM: 440.14 Hz, note freq: 440.00 Hz, error 0.03% */
#define NOTE_A4b  1204 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */
#define NOTE_a4b  1204 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */
#define NOTE_A4x  1073 	/* PWM: 465.98 Hz, note freq: 466.16 Hz, error 0.04% */
#define NOTE_a4x  1073 	/* PWM: 465.98 Hz, note freq: 466.16 Hz, error 0.04% */
#define NOTE_B4   1012 	/* PWM: 494.07 Hz, note freq: 493.88 Hz, error 0.04% */
#define NOTE_b4   1012 	/* PWM: 494.07 Hz, note freq: 493.88 Hz, error 0.04% */
#define NOTE_B4b  1073 	/* PWM: 465.98 Hz, note freq: 466.16 Hz, error 0.04% */
#define NOTE_b4b  1073 	/* PWM: 465.98 Hz, note freq: 466.16 Hz, error 0.04% */
#define NOTE_C4   1911 	/* PWM: 261.64 Hz, note freq: 261.63 Hz, error 0.01% */
#define NOTE_c4   1911 	/* PWM: 261.64 Hz, note freq: 261.63 Hz, error 0.01% */
#define NOTE_C4x  1804 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define NOTE_c4x  1804 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define NOTE_D4   1703 	/* PWM: 293.60 Hz, note freq: 293.66 Hz, error 0.02% */
#define NOTE_d4   1703 	/* PWM: 293.60 Hz, note freq: 293.66 Hz, error 0.02% */
#define NOTE_D4b  1804 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define NOTE_d4b  1804 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define NOTE_D4x  1607 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define NOTE_d4x  1607 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define NOTE_E4   1517 	/* PWM: 329.60 Hz, note freq: 329.63 Hz, error 0.01% */
#define NOTE_e4   1517 	/* PWM: 329.60 Hz, note freq: 329.63 Hz, error 0.01% */
#define NOTE_E4b  1607 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define NOTE_e4b  1607 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define NOTE_F4   1432 	/* PWM: 349.16 Hz, note freq: 349.23 Hz, error 0.02% */
#define NOTE_f4   1432 	/* PWM: 349.16 Hz, note freq: 349.23 Hz, error 0.02% */
#define NOTE_F4x  1351 	/* PWM: 370.10 Hz, note freq: 369.99 Hz, error 0.03% */
#define NOTE_f4x  1351 	/* PWM: 370.10 Hz, note freq: 369.99 Hz, error 0.03% */
#define NOTE_G4   1276 	/* PWM: 391.85 Hz, note freq: 392.00 Hz, error 0.04% */
#define NOTE_g4   1276 	/* PWM: 391.85 Hz, note freq: 392.00 Hz, error 0.04% */
#define NOTE_G4b  1351 	/* PWM: 370.10 Hz, note freq: 369.99 Hz, error 0.03% */
#define NOTE_g4b  1351 	/* PWM: 370.10 Hz, note freq: 369.99 Hz, error 0.03% */
#define NOTE_G4x  1204 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */
#define NOTE_g4x  1204 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */

/* Octave #5 */

#define NOTE_A5   568  	/* PWM: 880.28 Hz, note freq: 880.00 Hz, error 0.03% */
#define NOTE_a5   568  	/* PWM: 880.28 Hz, note freq: 880.00 Hz, error 0.03% */
#define NOTE_A5b  602  	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */
#define NOTE_a5b  602  	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */
#define NOTE_A5x  536  	/* PWM: 932.84 Hz, note freq: 932.33 Hz, error 0.05% */
#define NOTE_a5x  536  	/* PWM: 932.84 Hz, note freq: 932.33 Hz, error 0.05% */
#define NOTE_B5   506  	/* PWM: 988.14 Hz, note freq: 987.77 Hz, error 0.04% */
#define NOTE_b5   506  	/* PWM: 988.14 Hz, note freq: 987.77 Hz, error 0.04% */
#define NOTE_B5b  536  	/* PWM: 932.84 Hz, note freq: 932.33 Hz, error 0.05% */
#define NOTE_b5b  536  	/* PWM: 932.84 Hz, note freq: 932.33 Hz, error 0.05% */
#define NOTE_C5   956  	/* PWM: 523.01 Hz, note freq: 523.25 Hz, error 0.05% */
#define NOTE_c5   956  	/* PWM: 523.01 Hz, note freq: 523.25 Hz, error 0.05% */
#define NOTE_C5x  902  	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define NOTE_c5x  902  	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define NOTE_D5   851  	/* PWM: 587.54 Hz, note freq: 587.33 Hz, error 0.04% */
#define NOTE_d5   851  	/* PWM: 587.54 Hz, note freq: 587.33 Hz, error 0.04% */
#define NOTE_D5b  902  	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define NOTE_d5b  902  	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define NOTE_D5x  804  	/* PWM: 621.89 Hz, note freq: 622.25 Hz, error 0.06% */
#define NOTE_d5x  804  	/* PWM: 621.89 Hz, note freq: 622.25 Hz, error 0.06% */
#define NOTE_E5   758  	/* PWM: 659.63 Hz, note freq: 659.26 Hz, error 0.06% */
#define NOTE_e5   758  	/* PWM: 659.63 Hz, note freq: 659.26 Hz, error 0.06% */
#define NOTE_E5b  804  	/* PWM: 621.89 Hz, note freq: 622.25 Hz, error 0.06% */
#define NOTE_e5b  804  	/* PWM: 621.89 Hz, note freq: 622.25 Hz, error 0.06% */
#define NOTE_F5   716  	/* PWM: 698.32 Hz, note freq: 698.46 Hz, error 0.02% */
#define NOTE_f5   716  	/* PWM: 698.32 Hz, note freq: 698.46 Hz, error 0.02% */
#define NOTE_F5x  676  	/* PWM: 739.64 Hz, note freq: 739.99 Hz, error 0.05% */
#define NOTE_f5x  676  	/* PWM: 739.64 Hz, note freq: 739.99 Hz, error 0.05% */
#define NOTE_G5   638  	/* PWM: 783.70 Hz, note freq: 783.99 Hz, error 0.04% */
#define NOTE_g5   638  	/* PWM: 783.70 Hz, note freq: 783.99 Hz, error 0.04% */
#define NOTE_G5b  676  	/* PWM: 739.64 Hz, note freq: 739.99 Hz, error 0.05% */
#define NOTE_g5b  676  	/* PWM: 739.64 Hz, note freq: 739.99 Hz, error 0.05% */
#define NOTE_G5x  602  	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */
#define NOTE_g5x  602  	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */

/* Octave #6 */

#define NOTE_A6   284  	/* PWM: 1760.56 Hz, note freq: 1760.00 Hz, error 0.03% */
#define NOTE_a6   284  	/* PWM: 1760.56 Hz, note freq: 1760.00 Hz, error 0.03% */
#define NOTE_A6b  301  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */
#define NOTE_a6b  301  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */
#define NOTE_A6x  268  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define NOTE_a6x  268  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define NOTE_B6   253  	/* PWM: 1976.28 Hz, note freq: 1975.53 Hz, error 0.04% */
#define NOTE_b6   253  	/* PWM: 1976.28 Hz, note freq: 1975.53 Hz, error 0.04% */
#define NOTE_B6b  268  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define NOTE_b6b  268  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define NOTE_C6   478  	/* PWM: 1046.03 Hz, note freq: 1046.50 Hz, error 0.05% */
#define NOTE_c6   478  	/* PWM: 1046.03 Hz, note freq: 1046.50 Hz, error 0.05% */
#define NOTE_C6x  451  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define NOTE_c6x  451  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define NOTE_D6   426  	/* PWM: 1173.71 Hz, note freq: 1174.66 Hz, error 0.08% */
#define NOTE_d6   426  	/* PWM: 1173.71 Hz, note freq: 1174.66 Hz, error 0.08% */
#define NOTE_D6b  451  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define NOTE_d6b  451  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define NOTE_D6x  402  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define NOTE_d6x  402  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define NOTE_E6   379  	/* PWM: 1319.26 Hz, note freq: 1318.51 Hz, error 0.06% */
#define NOTE_e6   379  	/* PWM: 1319.26 Hz, note freq: 1318.51 Hz, error 0.06% */
#define NOTE_E6b  402  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define NOTE_e6b  402  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define NOTE_F6   358  	/* PWM: 1396.65 Hz, note freq: 1396.91 Hz, error 0.02% */
#define NOTE_f6   358  	/* PWM: 1396.65 Hz, note freq: 1396.91 Hz, error 0.02% */
#define NOTE_F6x  338  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define NOTE_f6x  338  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define NOTE_G6   319  	/* PWM: 1567.40 Hz, note freq: 1567.98 Hz, error 0.04% */
#define NOTE_g6   319  	/* PWM: 1567.40 Hz, note freq: 1567.98 Hz, error 0.04% */
#define NOTE_G6b  338  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define NOTE_g6b  338  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define NOTE_G6x  301  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */
#define NOTE_g6x  301  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */

/* Octave #7 */

#define NOTE_A7   142  	/* PWM: 3521.13 Hz, note freq: 3520.00 Hz, error 0.03% */
#define NOTE_a7   142  	/* PWM: 3521.13 Hz, note freq: 3520.00 Hz, error 0.03% */
#define NOTE_A7b  150  	/* PWM: 3333.33 Hz, note freq: 3322.44 Hz, error 0.33% */
#define NOTE_a7b  150  	/* PWM: 3333.33 Hz, note freq: 3322.44 Hz, error 0.33% */
#define NOTE_A7x  134  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define NOTE_a7x  134  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define NOTE_B7   127  	/* PWM: 3937.01 Hz, note freq: 3951.07 Hz, error 0.36% */
#define NOTE_b7   127  	/* PWM: 3937.01 Hz, note freq: 3951.07 Hz, error 0.36% */
#define NOTE_B7b  134  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define NOTE_b7b  134  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define NOTE_C7   239  	/* PWM: 2092.05 Hz, note freq: 2093.00 Hz, error 0.05% */
#define NOTE_c7   239  	/* PWM: 2092.05 Hz, note freq: 2093.00 Hz, error 0.05% */
#define NOTE_C7x  225  	/* PWM: 2222.22 Hz, note freq: 2217.46 Hz, error 0.21% */
#define NOTE_c7x  225  	/* PWM: 2222.22 Hz, note freq: 2217.46 Hz, error 0.21% */
#define NOTE_D7   213  	/* PWM: 2347.42 Hz, note freq: 2349.32 Hz, error 0.08% */
#define NOTE_d7   213  	/* PWM: 2347.42 Hz, note freq: 2349.32 Hz, error 0.08% */
#define NOTE_D7b  225  	/* PWM: 2222.22 Hz, note freq: 2217.46 Hz, error 0.21% */
#define NOTE_d7b  225  	/* PWM: 2222.22 Hz, note freq: 2217.46 Hz, error 0.21% */
#define NOTE_D7x  201  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define NOTE_d7x  201  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define NOTE_E7   190  	/* PWM: 2631.58 Hz, note freq: 2637.02 Hz, error 0.21% */
#define NOTE_e7   190  	/* PWM: 2631.58 Hz, note freq: 2637.02 Hz, error 0.21% */
#define NOTE_E7b  201  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define NOTE_e7b  201  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define NOTE_F7   179  	/* PWM: 2793.30 Hz, note freq: 2793.83 Hz, error 0.02% */
#define NOTE_f7   179  	/* PWM: 2793.30 Hz, note freq: 2793.83 Hz, error 0.02% */
#define NOTE_F7x  169  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define NOTE_f7x  169  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define NOTE_G7   159  	/* PWM: 3144.65 Hz, note freq: 3135.96 Hz, error 0.28% */
#define NOTE_g7   159  	/* PWM: 3144.65 Hz, note freq: 3135.96 Hz, error 0.28% */
#define NOTE_G7b  169  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define NOTE_g7b  169  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define NOTE_G7x  150  	/* PWM: 3333.33 Hz, note freq: 3322.44 Hz, error 0.33% */
#define NOTE_g7x  150  	/* PWM: 3333.33 Hz, note freq: 3322.44 Hz, error 0.33% */

#endif /* __PWM_NOTES_H__ */
