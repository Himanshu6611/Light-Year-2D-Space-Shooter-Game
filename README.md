**LightYear** is a 2D space shooter game built in **C++** using **SFML** and **Box2D**.  
It features a custom-built game engine, real-time physics, dynamic enemies, smooth gameplay, and modular architecture.  
Designed to demonstrate modern C++ game development, reusability, and creative design. ✨

---

## 🎮 Features
- ⚙️ Custom 2D **Game Engine** (LightYearsEngine)
- 🎯 **Real-time Physics & Collision** with Box2D
- 🧠 Modular **OOP Architecture**
- 🎨 **SFML-based Rendering, Audio & Input**
- 👾 Multiple Enemy Types & Attack Patterns
- 🔫 Weapon Systems: Single, Three-Way & Frontal Wiper
- 💥 Explosions, Score, and Health HUD
- 🌌 Parallax Space Backgrounds
- 🧰 Built using **CMake** for easy cross-platform builds

---

## 🧱 Tech Stack
| Component | Technology |
|------------|-------------|
| Language | C++17 |
| Graphics / Input | SFML 2.5.x |
| Physics | Box2D 2.4.x |
| Build System | CMake |
| IDE | Visual Studio 2022 |

---

## 🕹️ How to Run

### 🪐 Option 1 — Visual Studio 2022 (Recommended)
1. Open **Visual Studio 2022**
2. Go to `File → Open → CMake...`
3. Select `CMakeLists.txt` from `LightYear-main` folder
4. Set configuration to **Release**, platform to **x64**
5. Run ▶ **LightYearsGame** project

### 🧩 Option 2 — Manual CMake Build
```bash
mkdir build
cd build
cmake .. -A x64
cmake --build . --config Release

Then navigate to:

build/LightYearsGame/Release/

📁 Project Structure

LightYear-main/
├── LightYearsEngine/       # Core engine (framework, physics, assets, UI)
├── LightYearsGame/         # Game logic (levels, player, enemies)
│   ├── assets/             # Game textures & sprites
│   └── include/src         # Gameplay code
├── CMakeLists.txt          # Root CMake build script
└── README.md               # Project documentation

| Key           | Action         |
| ------------- | -------------- |
| W / A / S / D | Move spaceship |
| SPACE         | Shoot          |
| ESC           | Exit game      |

💡 Future Enhancements

-->Multiplayer mode

-->Boss battles & advanced AI

-->New weapon systems

-->Soundtrack & visual effects

-->Save/load player progress



---

## 🪐 License
This project is **not free for public use or redistribution**.  
All rights reserved by the author.  
You may view the code for demonstration or portfolio purposes, but reproduction, modification, or distribution without permission is prohibited.

---

> _“Shoot for the stars. Build for the future.”_ ✨
