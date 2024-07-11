import cv2
import pyautogui
import time

img = []
res = [1366,768]

for i in range(300):
    pyautogui.screenshot(f'img_sequence\{i}.png')
    img.append(f'img_sequence\{i}.png')

video = cv2.VideoWriter('video.mp4',cv2.VideoWriter_fourcc(*'mp4v'),30,res)

for i in img:
    video.write(cv2.imread(i))



