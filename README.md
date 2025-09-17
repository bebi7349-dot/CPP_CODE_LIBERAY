# 👋 Hi, I'm Bebi!  

🎓 I’m a **second-year student** passionate about **C++**, **Object-Oriented Programming**, and exploring new technologies.  
💻 This repository is my **complete roadmap for C++ and OOP** with examples, notes, and exercises.  

---

## 🌐 Connect with Me
<p align="left">
  <a href="https://github.com/yourusername" target="_blank"><img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white"/></a>
  <a href="https://www.linkedin.com/in/yourprofile" target="_blank"><img src="https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white"/></a>
  <a href="https://twitter.com/yourhandle" target="_blank"><img src="https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white"/></a>
  <a href="mailto:youremail@example.com"><img src="https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white"/></a>
</p>

---

## 🏅 GitHub Profile Badges
<p align="center">
  <img src="https://img.shields.io/github/followers/yourusername?label=Followers&style=social" />
  <img src="https://img.shields.io/github/stars/yourusername?affiliations=OWNER%2CCOLLABORATOR&style=social" />
  <img src="https://komarev.com/ghpvc/?username=yourusername&label=Profile+Views&color=blueviolet&style=flat" />
  <img src="https://img.shields.io/github/repos/yourusername?color=yellow&label=Public%20Repos" />
</p>

---

## ⚡ Languages & Tools
<p>
  <img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"/>
  <img src="https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white"/>
  <img src="https://img.shields.io/badge/Java-007396?style=for-the-badge&logo=java&logoColor=white"/>
  <img src="https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white"/>
  <img src="https://img.shields.io/badge/VSCode-007ACC?style=for-the-badge&logo=visualstudiocode&logoColor=white"/>
</p>

---

## 📊 GitHub Stats
<p align="center">
  <img src="https://github-readme-stats.vercel.app/api?username=yourusername&show_icons=true&theme=tokyonight" alt="Bebi's GitHub stats"/>
  <br/>
  <img src="https://github-readme-streak-stats.herokuapp.com/?user=yourusername&theme=tokyonight" alt="GitHub Streak"/>
</p>

---

## 📈 GitHub Activity Graph
<p align="center">
  <img src="https://github-readme-activity-graph.vercel.app/graph?username=yourusername&theme=tokyo-night" alt="Bebi's GitHub Activity Graph"/>
</p>

---

## 📌 Pinned Projects
<p align="center">
  <a href="https://github.com/yourusername/yourproject1">
    <img src="https://github-readme-stats.vercel.app/api/pin/?username=yourusername&repo=yourproject1&theme=tokyonight" />
  </a>
  <a href="https://github.com/yourusername/yourproject2">
    <img src="https://github-readme-stats.vercel.app/api/pin/?username=yourusername&repo=yourproject2&theme=tokyonight" />
  </a>
</p>

---

# 📘 Introduction to C++ and Object-Oriented Programming (OOP)

## 🔹 What is C++?
C++ is a **powerful, general-purpose programming language** developed by *Bjarne Stroustrup* in 1979.  
It extends C with **object-oriented features, templates, and modern libraries**.  

✅ Features: Multi-paradigm, fast, STL, cross-platform, modern (C++23).  
⚡ Uses: Game dev 🎮, OS 🖥, compilers ⚙️, finance 💹, AI 🤖.  

---

## 🔹 What is OOP?
OOP = **Object-Oriented Programming**, a paradigm based on *objects*.  

✨ 4 Pillars:  
1. **Encapsulation** → Binding data + functions  
2. **Abstraction** → Hiding details, showing essentials  
3. **Inheritance** → Reusing code  
4. **Polymorphism** → Many forms (overloading, virtuals)  

---

# 📚 Complete C++ Roadmap — All Topics

<details>
<summary>🟢 Basics of C++</summary>

- Structure of a C++ Program  
- Input/Output  
- Data Types & Variables  
- Operators  
</details>

<details>
<summary>🟠 Control Flow</summary>

- If-else, switch  
- Loops  
- Jump Statements  
</details>

<details>
<summary>🔵 Functions</summary>

- By value / reference  
- Default args  
- Overloading  
- Recursion  
</details>

<details>
<summary>🟣 Arrays, Strings & Pointers</summary>

- 1D/2D Arrays  
- Strings & C-strings  
- Pointers  
- Dynamic Memory  
</details>

<details>
<summary>🟤 OOP Concepts</summary>

- Classes & Objects  
- Constructors/Destructors  
- Encapsulation  
- Inheritance  
- Polymorphism  
- Abstraction  
- Friend Functions  
</details>

<details>
<summary>🔴 Advanced OOP</summary>

- Operator Overloading  
- Virtual Destructors  
- Copy/Move Constructor  
- Interfaces  
- Design Patterns  
</details>

<details>
<summary>🧠 Memory Management</summary>

- `new` / `delete`  
- Smart Pointers  
- RAII  
</details>

<details>
<summary>📦 Templates & STL</summary>

- Function/Class Templates  
- Specialization  
- STL Containers  
- Algorithms  
- Iterators  
</details>

<details>
<summary>⚡ Exception Handling</summary>

- `try-catch-throw`  
- Standard Exceptions  
- Custom Exceptions  
</details>

<details>
<summary>📝 File Handling</summary>

- Text & Binary Files  
- File Streams  
</details>

<details>
<summary>🛠 Modern C++ Features (11 → 23)</summary>

- Lambda, auto, nullptr  
- Move Semantics  
- Smart Pointers  
- Concepts, Ranges  
- Coroutines  
</details>

<details>
<summary>🏗 Advanced Topics</summary>

- Multithreading  
- Networking  
- GUI (Qt, SFML)  
- Game Development  
- Embedded C++  
</details>

---

## 💻 Example Code Snippets

```cpp
class Animal {
public:
    virtual void speak() const = 0;
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof!\n";
    }
};
