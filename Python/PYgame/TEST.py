import pygame
import sys
import random

# Initialize Pygame
pygame.init()

# Constants
WIDTH, HEIGHT = 800, 600
BACKGROUND_COLOR = (255, 255, 255)
RECTANGLE_WIDTH = 0  # 0 for filled rectangles

# Initialize the screen
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Drag and Draw Rectangles")

# Variables to keep track of the drawing state
drawing = False
points = []
rectangles = []

# Function to generate a random color
def random_color():
    return (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255))

# Main game loop
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

        if event.type == pygame.MOUSEBUTTONDOWN:
            if event.button == 1:  # Left mouse button
                drawing = True
                points = []
                points.append(event.pos)
                current_color = random_color()

        elif event.type == pygame.MOUSEMOTION:
            if drawing:
                current_pos = event.pos
                points.append(current_pos)

        elif event.type == pygame.MOUSEBUTTONUP:
            if drawing:
                end_pos = event.pos
                width = end_pos[0] - points[0][0]
                height = end_pos[1] - points[0][1]
                rect = pygame.Rect(points[0], (width, height))
                rectangles.append((rect, current_color))
                drawing = False

    # Draw existing rectangles
    for rect, color in rectangles:
        pygame.draw.rect(screen, color, rect, RECTANGLE_WIDTH)

    # Draw the current drawing path
    if drawing and len(points) > 1:
        pygame.draw.lines(screen, current_color, False, points, RECTANGLE_WIDTH)

    pygame.display.flip()
