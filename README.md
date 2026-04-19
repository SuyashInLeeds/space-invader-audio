#Space Invader Game - Audio Module
## Overview
This module implements the audio subsystem for the Space Invader game developed as part of the Embedded Microprocessor System Design coursework.

The current implementation provides placeholder sound generation functions, which will later be extended to hardware-based audio output using GPIO or the onboard audio codec on the DE1-SoC platform.

---

## Features
- Modular audio interface (`audio.h`)
- Basic sound event handlers:
  - Shooting sound
  - Enemy hit sound
  - Game over sound
- Designed for easy integration with game logic

---

## Implementation Details
The current version uses delay-based placeholders to simulate sound timing. Future versions will replace this with:

- PWM-based buzzer output via GPIO  
- Frequency variation for distinct sound effects  
- Possible integration with WM8731 Audio CODEC  

---

## File Structure
