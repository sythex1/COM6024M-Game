# COM6024M — Assessment Starter Template

This is the starting point for your assessment project: a blank raylib window, no game logic. Everything you build for your solo game project starts here.

Handed out in **Week 3** as `raylib-starter.zip` on Moodle, once we've covered raylib and CMake+vcpkg in the lecture. Your repository itself should already exist from Week 1 — unzip this download and copy the two files in.

---

## Getting it into your repository

1. Open (or clone) the empty repository you created in Week 1 — it should currently just have a README.
2. Copy `CMakeLists.txt` and `main.cpp` from this folder into the **root** of your repository.
3. Open your repository folder in VS Code.
4. When prompted, select the kit **Visual Studio Build Tools 2022 Release - amd64**. If you're not prompted, open the Command Palette (`Ctrl+Shift+P`) and run **CMake: Select a Kit**.
5. Build (`F7`) and run. You should see a window with the text "It works! Start building your game here."
6. Commit and push:

    ```shell
    git add .
    git commit -m "Add raylib starter"
    git push
    ```

---

## Before you build anything else

* Rename the project (`AssessmentGame` in `CMakeLists.txt`) and the window title (`"My Game"` in `main.cpp`) to something related to your actual game — whenever you're ready, no rush.
* **Keep the `PollInputEvents()` call** in your loop, always. It prevents a real "window not responding" bug that affects some hardware.
* Remember: labs use a separate, throwaway codebase. This repository is your **assessment project** — treat it as the real thing from today onwards.

---

## If something doesn't build

* `find_package(raylib)` cannot find raylib → check `VCPKG_ROOT` is set (open a Command Prompt and run `echo %VCPKG_ROOT%`). On lab machines this should already be configured — flag a tutor if it isn't.
* No kit prompt, or no MSVC kit listed in VS Code → Command Palette → **CMake: Select a Kit**. If nothing appropriate appears, flag a tutor.
* Don't lose lab time fighting the toolchain on your own machine — this is set up to already work on lab machines, so if you're stuck, switch to a lab machine for now and sort your own machine out later with the setup guide on Moodle.
