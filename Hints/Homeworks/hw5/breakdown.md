# HW5 – Estimating π with Random Numbers
**Due Date:** 10/13/2025  
**Professor:** Strzemecki  
**Class:** CISC – Computer Science I  

---

## Problem Statement
Write a C++ program that uses the function `random(seed)` (introduced in lecture on October 6, 2025) to compute an approximation of π.

---

## Concept Breakdown

### 1. The Square
- We generate random points `(x, y)` with:
  - \(x \in [0,1]\)
  - \(y \in [0,1]\)
- This defines a **unit square** in Quadrant I.  
- Area of this square = **1**.

### 2. The Circle
- Consider a circle of radius \(r = 1\), centered at the origin.
- Restrict to Quadrant I → we get a **quarter circle** inside the unit square.
- Area of full circle:  
  \[
  \pi r^2 = \pi (1^2) = \pi
  \]
- Area of quarter circle:  
  \[
  \frac{\pi}{4}
  \]

### 3. Ratio of Areas
The fraction of the square’s area occupied by the quarter circle is:
\[
\frac{\text{Area of quarter circle}}{\text{Area of square}} = \frac{\pi/4}{1} = \frac{\pi}{4}
\]

---

## Monte Carlo Approximation

### Step 1: Random Points
Generate \(N\) random points inside the square.

### Step 2: Check Circle Condition
A point is inside the quarter circle if:
\[
\sqrt{x^2 + y^2} < 1
\]

*(This comes directly from the Pythagorean theorem, where the hypotenuse is the distance from \((x,y)\) to the origin.)*

### Step 3: Count Inside Points
- Let \(M\) = number of points inside the circle.  
- Then:
  \[
  \frac{M}{N} \approx \frac{\pi}{4}
  \]

### Step 4: Solve for π
\[
\pi \approx 4 \cdot \frac{M}{N}
\]

---

## Key Idea
By comparing the ratio of points that fall inside the circle versus the total number of points, we approximate π.  
As \(N\) increases (more random points), our estimate becomes closer to the true value of π.

---
