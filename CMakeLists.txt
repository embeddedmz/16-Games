project(16_Games)

cmake_minimum_required(VERSION 3.0)

option(BUILD_TETRIS         "Build the Tetris game."                   ON)
option(BUILD_DOODLE_JUMP    "Build the Doodle Jump game."              ON)
option(BUILD_ARKANOID       "Build the Arkanoid game."                 ON)
option(BUILD_SNAKE          "Build the Snake game."                    ON)
option(BUILD_MINESWEEPER    "Build the Minesweeper game."              ON)
option(BUILD_FIFTEEN_PUZZLE "Build the Fifteen-Puzzle game."           ON)
option(BUILD_RACING         "Build the Racing (Top Down) game."        ON)
option(BUILD_OUTRUN         "Build the Outrun game."                   ON)
option(BUILD_XONIX          "Build the Xonix game."                    ON)
option(BUILD_BEJEWELED      "Build the Bejeweled game."                ON)
option(BUILD_NETWALK        "Build the NetWalk (Pipe Puzzle) game."    ON)
option(BUILD_MAHJONG        "Build the Mahjong Solitaire game."        ON)
option(BUILD_TRON           "Build the Tron game."                     ON)
option(BUILD_CHESS          "Build the Chess game."                    ON)
option(BUILD_VOLLEYBALL     "Build the Volleyball game."               ON)
option(BUILD_ASTEROIDS      "Build the Asteroids game."                ON)

if(BUILD_TETRIS)
add_subdirectory("01 Tetris")
endif(BUILD_TETRIS)

if(BUILD_DOODLE_JUMP)
add_subdirectory("02 Doodle Jump")
endif(BUILD_DOODLE_JUMP)

if(BUILD_ARKANOID)
add_subdirectory("03 Arkanoid")
endif(BUILD_ARKANOID)

if(BUILD_SNAKE)
add_subdirectory("04 Snake")
endif(BUILD_SNAKE)

if(BUILD_MINESWEEPER)
add_subdirectory("05 Minesweeper")
endif(BUILD_MINESWEEPER)

if(BUILD_FIFTEEN_PUZZLE)
add_subdirectory("06 Fifteen-Puzzle")
endif(BUILD_FIFTEEN_PUZZLE)

if(BUILD_RACING)
add_subdirectory("07 Racing (Top Down)")
endif(BUILD_RACING)

if(BUILD_OUTRUN)
add_subdirectory("08 Outrun")
endif(BUILD_OUTRUN)

if(BUILD_XONIX)
add_subdirectory("09 Xonix")
endif(BUILD_XONIX)

if(BUILD_BEJEWELED)
add_subdirectory("10 Bejeweled")
endif(BUILD_BEJEWELED)

if(BUILD_NETWALK)
add_subdirectory("11 NetWalk (Pipe Puzzle)")
endif(BUILD_NETWALK)

if(BUILD_MAHJONG)
add_subdirectory("12 Mahjong Solitaire")
endif(BUILD_MAHJONG)

if(BUILD_TRON)
add_subdirectory("13 Tron")
endif(BUILD_TRON)

if(BUILD_CHESS)
add_subdirectory("14 Chess")
endif(BUILD_CHESS)

if(BUILD_VOLLEYBALL)
add_subdirectory("15 Volleyball")
endif(BUILD_VOLLEYBALL)

if(BUILD_ASTEROIDS)
add_subdirectory("16 Asteroids")
endif(BUILD_ASTEROIDS)
