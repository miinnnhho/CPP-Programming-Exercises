#include "MonsterWorld.h"
#include <time.h>
void main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Monster("Á¶¹ÎÈ£", "¡Ø", rand() % w, rand() % h));
	game.add(new Monster("ÀÌÈñ¿õ", "¡İ", rand() % w, rand() % h));
	game.add(new Monster("ÀÌÈñ¼®", "¡Ú", rand() % w, rand() % h));
	game.add(new Monster("ÀÌÁØÈñ", "¢¾", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------°ÔÀÓ Á¾·á-------------------\n");
}