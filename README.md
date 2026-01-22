# Programming Projects Portfolio 🚀

This repository contains several **C++ and MATLAB projects** developed as part of coursework and practice in **data structures, probability, simulations, and low-level number representation**.  
Each project demonstrates different programming concepts such as object-oriented design, dynamic memory management, probability theory, and algorithmic thinking.

---

# 1. 6/36 Lottery Simulation 🎲

## Description

This project analyzes a **6/36 lottery game** using both **theoretical probability** and **Monte Carlo simulation**. The goal is to compare exact hypergeometric probabilities with empirical results obtained from large-scale simulations, analyze special probability events, and simulate prize pool distribution.

This project was developed as part of an **EE300 probability/statistics assignment**.

## Key Features

- Simulation of up to **1,000,000 lottery tickets**
- Exact theoretical probability calculation
- Empirical probability estimation via simulation
- Comparison between empirical and theoretical results
- Additional combinatorial probability events
- Prize pool and payout simulation
- Multiple visualizations (PMF, CDF, comparisons)

## Probability Model

- Lottery type: **6 numbers chosen from 36**
- Distribution used: **Hypergeometric**
- Matches counted from **0 to 6**

## Extra Probability Events

- Probability of winning money (3 or more matches)
- Probability of a big win (5 or 6 matches)
- Probability that a ticket contains the number 7
- Probability that a ticket contains a number divisible by 3
- Probability that a ticket contains exactly one number divisible by 5

## Visual Output

- Empirical vs theoretical distributions
- PMF and CDF plots
- Extra probability event graphs
- Comparison across multiple simulation runs

---

# 2. Horse Racing Simulation 🐎

## Description

This project implements a **horse racing simulation** using an object-oriented approach in **C++**.  
Each racer consists of a horse and a jockey, with attributes such as weight, age, and race eligibility.

The simulation models:
- Aging effects
- Injury probability
- Race outcomes based on weighted probability

## Core Concepts

- Object-Oriented Programming (OOP)
- Class design and encapsulation
- Probabilistic simulation
- Randomized race outcomes

## Racer Model

Each racer includes:
- Horse name and gender
- Jockey name
- Horse and jockey weights
- Horse age
- Injury and eligibility status

## Aging Logic

- Younger horses have higher injury probability
- Prime-age horses are more stable
- Older horses are more likely to be disqualified from racing

## Racing Logic

- Horses must be healthy and allowed to race
- Winning probability is influenced by total weight
- Final outcome is randomized using probability ratios

## Demonstrated Features

- Constructors and member functions
- Random number generation
- Simulation of real-world behavior
- Basic competitive modeling

---

# 3. Binary Calculator 🧮

## Description

This project is a **binary calculator** written in **C++** that converts decimal numbers into binary and computes both **One’s complement** and **Two’s complement** representations.

The program supports multiple bit-widths and runs interactively in the terminal.

## Supported Bit Sizes

- 4-bit
- 8-bit
- 16-bit
- 32-bit
- 64-bit

## Functionality

- Decimal to binary conversion
- One’s complement computation
- Two’s complement computation
- Bit-size validation
- Range checking to ensure correct representation
- Repeated calculations until user exits

## Concepts Demonstrated

- Binary number systems
- Complement arithmetic
- Dynamic memory allocation
- Pointer usage
- Input validation and loops

---

# 4. Staque Data Structure 📚

## Description

This project implements a custom **Staque** data structure in **C++**, which combines characteristics of both a **stack** and a **queue**, using a **doubly linked list**.

Insertion and removal behavior depends on the **parity of values**.

## Data Structure Behavior

- **Even numbers** are inserted at the **front**
- **Odd numbers** are inserted at the **back**
- Removal operations support multiple strategies

## Supported Operations

- Insert elements based on parity
- Remove last added element (LIFO-style)
- Remove a specific number of elements
- Remove only even or only odd elements
- Display contents from front to back

## Memory Management

- Custom destructor
- Deep copy support
- Overloaded assignment operator
- Follows the **Rule of Three**

## Concepts Demonstrated

- Doubly linked lists
- Custom container design
- Method overloading
- Dynamic memory management
- Copy constructors and operator overloading

---

# Technologies Used 🛠️

- **C++**
- **MATLAB / GNU Octave**
- Standard libraries only (no external dependencies)

---

# Possible Future Improvements 🚀

- Generalize data structures using templates
- Improve simulation performance and scalability
- Add user interaction menus
- Export simulation results to files
- Add statistical analysis and confidence intervals

---

# Author 👤

**Luka Nergadze**

Computer Engineering  
EE300 / Data Structures / Probability & Simulation Projects
