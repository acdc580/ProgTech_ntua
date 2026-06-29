# Worksheet 1: C++ OOP Basics

Solutions for the NTUA Object-Oriented Programming Worksheet 1, covering basic class structures, operator overloading, and data structures.

## Exercises

* **1. Babyratio (`/babyratio`):** A foundational rational number class. Features automatic GCD simplification, sign standardization, and basic arithmetic methods (`add`, `sub`, `mul`, `div`).
* **2. Fullratio (`/fullratio`):** Upgrades the rational class using **operator overloading** (`+`, `-`, `*`, `/`, `<<`) and `friend` functions for natural mathematical syntax.
* **3. Stackdemo (`/stackdemo`):** *(Pending)* Implementation of a standard stack data structure.

## Compilation & Execution

This project uses a unified `Makefile` in the root directory. Run the following commands from the `worksheet-1` folder:

**Build and Run:**
``make run_baby``  && `./run_baby`    # Babyratio
``make run_full``  && `./run_full`    # Fullratio
``make run_stack`` && `./run_stack`   # Stackdemo

**Cleanup:**
make clean                      # Remove all compiled object files