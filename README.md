<!-- PROJECT LOGO -->
<p align="center">
  <img src="https://img.icons8.com/color/96/c-programming.png" width="90" alt="C Language Logo">
</p>

<h1 align="center">📘 Marks Converter Program</h1>

<p align="center">
  <i>A simple yet powerful C program to convert marks from one scale to another — quickly and accurately.</i>
</p>

<p align="center">
  <a href="#"><img src="https://img.shields.io/badge/Language-C-blue?logo=c&logoColor=white" alt="C Badge"></a>
  <a href="#"><img src="https://img.shields.io/badge/Compiler-GCC-green?logo=gnu&logoColor=white" alt="GCC Badge"></a>
  <a href="#"><img src="https://img.shields.io/badge/Platform-Cross--Platform-orange" alt="Platform Badge"></a>
  <a href="#"><img src="https://img.shields.io/badge/License-MIT-lightgrey" alt="License Badge"></a>
</p>

---

## 🧠 Overview

**Marks Converter Program** is a simple **C language utility** that converts a student's marks from one scale to another.  
For example, if you score `25` out of `50` and want to know your equivalent marks **out of 100**, this program does the conversion automatically!

It’s a neat mini project demonstrating:
- Input/output handling in C
- Arithmetic operations
- Basic use of variables and data types
- Ratio-based scaling

---

## 🧮 How It Works

The program performs the following steps:

1️⃣ **Takes three inputs**:
   - Marks obtained → `a`  
   - Total marks of the exam → `b`  
   - Target scale (the scale you want to convert to) → `i`

2️⃣ **Calculates**:
   - Marks cut off → `markscut = b - a`  
   - Conversion ratio → `flow = (float)b / i`  
   - Equivalent marks → `finalmarks = i - (markscut / flow)`

3️⃣ **Outputs** your marks on the new scale.

---

## 💻 Code Example

```c
#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, i, c, markscut, finalmarks;
    float flow;

    printf("Enter your marks: \n");
    scanf("%d", &a);

    printf("Enter marks which you got out of (e.g., out of 30, 40, 50): ");
    scanf("%d", &b);

    printf("Enter marks in which you want to get converted: \n");
    scanf("%d", &i);

    markscut = b - a;
    flow = (float)b / i;
    c = markscut / flow;
    finalmarks = i - c;

    printf("Your marks are: %d", finalmarks);
    return 0;
}
🧠 Example Execution
Input:

plaintext
Copy code
Enter your marks: 25
Enter marks which you got out of (e.g., out of 30, 40, 50): 50
Enter marks in which you want to get converted: 100
Output:

plaintext
Copy code
Your marks are: 50
✅ In this example, 25/50 converts proportionally to 50/100.

⚙️ Compilation & Execution
🧰 Using GCC (Linux/Mac/Windows)
bash
Copy code
gcc marks_converter.c -o marks_converter
./marks_converter
🧮 Using Turbo C (Windows)
Open the program in Turbo C.

Compile using Alt + F9

Run using Ctrl + F9

👨‍💻 Author

Developed by:
🧑‍💻 Shivaditya
🎓 B.Tech CSE (AIML), SRM Institute of Science & Technology, NCR Campus
📧 shivaditya2005@gmail.com

🔗 GitHub Profile

🪪 License

This project is licensed under the MIT License — free to use, modify, and distribute with credit.

```
<p align="center"> <img src="https://img.icons8.com/color/96/c-programming.png" width="70" alt="C Logo"> </p> <h3 align="center">"Scaling your marks, one formula at a time."</h3> <p align="center"> <a href="https://github.com/SHIVADITYA2005/Marks-Converter-Program"> <img src="https://img.shields.io/github/stars/SHIVADITYA2005/Marks-Converter-Program?style=social" alt="GitHub stars"> </a> <a href="https://github.com/SHIVADITYA2005/Marks-Converter-Program/fork"> <img src="https://img.shields.io/github/forks/SHIVADITYA2005/Marks-Converter-Program?style=social" alt="GitHub forks"> </a> </p> ```
