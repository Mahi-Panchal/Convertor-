# ⚡ Multi-Metric CLI Unit Converter in C

<div align="center">

![C](https://img.shields.io/badge/Language-C99%20%2F%20ANSI%20C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Build](https://img.shields.io/badge/Build-Passing-brightgreen?style=for-the-badge&logo=github-actions&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Cross--Platform-lightgrey?style=for-the-badge&logo=linux&logoColor=white)
![Precision](https://img.shields.io/badge/Precision-64--bit%20Double-blueviolet?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

<p align="center">
  <strong>A high-precision, modular command-line physical quantity conversion suite engineered in pure C.</strong>
  <br />
  Designed with structured modularity, robust terminal UX, and instant multi-target metric calculations.
</p>

[Explore Features](#-key-features) •
[Quickstart](#-getting-started) •
[Conversion Matrix](#-supported-conversion-matrix) •
[Engineering Highlights](#-engineering--architectural-highlights) •
[Roadmap](#-roadmap)

---

</div>

## 📌 Executive Summary

The **Multi-Metric CLI Unit Converter** is a lightweight, zero-dependency command-line utility built in ANSI C / C99. Designed with efficiency and numerical accuracy at its core, this application performs instantaneous multi-target conversions across fundamental physical domains: **Length**, **Mass**, and **Temperature**.

Instead of isolated single-pair conversions, inputting a single metric dynamically evaluates and renders the entire family of equivalent units simultaneously with formatted 3-decimal-place double precision (`double` IEEE 754).

---

## 🚀 Key Features

- **⚡ Zero Overhead & Blazing Fast**: Compiled directly to native machine code with zero external runtime dependencies.
- **🔄 Simultaneous Multi-Target Conversion**: Enter one source value and immediately receive every corresponding derivative unit in that category.
- **🎯 64-Bit Floating-Point Accuracy**: Utilizes double-precision arithmetic (`double`, `%lf`) to prevent precision loss in scientific and micro/macro conversions.
- **🛡️ Defensive Input Validation**: Built-in state recovery loops handling invalid selections gracefully without crashing or terminating prematurely.
- **🔁 Interactive Session Management**: Dynamic loop control enabling continuous conversion workflows without restarting the process.
- **🧱 Modular Functional Decomposition**: Clean separation of concerns with distinct conversion handlers for each physical dimension.

---

## 📊 Supported Conversion Matrix

| Category | Units Supported | Derived Target Units |
| :--- | :--- | :--- |
| **📏 Length** | Kilometres (`km`), Metres (`m`), Decimetres (`dm`), Centimetres (`cm`), Millimetres (`mm`), Miles (`mi`), Feet (`ft`), Inches (`in`) | Calculates all 7 alternative length representations concurrently. |
| **⚖️ Mass** | Kilograms (`kg`), Grams (`g`), Metric Tons (`t`), Milligrams (`mg`), Quintals (`q`), Pounds (`lbs`) | Real-time multi-scale mass and weight derivations. |
| **🌡️ Temperature** | Celsius (°C), Kelvin (K), Fahrenheit (°F) | Bi-directional thermodynamic and empirical scale conversions with precise thermodynamic zero adjustments (`+273.15`). |

---

## 🏗️ Engineering & Architectural Highlights

### 1. Functional Decomposition & Modularity
The codebase is structured around single-responsibility principles in standard C:
- `design()`: Encapsulates terminal styling and dynamic banner presentation.
- `data()`: Primary entry router and dispatcher routing user intent to subsystem handlers.
- `length()`, `mass()`, `temperature()`: Dedicated domain-specific transformation engines.

```
       ┌────────────────────────┐
       │     main() Entry       │
       └───────────┬────────────┘
                   │
       ┌───────────▼────────────┐
       │   data() Dispatcher    │
       └─────┬───────────┬──────┘
             │           │
     ┌───────┴──────┐  ┌─┴─────────────┐  ┌───────────────┐
     │   length()   │  │    mass()     │  │ temperature() │
     └──────────────┘  └───────────────┘  └───────────────┘
```

### 2. High-Fidelity Conversion Constants
Calculations implement fine-tuned dimensional constants:
- Imperial/Metric length parity: `1 mile = 1.60934 km`, `1 foot = 0.3048 m`, `1 inch = 0.0254 m`
- Imperial/Metric weight parity: `1 pound = 0.453592 kg`
- Scientific standard notation for extremes: `1e+6`, `1e-5`, etc.

### 3. Memory & Resource Efficiency
- **Memory Footprint**: Stack-allocated scalar primitives only; zero dynamic memory allocations (`malloc`), eliminating memory leak vectors entirely.
- **Execution Speed**: Sub-millisecond execution with standard POSIX / C-runtime I/O.

---

## 💻 Getting Started

### Prerequisites

Ensure you have a modern C compiler installed:
- **GCC** (`gcc`) or **Clang** (`clang`) on Linux / macOS / WSL
- **MinGW** or **MSVC** (`cl`) on Windows

Verify installation:
```bash
gcc --version
```

### 🛠️ Compilation

Clone this repository and compile using standard optimization flags:

```bash
# Clone the repository
git clone https://github.com/your-username/unit-converter-c.git
cd unit-converter-c

# Compile with GCC (C99 standard, optimization, and all warnings enabled)
gcc -std=c99 -O2 -Wall "PROGRAM-UNIT CONVERTOR.c" -o unit_converter
```

### ▶️ Running the Application

**Linux / macOS:**
```bash
./unit_converter
```

**Windows (PowerShell / Command Prompt):**
```powershell
.\unit_converter.exe
```

---

## 🖥️ Terminal Demonstration

```text
****************************************************************************************************
                                       UNIT CONVERTER                                     
****************************************************************************************************
Enter 1 (length).
Enter 2 (mass).
Enter 3 (temperature).
Select the physical quantity: 1

Enter the unit of your input.
Enter 1 (kilometres).
Enter 2 (metres).
Enter 3 (decimetres).
Enter 4 (centimetres).
Enter 5 (millimetres).
Enter 6 (miles).
Enter 7 (feet).
Enter 8 (inches).
Enter your choice: 2
Enter number: 50

Length in kilometres is 0.050.
Length in decimetres is 500.000.
Length in centimetres is 5000.000.
Length in millimetres is 50000.000.
Length in miles is 0.031.
Length in feet is 164.042.
Length in inches is 1963.000.

Do you want to continue??
Enter 1 for yes and 0 for no: 0
```

---

## 📂 Repository Structure

```text
├── PROGRAM-UNIT CONVERTOR.c  # Core application source code
├── README.md                 # Project documentation and engineering overview
└── LICENSE                   # Open-source MIT License
```

---

## 📈 Roadmap & Future Enhancements

- [ ] **CLI Argument Mode**: Support one-line non-interactive CLI flags (e.g. `./unit_converter --length 50m --to km`).
- [ ] **Extended Physical Units**: Introduce Energy (Joules, Calories, kWh), Speed (km/h, mph, m/s), and Data Storage (Bytes to TB).
- [ ] **Unit Test Suite**: Implement automated testing using [Unity](https://github.com/ThrowTheSwitch/Unity) or [CUnit] for regression testing across conversion factors.
- [ ] **Interactive TUI**: Add an `ncurses`-based terminal interface for keyboard navigation and rich styling.

---

## 👨‍💻 Author

**Your Name**
- GitHub: https://github.com/Mahi-Panchal
- LinkedIn: www.linkedin.com/in/mahi-panchal-26344931a
  
---

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.
