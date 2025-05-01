# SpillZone
**Local Multiplayer Battle Game**

Created by **Team Plus One**  
Course: **COSC 4375.001**  
Professor: **Professor Dakshit**

---

## Overview

*SpillZone* is a fast-paced, multiplayer arena game designed to deliver quick, fun battles between players. Built using Unreal Engine 5, *SpillZone* lets players jump into local matches over the same network, with future plans for full web-based play using Pixel Streaming and Epic Online Services (EOS).

While the core gameplay is fully functional for local multiplayer sessions, full online matchmaking and browser play are planned for future updates.

---

## Features

- Local multiplayer gameplay (LAN-based)
- Fast-paced PvP combat
- Player movement, health, damage, and loot systems
- Functional main menu and session joining
- Smooth and responsive controls
- Built using Unreal Engine 5

---

## How to Play

1. Make sure all players are connected to the **same Wi-Fi network**.
2. Launch the game on each player’s device.
3. Host: One player selects **Create Game** to host a match.
4. Others: Join the host’s match by selecting **Join Game**.
5. Play: Move around, collect loot, battle other players, and survive to win!

### Controls

- **Movement**: `W`, `A`, `S`, `D`
- **Pick up loot / Interact**: `E`
- **Shoot**: Left mouse button
- **Jump**: Spacebar
- **Menu Navigation**: Mouse and Keyboard

---

## Current Limitations

- **Pixel Streaming** and **full EOS online multiplayer** are not implemented.
- We originally planned to integrate Pixel Streaming, but ran out of time to set up the servers and infrastructure.
- Matches must currently be hosted and joined over the same local network (LAN).
- Browser-based play is still part of our vision and is planned for future updates.

---

## Future Plans

- Integrate **Pixel Streaming** for browser-based gameplay.
- Implement **Epic Online Services (EOS)** for account management and full online multiplayer.
- Add more maps, power-ups, and character customization.
- Optimize for lower latency and mobile device support.
- Secure external funding to expand infrastructure and hosting capabilities.

---

## Installation and Setup

### Option 1: View and test using Unreal Engine

To view and test the project in Unreal Editor and use multiplayer sandbox testing with listen servers:

1. Make sure you have **Visual Studio 2019 or newer** installed.
2. Install **Unreal Engine 5.0** (exact version).
3. Open the Unreal project in the editor.
4. Use the "Play in Editor" multiplayer options to simulate multiple players with listen servers.
5. Explore all maps, mechanics, menus, and player sync features.

### Option 2: Run the packaged build (LAN multiplayer)

If you only want to play the game locally on two Windows PCs:

1. Ensure both computers are connected on the **same LAN/Wi-Fi**.
2. **Both machines must be running Windows**.
3. Navigate to the packaged game folder:
   - `SpillZonePackage/Windows/`
4. Double-click on `BeanBattleRoyale.exe` to launch the game.
5. One player should host a match using **Create Game**, and the second should join using **Join Game**.

---

## Credits

- Developed by: **Plus One**
- Engine: **Unreal Engine 5**
- Network Services: **(Planned) Epic Online Services (EOS)**
- Streaming Technology: **(Planned) Pixel Streaming**

---
