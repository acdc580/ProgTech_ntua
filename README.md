# Object Oriended Programming **C++**     

## 1st Worksheet

### Rational Numbers (Babyratio)

This project is a robust C++ implementation of a mathematical rational number class (`rational`). It allows for the creation, manipulation, and mathematical calculation of fractions safely and efficiently.

##### Core Features

* **Basic Arithmetic:** Full support for addition, subtraction, multiplication, and division without altering the original objects (returns new objects).

* **Automatic Simplification:** Utilizes the highly optimized Euclidean Algorithm to find the Greatest Common Divisor (GCD) and simplifies fractions instantly upon creation.

* **Safety Guardrails:** Catches zero-denominator inputs and safely defaults them to prevent `Floating point exception (core dumped)` errors.

* **Sign Standardization:** Automatically shifts negative signs from the denominator to the numerator (e.g., `1/-2` becomes `-1/2`) to ensure arithmetic logic remains flawless.

##### Operation Examples

Here is a quick matrix showing how the class handles various mathematical operations seamlessly:

| Fraction A | Fraction B | Operation | Code Syntax | Result |
| :---: | :---: | :---: | :--- | :---: |
| `1/2` | `1/3` | Addition | `a.add(b)` | **`5/6`** |
| `1/2` | `1/3` | Subtraction | `a.sub(b)` | **`1/6`** |
| `1/2` | `1/3` | Multiplication | `a.mul(b)` | **`1/6`** |
| `1/2` | `1/3` | Division | `a.div(b)` | **`3/2`** |
| `4/8` | *N/A* | Simplification | `rational a(4, 8)`| **`1/2`** |
| `3/-4` | *N/A* | Sign Correction | `rational a(3, -4)`| **`-3/4`** |

##### File Structure

* `babyratio.hpp`: The class declaration and method prototypes provided by the instructor.

* `babyratio.cpp`: The core logic and implementation of the class methods, including the robust constructor.

* `babyratiotest.cpp`: An interactive terminal program allowing users to input fractions and test the mathematical operations.

* `Makefile`: Automates the linking and compilation process.

### How to Compile and Run

This project includes a `Makefile` to make compilation effortless. Open your terminal in the root project directory and run the following commands:

**1. Compile the program:**
make run_baby

**2. Run the program:**
./run_baby

**3. Clean Unnecessary files:**
make clean