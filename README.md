# Library-management-system-using-C++

Here's a well-structured `README.md` content for your **Library Management System in C++** project:

---

# 📚 Library Management System (C++ Project)

## 🔖 Overview

This **Library Management System** is a console-based C++ application designed to handle basic library operations like adding users, issuing books, returning them, editing details, and displaying available inventory. It also manages book quantities and borrowing durations for individual users using a linked list structure.

---

## 💡 Features

* ✅ New user registration with unique ID and password
* 📋 View and edit personal details (secured with password)
* 📚 View available book inventory
* 📥 Borrow books and set duration of issue
* 📤 Return previously issued books with quantity check
* 📈 View borrowed books and durations
* 🔐 Password-protected access for each user
* 🌐 One-click access to Google (for demonstration)

---

## 📦 Books Available

* C++
* C
* DMS (Discrete Mathematics)
* CGR (Computer Graphics)
* Java

Each book starts with 5 copies available and is updated in real-time based on borrowing and returning.

---

## 🛠 Technologies Used

* Language: **C++**
* Concepts:

  * Classes and Inheritance
  * Static Variables
  * Linked Lists
  * Console I/O
  * File Operations *(can be added later for persistence)*
  * System commands (`system("cls")`, `system("start www.google.com")`)

---

## 📂 Project Structure

* **entry class**: Handles user details and password
* **book class**: Inherits `entry`, manages book borrowing/returning logic
* **Linked List (struct node)**: Dynamically stores user records
* **Main Menu**: Console-based interface for performing operations

---

## ⚙️ How to Run

1. Open any C++ compiler (like Turbo C++, Code::Blocks, or g++)
2. Copy the code into a `.cpp` file
3. Compile and run the program
4. Use the menu options to interact with the system

---

## 📌 Sample Flow

1. Register as a new user (`New Entry`)
2. Login using your ID and password to:

   * View or Edit your data
   * Borrow available books
   * Return previously borrowed books

---

## 📈 Future Enhancements

* Add file handling to store user data persistently
* Introduce fines for late book returns
* Add admin module to manage inventory and user accounts
* Switch to GUI-based system (using C++ GUI libs or web frontend)

---

## 👨‍💻 Developed By

**Samarth Joshi**



