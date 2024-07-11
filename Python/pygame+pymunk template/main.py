import pygame 
import pymunk


def create_apple(space,position):
    body = pymunk.Body(1,100,body_type= pymunk.Body.DYNAMIC)
    body.position = position
    shape = pymunk.Circle(body,40)
    space.add(body,shape)
    return shape

def static_ball(space,position):
    body = pymunk.Body(0,0,body_type=pymunk.Body.STATIC)
    body.position = position
    shape = pymunk.Circle(body,60)
    space.add(body,shape)
    return shape

def draw_apples(apples):
    for apple in apples:
        pos_x = int(apple.body.position.x)
        pos_y = int(apple.body.position.y)
        pygame.draw.circle(screen,(0,0,0),(pos_x,pos_y),40, width=0)

def draw_static_balls(static_balls):
    for static_ball in static_balls:
        pos_x = int(static_ball.body.position.x)
        pos_y = int(static_ball.body.position.y)
        pygame.draw.circle(screen,(255,127,127),(pos_x,pos_y),60, width=0)

pygame.init()
screen = pygame.display.set_mode((500,500))
clock = pygame.time.Clock()
space = pymunk.Space()
space.gravity = (0,5000)
apples = []
# apples.append(create_apple(space,250,0))
static_balls = []
static_balls.append(static_ball(space,(100,350)))
static_balls.append(static_ball(space,(300,250)))



running = True
while running:
    clock.tick(60)
    mouse_pos = pygame.mouse.get_pos()
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.MOUSEBUTTONDOWN:
            apples.append(create_apple(space,mouse_pos))
    screen.fill((217,217,217))
    draw_apples(apples)
    draw_static_balls(static_balls)

    space.step(1/200)
    pygame.display.update()

pygame.quit()