import pyautogui
import time

x, y = pyautogui.locateCenterOnScreen('icon.png')

pyautogui.click(x,y)

time.sleep(2)

images = ['9','+','3','=']

for image in images:
    x, y = pyautogui.locateCenterOnScreen(f'{image}.png')

    pyautogui.click(x,y)

    time.sleep(1)


