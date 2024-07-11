@echo off
setlocal enabledelayedexpansion

REM Prompt for project name
set /p projectName=Enter project name: 

REM Create the project folder
mkdir "%projectName%"
cd "%projectName%"

REM Create main.py file with Pygame template
echo import pygame >> main.py
echo pygame.init() >> main.py
echo. >> main.py
echo # Set up display >> main.py
echo width = 800 >> main.py
echo height = 600 >> main.py
echo screen = pygame.display.set_mode((width, height)) >> main.py
echo pygame.display.set_caption("!projectName! Pygame Template") >> main.py
echo. >> main.py
echo # Main game loop >> main.py
echo running = True >> main.py
echo while running: >> main.py
echo     for event in pygame.event.get(): >> main.py
echo         if event.type == pygame.QUIT: >> main.py
echo             running = False >> main.py
echo. >> main.py
echo     # Update game logic here >> main.py
echo. >> main.py
echo     # Draw graphics here >> main.py
echo. >> main.py
echo     pygame.display.flip() >> main.py
echo. >> main.py
echo pygame.quit() >> main.py

echo Pygame project "%projectName%" created successfully!
