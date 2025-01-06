/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    ID = 259,                      /* ID  */
    PLUS = 260,                    /* PLUS  */
    MUL = 261,                     /* MUL  */
    DIV = 262,                     /* DIV  */
    MOD = 263,                     /* MOD  */
    ASGN = 264,                    /* ASGN  */
    READ = 265,                    /* READ  */
    WRITE = 266,                   /* WRITE  */
    MINUS = 267,                   /* MINUS  */
    NEWLINE = 268,                 /* NEWLINE  */
    LT = 269,                      /* LT  */
    GT = 270,                      /* GT  */
    DEQ = 271,                     /* DEQ  */
    NEQ = 272,                     /* NEQ  */
    ELSE = 273,                    /* ELSE  */
    IF = 274,                      /* IF  */
    THEN = 275,                    /* THEN  */
    ENDIF = 276,                   /* ENDIF  */
    ENDWHILE = 277,                /* ENDWHILE  */
    WHILE = 278,                   /* WHILE  */
    DO = 279,                      /* DO  */
    START = 280,                   /* START  */
    END = 281,                     /* END  */
    DECL = 282,                    /* DECL  */
    ENDDECL = 283,                 /* ENDDECL  */
    INT = 284,                     /* INT  */
    STR = 285,                     /* STR  */
    LE = 286,                      /* LE  */
    GE = 287,                      /* GE  */
    NOT = 288,                     /* NOT  */
    AND = 289,                     /* AND  */
    OR = 290,                      /* OR  */
    MAIN = 291,                    /* MAIN  */
    RETURN = 292,                  /* RETURN  */
    ALLOC = 293,                   /* ALLOC  */
    FREE = 294,                    /* FREE  */
    INIT = 295,                    /* INIT  */
    BRK = 296,                     /* BRK  */
    CONTINUE = 297,                /* CONTINUE  */
    BRKP = 298,                    /* BRKP  */
    TYPE = 299,                    /* TYPE  */
    ENDTYPE = 300,                 /* ENDTYPE  */
    NILL = 301,                    /* NILL  */
    DEQNILL = 302,                 /* DEQNILL  */
    NEQNILL = 303,                 /* NEQNILL  */
    STRVAL = 304,                  /* STRVAL  */
    EXPOSCALL = 305                /* EXPOSCALL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define ID 259
#define PLUS 260
#define MUL 261
#define DIV 262
#define MOD 263
#define ASGN 264
#define READ 265
#define WRITE 266
#define MINUS 267
#define NEWLINE 268
#define LT 269
#define GT 270
#define DEQ 271
#define NEQ 272
#define ELSE 273
#define IF 274
#define THEN 275
#define ENDIF 276
#define ENDWHILE 277
#define WHILE 278
#define DO 279
#define START 280
#define END 281
#define DECL 282
#define ENDDECL 283
#define INT 284
#define STR 285
#define LE 286
#define GE 287
#define NOT 288
#define AND 289
#define OR 290
#define MAIN 291
#define RETURN 292
#define ALLOC 293
#define FREE 294
#define INIT 295
#define BRK 296
#define CONTINUE 297
#define BRKP 298
#define TYPE 299
#define ENDTYPE 300
#define NILL 301
#define DEQNILL 302
#define NEQNILL 303
#define STRVAL 304
#define EXPOSCALL 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "abstree.y"

    struct ASTNode *nptr;

#line 171 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
