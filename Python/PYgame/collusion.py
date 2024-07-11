import pygame
import sys

# Initialize Pygame
pygame.init()

# Constants
WIDTH, HEIGHT = 800, 600
WHITE = (255, 255, 255)
RECT_COLOR = (0, 128, 255)

# Function to calculate the volume of a rectangle
def calculate_volume(width, height, depth):
    return width * height * depth

# Create a Pygame screen
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Rectangle Collision with Gravity")

# Initialize rectangle properties
rect_width = 100
rect_height = 50
rect_depth = 30
rect_x = 50
rect_y = HEIGHT // 2 - rect_height // 2
rect_speed_x = 5
rect_speed_y = 0
gravity = 0.5
on_ground = False

# Initialize player properties
player_width = 30
player_height = 60
player_x = WIDTH // 2 - player_width // 2
player_y = HEIGHT - player_height
player_speed_x = 5

# Initialize other variables
volume = calculate_volume(rect_width, rect_height, rect_depth)
rect_rect = pygame.Rect(rect_x, rect_y, rect_width, rect_height)
player_rect = pygame.Rect(player_x, player_y, player_width, player_height)
collision = False

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    keys = pygame.key.get_pressed()

    # Apply gravity to the rectangle
    if not on_ground:
        rect_speed_y += gravity
        rect_y += rect_speed_y

    # Check for collision with the screen edges
    if rect_x < 0:
        rect_x = 0
    elif rect_x + rect_width > WIDTH:
        rect_x = WIDTH - rect_width

    # Check for collision with the ground
    if rect_y + rect_height > HEIGHT:
        rect_y = HEIGHT - rect_height
        rect_speed_y = 0
        on_ground = True
    else:
        on_ground = False

    # Update the player position
    if keys[pygame.K_LEFT]:
        player_x -= player_speed_x
    if keys[pygame.K_RIGHT]:
        player_x += player_speed_x

    # Check for collision with the volume
    if rect_rect.colliderect(volume_rect := pygame.Rect(WIDTH // 2 - volume // (rect_height * rect_depth), HEIGHT // 2 - rect_height // 2, volume // (rect_height * rect_depth), rect_height)):
        collision = True
    else:
        collision = False

    # Clear the screen
    screen.fill(WHITE)

    # Draw the rectangle
    pygame.draw.rect(screen, RECT_COLOR, rect_rect)

    # Draw the volume
    pygame.draw.rect(screen, RECT_COLOR if collision else WHITE, volume_rect)

    # Draw the player
    pygame.draw.rect(screen, (255, 0, 0), player_rect)

    # Update the display
    pygame.display.flip()
