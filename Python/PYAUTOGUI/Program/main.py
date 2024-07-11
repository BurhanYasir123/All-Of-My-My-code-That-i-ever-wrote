import pyautogui
import os


entery_confirmation = pyautogui.confirm(text='Would you like to enter the program',title='program',buttons=['Yes','No'])


def StartProgram():
    Running = True
    while Running:
        command = input(f'<{os.getcwd()}>>')
        if command == 'exit':
            Running = False
            print('Closing')
            continue
        if command == '':
            continue
        #Now commands have to have an :(aka column) to run even if they dont require arguments
        command,args = command.split(':')
        if command == 'move_offset':
            args = args.split(',')
            pyautogui.move(int(args[0]),int(args[1]),1)
        if command == 'screenshot':
            pyautogui.screenshot(args)


if entery_confirmation == 'Yes':
    pyautogui.alert(text='Ok, Entering the program now',title='Program',button='Go to the Program')
    StartProgram()
if entery_confirmation == 'No':
    pyautogui.alert(text='Ok, Closing the program now',title='Program',button='GoodBye')