# DarkSouls Text RPG (C++ Port)

This project is a **C++ port** of a narrative-driven, turn-based RPG inspired by the Dark Souls universe. It brings the mechanics, dialogue, and atmosphere of the original Python game to C++, preserving the challenge and humor of the original while offering performance and portability improvements.

> ⚔️ *"Il fuoco si spegne lentamente... Un'epoca oscura si avvicina..."*

---

## 🎮 Original Python Project

- **Author**: [Stefano Raimondi](https://github.com/StefanoRaimondi-prog)
- **Co-Author**: [Ciro Maresca](https://github.com/CyrusVII)
- **Repository**: [Progetto-DarkSouls](https://github.com/StefanoRaimondi-prog/Progetto-DarkSouls)
- **Language**: Python 3

### Original Features:
- 🎭 Multiple playable classes: Cavaliere, Ladro, Mago, Barbaro, Paladino
- 🧟‍♂️ Enemy variety: Goblin, Servitore di Mirko, Mirko Re di OPP (Boss)
- 📜 Narrative-driven storytelling with humor
- 🛏️ Resting area with NPC interactions
- ⚔️ Turn-based combat with stamina, attack types, and recovery

---

## 🚧 Porting Status (C++)

| Component                         | Status           |
|----------------------------------|------------------|
| Main loop (`Main.py`)                | 🔄 |
| Enemy module (`Enemy.py`)        | ⚠️ |
| Player module (`Player.py`)      | ⚠️ |
| Menu system & class selection  (`Menu.py`)   | 🔄 |
| Dialogue system (NPCs)           | ✅ |
| Game loop & narrative intro      | 🚫 |
| Area Tranquilla interactions     | 🔄 |
| Save/load system                 | ⛔ |

> ✅ = Complete 🔄 = Under Development 🚫 = Not Started ⛔ = Not in program ⚠️ = Rewriting

---

## 💡 Why Port to C++?

- 🚀 Improved performance and memory control
- 🧠 Practice advanced OOP concepts in C++ (inheritance, polymorphism, abstraction)
- 🎮 Easier integration with C++ game engines or graphical frontends in the future
- 🗿 C++ Master Race Superiority
---
📁 Project Tree (current)
```
/Progetto-DarkSouls-CPort
│
├── CMakeLists.txt         # CMake configuration
├── main.cpp               
├── ENEMY
  ├── Enemy.cpp
  ├── Enemy.h
  ├── EnemyBase.cpp
  ├── EnemyBase.h
  ├── EnemyMedium.cpp
  ├── EnemyMedium.h
  ├── EnemyHard.cpp
  └── EnemyHard.h 
├── CHARACTERS
  ├── Character.cpp
  ├── Character.h
  ├── Enemy.cpp
  ├── Enemy.h
  ├── NPC.cpp
  ├── NPC.h
  ├── Player.cpp
  └── Player.h
├── MENU
  ├── menu.cpp     
  └── menu.h    
└── GENERAL
  ├── gpfs.cpp      # General Purpose FunctionS
  └── gpfs.h        
```
---

## ⚙️ Build Instructions (CMake)

### Requirements
- CMake 3.10+
- C++17-compatible compiler (e.g., g++, clang++, MSVC)

### Steps

```bash
git clone https://github.com/VikSn0w/Progetto-DarkSouls-CPort.git
cd DarkSoulsRPG-CPP
mkdir build && cd build
cmake ..
cmake --build .
./DarkSoulsRPG
