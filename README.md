Marks Converter Program
📘 Overview

This is a simple C program that converts a student's marks from one scale to another.
For example, if you scored 25 out of 50, and you want to know how much that would be out of 100, this program performs that conversion automatically.

🧮 How It Works

The program:

Takes three inputs from the user:

The marks obtained (a)

The total marks of the exam (b)

The desired scale you want to convert the marks into (i)
(for example, converting marks out of 30 or 50 to marks out of 100)

It calculates:

The difference between total and obtained marks (markscut)

The conversion ratio (flow)

The equivalent marks on the new scale (finalmarks)

💻 Code Explanation
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

🧠 Example

Input:

Enter your marks: 
25
Enter marks which you got out of (e.g., out of 30, 40, 50): 
50
Enter marks in which you want to get converted: 
100


Output:

Your marks are: 50

⚙️ Compilation & Execution
Using GCC
gcc marks_converter.c -o marks_converter
./marks_converter

Using Turbo C (Windows)

Open the program in Turbo C.

Compile and run using Ctrl + F9.

🧾 Notes

This program uses simple arithmetic to scale marks.

The use of <conio.h> is optional — it’s only needed if you plan to use getch() for pausing the screen (not required here).

You can extend this program to handle float inputs for more precision.
