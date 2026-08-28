# LightYears

LightYears is a high-performance 2D Space Shooter game built with C++ using the **Simple and Fast Multimedia Library (SFML)** for graphics, audio, and window management, and the **Box2D** physics engine for collisions and kinematics. 

The project is architected with a decoupled structure consisting of a reusable custom game engine (**LightYearsEngine**) and a gameplay layer (**LightYearsGame**).

![Gameplay Preview](Screenshot%202025-11-12%20205217.png)

---

## Project Structure

The project is split into two logical directories:

1. **[LightYearsEngine](file:///h:/Himanshu%20Projects/LightYear-main/LightYearsEngine)**
   - A modular game engine built on top of SFML and Box2D.
   - Wraps the game loop, actor/object lifecycle management, custom delegates, asset loading, timer management, physics step, particle VFX system, and basic UI widgets.
2. **[LightYearsGame](file:///h:/Himanshu%20Projects/LightYear-main/LightYearsGame)**
   - The game code containing specific game logic, including player spaceship behavior, weapon types (Bullet, ThreeWayShooter, FrontalWiper), enemy AI logic (Vanguard, TwinBlade, UFO, Hexagon, Boss), level stages, gameplay mechanics, and HUD widgets.

---

## Features

### 🛠️ LightYearsEngine Features
- **Actor-Component Model:** Clean lifecycle management with `BeginPlay()`, `Tick(float deltaTime)`, and garbage collection clean cycles.
- **Physics Integration:** Simplified Box2D interface for physical actor movement, rigidbodies, and contact listeners.
- **Custom Delegate System:** Dynamic action-binding delegate structure for decouple-oriented event broadcasting (used for buttons, triggers, etc.).
- **Asset Manager:** Automated texture and font loader with unique reference caching and cleanup.
- **Timer Manager:** Lightweight system for managing asynchronous non-blocking game events.
- **UI Framework:** Modular UI components (`Button`, `TextWidget`, `ValueGauge`, `ImageWidget`) built using hierarchical widgets.

### 🚀 LightYearsGame Features
- **Spaceship Weapons:** Upgradable bullet shooter, three-way shooter, and wide frontal wiper.
- **Dynamic AI Enemies:** Varied enemy types with distinct movement patterns, stages of entry, and custom shooting behavior.
- **Boss Fights:** Multi-phase challenging boss encounters.
- **Rewards System:** Collectible pickup rewards for health recovery, lives, and weapon upgrades.
- **Immersive Audio:** Movement SFX and interactive sound system.

---

## Controls

- **Move Up:** `W`
- **Move Down:** `S`
- **Move Left:** `A`
- **Move Right:** `D`
- **Shoot:** `Space`

---

## Getting Started

### Prerequisites

You need the following installed on your system to compile and build the game:
- **CMake** (version 3.29 or higher)
- **MinGW** (with GCC compiler) or **Visual Studio**

### Building and Running the Game

Follow the steps below to build the project using CMake and MinGW:

1. **Configure the Project**
   Configure the build directory and disable testbeds/unit-tests for dependencies to keep compilation light:
   ```bash
   cmake -B build-mingw -G "MinGW Makefiles" "-DCMAKE_POLICY_VERSION_MINIMUM=3.5" -DBOX2D_BUILD_UNIT_TESTS=OFF -DBOX2D_BUILD_TESTBED=OFF
   ```

2. **Build the Executable**
   ```bash
   cmake --build build-mingw
   ```

3. **Resolve Dynamic Dependencies (DLLs)**
   Copy the `openal32.dll` to the target executable directory (required for the game's SFX system):
   ```powershell
   Copy-Item -Path "build-mingw\_deps\sfml-src\extlibs\bin\x86\openal32.dll" -Destination "build-mingw\LightYearsGame\openal32.dll"
   ```

4. **Run the Game**
   ```bash
   cd build-mingw/LightYearsGame
   ./LightYearsGame.exe
   ```

---

## Licenses & Credits
- **Asset Pack:** Space Shooter Redux by [Kenney](https://www.kenney.nl).
- **Libraries Used:** 
  - [SFML](https://github.com/SFML/SFML) (zlib license)
  - [Box2D](https://github.com/erincatto/box2d) (MIT license)
