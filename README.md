# My_Sokoban

[![forthebadge](http://forthebadge.com/images/badges/built-with-love.svg)](https://github.com/Gaetandrt)  [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://fr.wikipedia.org/wiki/C_(langage))  [![linkedin-](https://user-images.githubusercontent.com/91087072/175767199-5ecadc72-20a2-42dc-a24f-3a601bba5ddb.svg)](https://www.linkedin.com/in/gaetan-darrort/)

Tetris, jeu de puzzle

## Qu'est que le tetris ?

Tetris est un jeu vidéo de puzzle conçu par Alekseï Pajitnov [Alekseï Pajitnov](https://fr.wikipedia.org/wiki/Alekse%C3%AF_Pajitnov) à partir de juin 1984 sur [Elektronika 60](https://fr.wikipedia.org/wiki/Elektronika_60).

Tetris met le joueur au défi de réaliser des lignes complètes en déplaçant des pièces de formes différentes, les tétrominos, qui défilent depuis le haut jusqu'au bas de l'écran.

Les lignes complétées disparaissent tout en rapportant des points et le joueur peut de nouveau remplir les cases libérées. Le jeu n'a pas de fin : le joueur perd la partie lorsqu'un tétromino reste bloqué en haut.

### Compétences travaillées

- Renforcement des connaissances de la libC Ncurses
- Gestion des hitbox et des déplacements
- Gestion de flag, tableau de structure

### Installation

Pour lancer le jeu, il vous faudra

Un dossier qui devra contenir les tetriminos ( il y'a un exemple dans le répertoire `tetriminos` )

[![tetris_dir](https://user-images.githubusercontent.com/91087072/175769386-e876df55-1d70-4b9b-85d5-837024a98d7a.png)](https://github.com/Gaetandrt/Tetris/tree/main/tetriminos)

[![tetris_exemple](https://user-images.githubusercontent.com/91087072/175769389-f93a6c86-2aba-44e0-aaad-86e13aa0ad3d.png)](https://github.com/Gaetandrt/Tetris/tree/main/tetriminos)


Lancer ensuite le binaire comme ceci :

[![tetris_command](https://user-images.githubusercontent.com/91087072/175768994-0c1c2351-10d0-422c-9ea2-5fff0e8af8c8.png)](https://user-images.githubusercontent.com/91087072/175768994-0c1c2351-10d0-422c-9ea2-5fff0e8af8c8.png)

Grace au flag -D, vous pouvez avoir accès au `debug` mode :

[![tetris_debug](https://user-images.githubusercontent.com/91087072/175768996-86b7552f-6c23-40d4-8f12-a5177e37cda6.png)](https://user-images.githubusercontent.com/91087072/175768996-86b7552f-6c23-40d4-8f12-a5177e37cda6.png)

## Fabriqué avec

* [Visual Studio Code](https://code.visualstudio.com/) - Environnement de développement
* [C](https://fr.wikipedia.org/wiki/C_(langage)) - Langage de programmation
* [Ncurses](https://invisible-island.net/ncurses/man/ncurses.3x.html) - Librairie pour le language C
