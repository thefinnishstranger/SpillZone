# SpillZone

**Local Multiplayer Battle Game**  
Created by Team Plus One  
Course: COSC 4375.001  
Professor: Professor Dakshit

---

## 🎮 Overview

**SpillZone** is a fast-paced, multiplayer arena game built using Unreal Engine 5. Players engage in quick, LAN-based battles on Windows. The game includes core mechanics such as player movement, health, damage, loot, and a working lobby system.

> 🌐 Web-based play and online matchmaking (via Pixel Streaming & EOS) are planned but not yet implemented.

---

## 🚀 Features

- LAN-based local multiplayer gameplay
- Fast-paced PvP combat
- Player movement, health, damage, and loot
- Functional menus for hosting/joining sessions
- Responsive controls
- Built with Unreal Engine 5

---

## 🕹 Controls

- **Move**: `W`, `A`, `S`, `D`
- **Shoot**: Left mouse button
- **Jump**: `Spacebar`
- **Interact / Pick up loot**: `E`
- **Menu Navigation**: Mouse and keyboard

---

## ⚠️ Current Limitations

- Pixel Streaming and Epic Online Services are **not implemented**
- Matches must be played over the **same Wi-Fi/LAN**
- Game only runs on **Windows machines**

---

## 📦 Project Structure

- `/SpillZoneSource/` – Unreal Engine 5 project files (source code, maps, assets)
- `/SpillZoneBuild/` – Packaged Windows build for playing via LAN

---

## 🛠 Installation and Setup

### 🧪 Option 1: View and test in Unreal Engine

1. Install **Visual Studio 2019 or newer**
2. Install **Unreal Engine 5.0 (exact version)**
3. Open the `.uproject` inside `SpillZoneProject/`
4. Use "Play in Editor" with listen server mode to test multiplayer

### 🖥 Option 2: Run the packaged build (LAN multiplayer)

1. Make sure both Windows computers are on the same local network
2. Navigate to: `SpillZoneBuild/Windows/`
3. Launch the game by double-clicking `BeanBattleRoyale.exe`
4. One player selects **Create Game**, others select **Join Game**

---

## 🧭 Future Plans

- ✅ Implement Pixel Streaming for browser-based gameplay
- ✅ Integrate Epic Online Services for online multiplayer
- ✅ Add new maps, power-ups, and character customization
- ✅ Optimize for mobile and lower-latency environments
- ✅ Secure funding to support dedicated server hosting

---

## 👥 Credits

Developed by: **Team Plus One**  
Engine: Unreal Engine 5  
Planned Services: Epic Online Services, Pixel Streaming  
Repository: [github.com/thefinnishstranger/SpillZone](https://github.com/thefinnishstranger/SpillZone)
