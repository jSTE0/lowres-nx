//
// Copyright 2017 Timo Kloss
//
// This file is part of LowRes NX.
//
// LowRes NX is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// LowRes NX is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with LowRes NX.  If not, see <http://www.gnu.org/licenses/>.
//

#include "token.h"

const char *TokenStrings[] = {
    NULL,
    
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    
    // Signs
    ":",
    ",",
    ";",
    "'",
    NULL,
    
    // Operators
    "=",
    ">=",
    "<=",
    "<>",
    ">",
    "<",
    "(",
    ")",
    "+",
    "-",
    "*",
    "/",
    "\\",
    "^",
    "AND",
    "NOT",
    "OR",
    "XOR",
    "MOD",
    
    // Commands/Functions
    "ABS",
    "ASC",
    "ATN",
    "BG",
    "BIN$",
    "BUTTON",
    "CELL.A",
    "CELL.C",
    "CELL",
    "CHAR",
    "CHR$",
    "CLS",
    "CLW",
    "COLOR",
    "COPY",
    "COS",
    "DATA",
    "DIM",
    "DISPLAY.X",
    "DISPLAY.Y",
    "DISPLAY.A",
    "DISPLAY",
    "DOWN",
    "DO",
    "ELSE",
    "END",
    "EXP",
    "FILE$",
    "FILES",
    "FILL",
    "FONT",
    "FOR",
    "GAMEPAD",
    "GOSUB",
    "GOTO",
    "HEX$",
    "HIT",
    "IF",
    "INKEY$",
    "INPUT",
    "INSTR",
    "INT",
    "KEYBOARD",
    "LEFT$",
    "LEFT",
    "LENGTH",
    "LEN",
    "LET",
    "LOAD",
    "LOCATE",
    "LOG",
    "LOOP",
    "MAX",
    "MID$",
    "MIN",
    "NEXT",
    "NUMBER",
    "OFF",
    "ON",
    "PALETTE",
    "PEEK",
    "PI",
    "POKE",
    "PRINT",
    "RANDOMIZE",
    "RASTER",
    "READ",
    "REM",
    "REPEAT",
    "RESTORE",
    "RETURN",
    "RIGHT$",
    "RIGHT",
    "RND",
    "SAVE",
    "SCROLL",
    "SGN",
    "SIN",
    "SOURCE",
    "SPRITE.A",
    "SPRITE.C",
    "SPRITE.X",
    "SPRITE.Y",
    "SPRITE",
    "SQR",
    "START",
    "STEP",
    "STR$",
    "SWAP",
    "TAN",
    "TAP",
    "TEXT",
    "THEN",
    "TIMER",
    "TO",
    "TOUCH.X",
    "TOUCH.Y",
    "TOUCH",
    "TRACE",
    "UNTIL",
    "UP",
    "VAL",
    "VBL",
    "WAIT",
    "WEND",
    "WHILE",
    "WINDOW",
    
    // Reserved Keywords
    NULL,
    "ANIM",
    "BANK",
    "BAR",
    "BOX",
    "CALL",
    "CANVAS",
    "CIRCLE",
    "CLOSE",
    "DECLARE",
    "DEF",
    "EXIT",
    "FLASH",
    "FUNCTION",
    "LBOUND",
    "LINE",
    "MUSIC",
    "OPEN",
    "OUTPUT",
    "PAINT",
    "PAUSE",
    "PEN",
    "PLAY",
    "PLOT",
    "POINT",
    "ROL",
    "ROR",
    "SHARED",
    "SOUND",
    "STOP",
    "SUB",
    "TEMPO",
    "UBOUND",
    "VOICE",
    "WRITE",

    NULL
};
