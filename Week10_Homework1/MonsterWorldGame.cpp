#include "MonsterWorld.h"
#include "VariousMonsters.h"
#include <time.h>

void main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Zombie("Á¶¹ÎÈ£", "¡İ", rand() % w, rand() % h));
	game.add(new Vampire("¹Ú¹ÎÀç", "¡Ú", rand() % w, rand() % h));
	game.add(new KGhost("ÀÌÈñ¿õ", "¢¾", rand() % w, rand() % h));
	game.add(new Jiangshi("ÀÌÈñ¼®", "¡ê", rand() % w, rand() % h, true));
	game.add(new Jiangshi("ÀÌ¸íÁØ", "¢Õ", rand() % w, rand() % h, false));
	game.play(500, 10);
	printf("------°ÔÀÓ Á¾·á-------------------\n");
}

