import pygame


WIDTH = 600
HEIGHT = 600
FPS = 60
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)

# Pygame Initialization
pygame.init()
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Game")
clock = pygame.time.Clock()


# Initial Variables
Block_count = 3
Block_size = WIDTH/Block_count

# Player Variables
x = Block_size/2
y = Block_size/2
Block_x = 0
Block_y = 0

# Game loop
running = True
while running:
    clock.tick(FPS)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT:
                x = x + Block_size
                Block_x = Block_x + 1
                if Block_x == Block_count:
                    x = x - Block_size
                    Block_x = Block_x - 1
            if event.key == pygame.K_LEFT:
                x = x - Block_size
                Block_x = Block_x - 1
                if Block_x == -1:
                    x = x + Block_size
                    Block_x = Block_x + 1
            if event.key == pygame.K_UP:
                y = y - Block_size
                Block_y = Block_y - 1
                if Block_y == -1:
                    y = y + Block_size
                    Block_y = Block_y + 1
            if event.key == pygame.K_DOWN:
                y = y + Block_size
                Block_y = Block_y + 1
                if Block_y == Block_count:
                    y = y - Block_size
                    Block_y = Block_y - 1

    # Screen Filling
    screen.fill(WHITE)
    
    # Grid
    for i in range(Block_count):
        pygame.draw.line(screen,BLACK,(Block_size*(i+1),0),(Block_size*(i+1),Block_size*Block_count), width=1)
        pygame.draw.line(screen,BLACK,(0,Block_size*(i+1)),(Block_size*Block_count,Block_size*(i+1)), width=1)

    # Player
    pygame.draw.circle(screen, BLACK, (x,y),Block_size/3)

    # Fliping Screen
    pygame.display.flip()       

pygame.quit()