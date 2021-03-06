#include <ncurses.h>
#include <string.h>
#include "cobra.h"

 /*Inicialia ncurses*/
void init_curses();

/*Fim de jogo*/
void gameOver(Snake *snake, int score);

/*Encerra ncurses*/
void close();

/*Desenha parte da cobra, recebe uma parte da cobra que contem sua posição salva
line e col sao demonstrativas*/
void drawSnakePart(int line, int col);

/*Desenha o campo*/
void draw_field();

/*Atualiza o campo*/
void refreshField();

/*Limpa completamente o campo*/
void clearField();

/*Jogo (lê comandos e move a cobra)*/
void playGame ();

void moveSnake(Snake *snake, int key);

void moveFood (Food *food);

/*retorna nome do novo jogador*/
void getName();

void scoreWindow();

void updateScore(int score);
