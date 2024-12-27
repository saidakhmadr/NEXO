# **Game Engine**

Welcome to the official repository of **Game Engine**, a custom-built 3D game engine created using **C++**, **OpenGL**, and **WinAPI**. This engine is designed to be modular, efficient, and easy to integrate with external applications. It is intended for use in creating games and simulations, providing the core components necessary for rendering, input management, and more.

---

## **Table of Contents**

1. [Introduction](#introduction)
2. [Architecture](#architecture)
3. [Engine Features](#engine-features)
4. [Sandbox Integration](#sandbox-integration)
5. [How to Build](#how-to-build)
6. [Usage](#usage)
7. [Contributing](#contributing)
8. [License](#license)

---

## **Introduction**

This engine is built to be a foundation for 3D game development, using industry-standard technologies such as **OpenGL** for rendering and **WinAPI** for window management and system-level operations. It is designed to be **modular**, allowing for easy updates and the addition of new features. The core functionality of the engine is encapsulated in a **DLL** (Dynamic Link Library), which is integrated into the **Sandbox** project (an executable application) for testing and development purposes.

The engine is created to be lightweight, performance-focused, and easy to extend with new components. It is structured to handle rendering, input, and basic game loop functionality out-of-the-box, while allowing you to build on top of it for more complex games.

---

## **Architecture**

### **Solution Structure**
The engine is organized into a **Visual Studio solution** with two primary projects:

1. **Engine (DLL)**:
   - This project contains the core components of the game engine, such as rendering, input handling, physics, and more.
   - It is compiled as a **Dynamic Link Library (DLL)** to be used by external applications like the **Sandbox**.
   
2. **Sandbox (EXE)**:
   - The **Sandbox** project is a testing and development environment for the engine.
   - It links to the **Engine DLL** and serves as a standalone executable to test and demonstrate the capabilities of the engine.

### **Key Components**
- **Rendering**: Using **OpenGL** for cross-platform graphics rendering.
- **Window Management**: Handled by **WinAPI**, enabling control over window creation, input, and system-level interactions.
- **Input Handling**: Supports basic input devices like keyboard and mouse.
- **Game Loop**: The engine runs in a loop, managing the state of the game world and rendering frames.
- **Scene Management**: The engine handles the creation and management of 3D objects, cameras, and lighting.
- **Shader System**: Allows the use of custom shaders for rendering effects.

---

## **Engine Features**

### **1. Cross-Platform Rendering with OpenGL**
- **OpenGL** is used for rendering 3D graphics, making the engine capable of running on multiple platforms (Windows, Linux, etc.) with minimal adjustments.
- The engine supports **basic 3D rendering** (meshes, textures, lighting, and shaders), and you can extend it to handle more complex graphics techniques.

### **2. WinAPI Integration**
- **WinAPI** is used for creating and managing windows, as well as handling system-level input and interactions.
- The integration of **WinAPI** ensures low-level access to the operating system, providing better performance and flexibility for game development.

### **3. Modular and Extensible Design**
- The engine is built with a modular approach, making it easy to extend and modify.
- New features, such as advanced physics, AI, or networking, can be added by simply extending existing components.

### **4. Performance-Focused**
- Designed with performance in mind, the engine optimizes memory usage and rendering speed.
- **OpenGL** ensures that rendering is handled efficiently, and the engine’s internal systems are optimized for fast execution.

### **5. Input Management**
- The engine supports basic input handling for keyboard and mouse events.
- It can be extended to support game controllers or touch inputs for mobile applications.

---

## **Sandbox Integration**

### **How it Works**
The **Engine** is built as a **DLL**, which allows you to easily integrate it into external applications. The **Sandbox** project serves as an executable application that uses this DLL to demonstrate the engine's capabilities.

### **Why a DLL?**
- **Flexibility**: The **Engine DLL** can be reused across multiple projects, making it a versatile tool for various types of applications.
- **Modular Updates**: Updating the engine does not require recompiling the entire application. You only need to replace the DLL file.
- **Smaller Executable**: The **Sandbox EXE** remains lightweight because it doesn’t include the engine’s code directly—only references the DLL.

### **Sandbox as a Testing Ground**
- The **Sandbox** project is a testing environment where you can quickly prototype and experiment with different features of the engine.
- It can be used to test different game objects, camera setups, shaders, and input handling.
- By modifying the **Sandbox**, you can experiment with new ideas while keeping the core engine code separate.

---

## **How to Build**

### **Prerequisites**
- **Visual Studio** (recommended version: 2022 or later)
- **C++ Development Tools**
- **OpenGL** (Ensure your system has OpenGL drivers installed)
- **WinAPI** (Windows only)

### **Steps to Build the Solution**
1. Clone this repository to your local machine.
2. Open the solution file `NEXO.sln` in Visual Studio.
3. Build the **Engine** project (DLL).
4. Build the **Sandbox** project (EXE).
5. Ensure that the **Engine DLL** is located in the same directory as the **Sandbox EXE** for proper integration.

### **Running the Sandbox**
Once the build is complete:
- Run the **Sandbox EXE** to test the engine’s features and functionality.
- Modify the code in the **Sandbox** project to experiment with the engine’s capabilities.

---

## **Usage**

Once the engine is built and integrated with the Sandbox, you can start developing your own games or simulations. Here's how you can use the engine:

1. **Initialize the Engine**: Start by initializing the engine in your **Sandbox** project.
2. **Create Objects**: Use the engine's built-in functions to create 3D objects, cameras, lights, and other game components.
3. **Run the Game Loop**: The engine will manage the game loop, handling input, updates, and rendering.
4. **Extend the Engine**: You can extend the engine by adding custom components such as physics, sound, or networking.

---

## **Contributing**

We welcome contributions to improve the engine! If you’d like to contribute, follow these steps:

1. Fork the repository.
2. Create a new branch for your changes.
3. Implement your changes and test them thoroughly.
4. Submit a pull request with a description of the changes you’ve made.

---

## **License**

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## **Contact**

For any questions or feedback, feel free to open an issue in the repository or reach out to the project maintainers.

---

## **Screenshots**


*Example of 3D rendering using the engine.*

---

### **Thank You for Using Game Engine!**
We hope this engine helps you create amazing games and experiences. Enjoy coding, and feel free to share your projects with the community!

---

*This README was designed with love and care to ensure you have all the information you need to get started with Game Engine. Happy coding!*

---

This **README** provides a detailed explanation of the engine’s structure, usage, and how to get started with it. It also includes visual elements and clear sections to make it more attractive and easy to follow on GitHub.
**THIS GAME ENGINE IS BASED ON CHERNO's Hazel Engine AND DEVELOPED BY SAIDAKHMAD RIZAEV. ENGINE USES APACHE 2.0 LICENSE**