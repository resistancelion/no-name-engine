
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yylval          zendlval
#define yychar          zendchar
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Zend/zend_language_parser.y"

/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2016 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   |          Nikita Popov <nikic@php.net>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE zend_parser_stack_elem

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif



/* Line 189 of yacc.c  */
#line 127 "Zend/zend_language_parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 49 "Zend/zend_language_parser.y"




/* Line 209 of yacc.c  */
#line 156 "Zend/zend_language_parser.c"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_YIELD = 267,
     T_DOUBLE_ARROW = 268,
     T_YIELD_FROM = 269,
     T_POW_EQUAL = 270,
     T_SR_EQUAL = 271,
     T_SL_EQUAL = 272,
     T_XOR_EQUAL = 273,
     T_OR_EQUAL = 274,
     T_AND_EQUAL = 275,
     T_MOD_EQUAL = 276,
     T_CONCAT_EQUAL = 277,
     T_DIV_EQUAL = 278,
     T_MUL_EQUAL = 279,
     T_MINUS_EQUAL = 280,
     T_PLUS_EQUAL = 281,
     T_COALESCE = 282,
     T_BOOLEAN_OR = 283,
     T_BOOLEAN_AND = 284,
     T_SPACESHIP = 285,
     T_IS_NOT_IDENTICAL = 286,
     T_IS_IDENTICAL = 287,
     T_IS_NOT_EQUAL = 288,
     T_IS_EQUAL = 289,
     T_IS_GREATER_OR_EQUAL = 290,
     T_IS_SMALLER_OR_EQUAL = 291,
     T_SR = 292,
     T_SL = 293,
     T_INSTANCEOF = 294,
     T_UNSET_CAST = 295,
     T_BOOL_CAST = 296,
     T_OBJECT_CAST = 297,
     T_ARRAY_CAST = 298,
     T_STRING_CAST = 299,
     T_DOUBLE_CAST = 300,
     T_INT_CAST = 301,
     T_DEC = 302,
     T_INC = 303,
     T_POW = 304,
     T_CLONE = 305,
     T_NEW = 306,
     T_NOELSE = 307,
     T_ELSEIF = 308,
     T_ELSE = 309,
     T_ENDIF = 310,
     T_PUBLIC = 311,
     T_PROTECTED = 312,
     T_PRIVATE = 313,
     T_FINAL = 314,
     T_ABSTRACT = 315,
     T_STATIC = 316,
     T_LNUMBER = 317,
     T_DNUMBER = 318,
     T_STRING = 319,
     T_VARIABLE = 320,
     T_INLINE_HTML = 321,
     T_ENCAPSED_AND_WHITESPACE = 322,
     T_CONSTANT_ENCAPSED_STRING = 323,
     T_STRING_VARNAME = 324,
     T_NUM_STRING = 325,
     T_EXIT = 326,
     T_IF = 327,
     T_ECHO = 328,
     T_DO = 329,
     T_WHILE = 330,
     T_ENDWHILE = 331,
     T_FOR = 332,
     T_ENDFOR = 333,
     T_FOREACH = 334,
     T_ENDFOREACH = 335,
     T_DECLARE = 336,
     T_ENDDECLARE = 337,
     T_AS = 338,
     T_SWITCH = 339,
     T_ENDSWITCH = 340,
     T_CASE = 341,
     T_DEFAULT = 342,
     T_BREAK = 343,
     T_CONTINUE = 344,
     T_GOTO = 345,
     T_FUNCTION = 346,
     T_CONST = 347,
     T_RETURN = 348,
     T_TRY = 349,
     T_CATCH = 350,
     T_FINALLY = 351,
     T_THROW = 352,
     T_USE = 353,
     T_INSTEADOF = 354,
     T_GLOBAL = 355,
     T_VAR = 356,
     T_UNSET = 357,
     T_ISSET = 358,
     T_EMPTY = 359,
     T_HALT_COMPILER = 360,
     T_CLASS = 361,
     T_TRAIT = 362,
     T_INTERFACE = 363,
     T_EXTENDS = 364,
     T_IMPLEMENTS = 365,
     T_OBJECT_OPERATOR = 366,
     T_LIST = 367,
     T_ARRAY = 368,
     T_CALLABLE = 369,
     T_LINE = 370,
     T_FILE = 371,
     T_DIR = 372,
     T_CLASS_C = 373,
     T_TRAIT_C = 374,
     T_METHOD_C = 375,
     T_FUNC_C = 376,
     T_COMMENT = 377,
     T_DOC_COMMENT = 378,
     T_OPEN_TAG = 379,
     T_OPEN_TAG_WITH_ECHO = 380,
     T_CLOSE_TAG = 381,
     T_WHITESPACE = 382,
     T_START_HEREDOC = 383,
     T_END_HEREDOC = 384,
     T_DOLLAR_OPEN_CURLY_BRACES = 385,
     T_CURLY_OPEN = 386,
     T_PAAMAYIM_NEKUDOTAYIM = 387,
     T_NAMESPACE = 388,
     T_NS_C = 389,
     T_NS_SEPARATOR = 390,
     T_ELLIPSIS = 391,
     T_ERROR = 392
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 316 "Zend/zend_language_parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  495
/* YYNRULES -- Number of states.  */
#define YYNSTATES  939

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,   164,     2,   165,    53,    36,     2,
     157,   158,    51,    48,     8,    49,    50,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,   159,
      42,    16,    43,    29,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,   162,    35,     2,   163,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   160,    34,   161,    56,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     9,    10,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    31,    32,    33,    37,    38,    39,    40,    41,
      44,    45,    46,    47,    55,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   147,   149,   151,   153,   155,   157,
     160,   161,   163,   167,   169,   173,   176,   178,   180,   182,
     184,   186,   191,   195,   196,   203,   204,   210,   214,   219,
     223,   228,   232,   234,   236,   242,   249,   255,   262,   266,
     268,   272,   274,   278,   280,   282,   285,   287,   291,   293,
     296,   300,   302,   305,   306,   308,   310,   312,   314,   316,
     321,   325,   327,   329,   335,   343,   353,   359,   363,   367,
     371,   375,   379,   383,   385,   388,   394,   402,   412,   413,
     420,   422,   429,   433,   437,   440,   441,   451,   453,   457,
     458,   463,   465,   469,   471,   485,   486,   488,   489,   491,
     492,   503,   504,   514,   516,   519,   521,   523,   524,   532,
     533,   542,   543,   546,   547,   550,   551,   554,   556,   559,
     564,   568,   570,   575,   577,   582,   584,   589,   593,   598,
     603,   609,   610,   616,   621,   623,   625,   627,   632,   638,
     645,   647,   651,   658,   666,   670,   677,   679,   680,   682,
     686,   691,   698,   699,   701,   703,   706,   708,   710,   712,
     713,   716,   719,   723,   725,   729,   731,   734,   738,   740,
     742,   746,   748,   750,   754,   757,   758,   762,   767,   771,
     784,   786,   790,   792,   795,   799,   801,   804,   807,   810,
     814,   818,   822,   827,   831,   833,   835,   839,   841,   845,
     847,   849,   850,   852,   854,   857,   859,   861,   863,   865,
     867,   869,   873,   875,   878,   883,   887,   889,   894,   899,
     903,   905,   907,   908,   910,   914,   916,   917,   927,   931,
     934,   941,   947,   951,   956,   959,   963,   967,   971,   975,
     979,   983,   987,   991,   995,   999,  1003,  1007,  1010,  1013,
    1016,  1019,  1023,  1027,  1031,  1035,  1039,  1043,  1047,  1051,
    1055,  1059,  1063,  1067,  1071,  1075,  1079,  1083,  1087,  1090,
    1093,  1096,  1099,  1103,  1107,  1111,  1115,  1119,  1123,  1127,
    1131,  1135,  1139,  1143,  1145,  1151,  1156,  1160,  1162,  1165,
    1168,  1171,  1174,  1177,  1180,  1183,  1186,  1189,  1191,  1195,
    1198,  1200,  1203,  1208,  1211,  1225,  1240,  1242,  1243,  1244,
    1245,  1247,  1248,  1253,  1257,  1259,  1261,  1264,  1267,  1272,
    1277,  1280,  1282,  1284,  1286,  1288,  1289,  1293,  1294,  1296,
    1298,  1299,  1301,  1306,  1310,  1312,  1314,  1316,  1318,  1320,
    1322,  1324,  1326,  1328,  1330,  1332,  1336,  1339,  1343,  1347,
    1349,  1351,  1353,  1357,  1361,  1363,  1365,  1366,  1368,  1370,
    1372,  1376,  1378,  1380,  1384,  1386,  1388,  1393,  1398,  1403,
    1408,  1410,  1412,  1414,  1418,  1420,  1425,  1428,  1432,  1436,
    1438,  1443,  1448,  1452,  1456,  1460,  1462,  1466,  1468,  1470,
    1474,  1476,  1478,  1479,  1481,  1485,  1487,  1491,  1493,  1498,
    1501,  1508,  1513,  1516,  1519,  1521,  1524,  1526,  1531,  1535,
    1539,  1543,  1550,  1554,  1556,  1558,  1560,  1565,  1570,  1573,
    1576,  1581,  1584,  1587,  1589,  1593
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     167,     0,    -1,   171,    -1,     7,    -1,     6,    -1,     5,
      -1,     4,    -1,     3,    -1,     9,    -1,    10,    -1,    11,
      -1,    55,    -1,    70,    -1,    69,    -1,    90,    -1,    91,
      -1,    72,    -1,    73,    -1,    74,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,
      -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,   113,
      -1,   114,    -1,   115,    -1,   116,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,   121,    -1,   122,    -1,   123,
      -1,   108,    -1,   109,    -1,   110,    -1,   111,    -1,   112,
      -1,    12,    -1,    13,    -1,   131,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   132,    -1,   133,
      -1,   128,    -1,   129,    -1,   152,    -1,   126,    -1,   127,
      -1,   125,    -1,   137,    -1,   138,    -1,   140,    -1,   139,
      -1,   134,    -1,   135,    -1,   136,    -1,   153,    -1,   168,
      -1,    80,    -1,    79,    -1,    78,    -1,    77,    -1,    76,
      -1,    75,    -1,    83,    -1,   169,    -1,   171,   174,    -1,
      -1,    83,    -1,   172,   154,    83,    -1,   172,    -1,   152,
     154,   172,    -1,   154,   172,    -1,   189,    -1,   196,    -1,
     199,    -1,   204,    -1,   206,    -1,   124,   157,   158,   159,
      -1,   152,   172,   159,    -1,    -1,   152,   172,   175,   160,
     171,   161,    -1,    -1,   152,   176,   160,   171,   161,    -1,
     117,   179,   159,    -1,   117,   177,   178,   159,    -1,   117,
     182,   159,    -1,   117,   177,   182,   159,    -1,   111,   186,
     159,    -1,   110,    -1,   111,    -1,   172,   154,   160,   181,
     161,    -1,   154,   172,   154,   160,   181,   161,    -1,   172,
     154,   160,   180,   161,    -1,   154,   172,   154,   160,   180,
     161,    -1,   180,     8,   183,    -1,   183,    -1,   181,     8,
     184,    -1,   184,    -1,   182,     8,   185,    -1,   185,    -1,
     184,    -1,   177,   184,    -1,   172,    -1,   172,   102,    83,
      -1,   184,    -1,   154,   184,    -1,   186,     8,   256,    -1,
     256,    -1,   187,   188,    -1,    -1,   189,    -1,   196,    -1,
     199,    -1,   204,    -1,   206,    -1,   124,   157,   158,   159,
      -1,   160,   187,   161,    -1,   220,    -1,   222,    -1,    94,
     157,   281,   158,   218,    -1,    93,   189,    94,   157,   281,
     158,   159,    -1,    96,   157,   259,   159,   259,   159,   259,
     158,   212,    -1,   103,   157,   281,   158,   215,    -1,   107,
     282,   159,    -1,   108,   282,   159,    -1,   112,   282,   159,
      -1,   119,   233,   159,    -1,    80,   235,   159,    -1,    92,
     257,   159,    -1,    85,    -1,   281,   159,    -1,   121,   157,
     194,   158,   159,    -1,    98,   157,   281,   102,   211,   158,
     213,    -1,    98,   157,   281,   102,   211,    14,   211,   158,
     213,    -1,    -1,   100,   157,   186,   158,   190,   214,    -1,
     159,    -1,   113,   160,   187,   161,   191,   193,    -1,   116,
     281,   159,    -1,   109,    83,   159,    -1,    83,    30,    -1,
      -1,   191,   114,   157,   192,    84,   158,   160,   187,   161,
      -1,   173,    -1,   192,    34,   173,    -1,    -1,   115,   160,
     187,   161,    -1,   195,    -1,   194,     8,   195,    -1,   287,
      -1,   265,   268,    83,   266,   157,   223,   158,   229,   267,
     160,   187,   161,   267,    -1,    -1,    36,    -1,    -1,   155,
      -1,    -1,   202,   125,   200,    83,   208,   210,   266,   160,
     237,   161,    -1,    -1,   125,   201,    83,   208,   210,   266,
     160,   237,   161,    -1,   203,    -1,   202,   203,    -1,    79,
      -1,    78,    -1,    -1,   126,   205,    83,   266,   160,   237,
     161,    -1,    -1,   127,   207,    83,   209,   266,   160,   237,
     161,    -1,    -1,   128,   173,    -1,    -1,   128,   239,    -1,
      -1,   129,   239,    -1,   287,    -1,    36,   287,    -1,   131,
     157,   293,   158,    -1,    68,   293,   162,    -1,   189,    -1,
      30,   187,    97,   159,    -1,   189,    -1,    30,   187,    99,
     159,    -1,   189,    -1,    30,   187,   101,   159,    -1,   160,
     216,   161,    -1,   160,   159,   216,   161,    -1,    30,   216,
     104,   159,    -1,    30,   159,   216,   104,   159,    -1,    -1,
     216,   105,   281,   217,   187,    -1,   216,   106,   217,   187,
      -1,    30,    -1,   159,    -1,   189,    -1,    30,   187,    95,
     159,    -1,    91,   157,   281,   158,   189,    -1,   219,    72,
     157,   281,   158,   189,    -1,   219,    -1,   219,    73,   189,
      -1,    91,   157,   281,   158,    30,   187,    -1,   221,    72,
     157,   281,   158,    30,   187,    -1,   221,    74,   159,    -1,
     221,    73,    30,   187,    74,   159,    -1,   224,    -1,    -1,
     225,    -1,   224,     8,   225,    -1,   226,   197,   198,    84,
      -1,   226,   197,   198,    84,    16,   281,    -1,    -1,   227,
      -1,   228,    -1,    29,   228,    -1,   132,    -1,   133,    -1,
     173,    -1,    -1,    30,   227,    -1,   157,   158,    -1,   157,
     231,   158,    -1,   232,    -1,   231,     8,   232,    -1,   281,
      -1,   155,   281,    -1,   233,     8,   234,    -1,   234,    -1,
     288,    -1,   235,     8,   236,    -1,   236,    -1,    84,    -1,
      84,    16,   281,    -1,   237,   238,    -1,    -1,   248,   252,
     159,    -1,   249,   111,   254,   159,    -1,   117,   239,   240,
      -1,   249,   265,   268,   170,   266,   157,   223,   158,   229,
     267,   247,   267,    -1,   173,    -1,   239,     8,   173,    -1,
     159,    -1,   160,   161,    -1,   160,   241,   161,    -1,   242,
      -1,   241,   242,    -1,   243,   159,    -1,   244,   159,    -1,
     246,   118,   239,    -1,   245,   102,    83,    -1,   245,   102,
     168,    -1,   245,   102,   251,   170,    -1,   245,   102,   251,
      -1,   170,    -1,   246,    -1,   173,   151,   170,    -1,   159,
      -1,   160,   187,   161,    -1,   250,    -1,   120,    -1,    -1,
     250,    -1,   251,    -1,   250,   251,    -1,    75,    -1,    76,
      -1,    77,    -1,    80,    -1,    79,    -1,    78,    -1,   252,
       8,   253,    -1,   253,    -1,    84,   266,    -1,    84,    16,
     281,   266,    -1,   254,     8,   255,    -1,   255,    -1,   170,
      16,   281,   266,    -1,    83,    16,   281,   266,    -1,   257,
       8,   258,    -1,   258,    -1,   281,    -1,    -1,   260,    -1,
     260,     8,   281,    -1,   281,    -1,    -1,   125,   262,   277,
     208,   210,   266,   160,   237,   161,    -1,    70,   274,   277,
      -1,    70,   261,    -1,   131,   157,   293,   158,    16,   281,
      -1,    68,   293,   162,    16,   281,    -1,   287,    16,   281,
      -1,   287,    16,    36,   287,    -1,    69,   281,    -1,   287,
      28,   281,    -1,   287,    27,   281,    -1,   287,    26,   281,
      -1,   287,    17,   281,    -1,   287,    25,   281,    -1,   287,
      24,   281,    -1,   287,    23,   281,    -1,   287,    22,   281,
      -1,   287,    21,   281,    -1,   287,    20,   281,    -1,   287,
      19,   281,    -1,   287,    18,   281,    -1,   287,    66,    -1,
      66,   287,    -1,   287,    65,    -1,    65,   287,    -1,   281,
      32,   281,    -1,   281,    33,   281,    -1,   281,     9,   281,
      -1,   281,    11,   281,    -1,   281,    10,   281,    -1,   281,
      34,   281,    -1,   281,    36,   281,    -1,   281,    35,   281,
      -1,   281,    50,   281,    -1,   281,    48,   281,    -1,   281,
      49,   281,    -1,   281,    51,   281,    -1,   281,    67,   281,
      -1,   281,    52,   281,    -1,   281,    53,   281,    -1,   281,
      47,   281,    -1,   281,    46,   281,    -1,    48,   281,    -1,
      49,   281,    -1,    54,   281,    -1,    56,   281,    -1,   281,
      39,   281,    -1,   281,    38,   281,    -1,   281,    41,   281,
      -1,   281,    40,   281,    -1,   281,    42,   281,    -1,   281,
      45,   281,    -1,   281,    43,   281,    -1,   281,    44,   281,
      -1,   281,    37,   281,    -1,   281,    55,   274,    -1,   157,
     281,   158,    -1,   263,    -1,   281,    29,   281,    30,   281,
      -1,   281,    29,    30,   281,    -1,   281,    31,   281,    -1,
     300,    -1,    64,   281,    -1,    63,   281,    -1,    62,   281,
      -1,    61,   281,    -1,    60,   281,    -1,    59,   281,    -1,
      58,   281,    -1,    90,   275,    -1,    57,   281,    -1,   279,
      -1,   163,   276,   163,    -1,    12,   281,    -1,    13,    -1,
      13,   281,    -1,    13,   281,    14,   281,    -1,    15,   281,
      -1,   265,   268,   266,   157,   223,   158,   269,   229,   267,
     160,   187,   161,   267,    -1,    80,   265,   268,   266,   157,
     223,   158,   269,   229,   267,   160,   187,   161,   267,    -1,
     110,    -1,    -1,    -1,    -1,    36,    -1,    -1,   117,   157,
     270,   158,    -1,   270,     8,   271,    -1,   271,    -1,    84,
      -1,    36,    84,    -1,   173,   230,    -1,   273,   151,   291,
     230,    -1,   283,   151,   291,   230,    -1,   285,   230,    -1,
      80,    -1,   173,    -1,   273,    -1,   290,    -1,    -1,   157,
     282,   158,    -1,    -1,    86,    -1,   297,    -1,    -1,   230,
      -1,   132,   157,   293,   158,    -1,    68,   293,   162,    -1,
      87,    -1,    81,    -1,    82,    -1,   134,    -1,   135,    -1,
     136,    -1,   138,    -1,   139,    -1,   140,    -1,   153,    -1,
     137,    -1,   147,    86,   148,    -1,   147,   148,    -1,   164,
     297,   164,    -1,   147,   297,   148,    -1,   278,    -1,   280,
      -1,   173,    -1,   273,   151,   170,    -1,   283,   151,   170,
      -1,   287,    -1,   264,    -1,    -1,   281,    -1,   284,    -1,
     287,    -1,   157,   281,   158,    -1,   278,    -1,   286,    -1,
     157,   281,   158,    -1,   278,    -1,   288,    -1,   284,    68,
     282,   162,    -1,   280,    68,   282,   162,    -1,   284,   160,
     281,   161,    -1,   284,   130,   292,   230,    -1,   272,    -1,
     286,    -1,   289,    -1,   284,   130,   292,    -1,    84,    -1,
     165,   160,   281,   161,    -1,   165,   288,    -1,   273,   151,
     288,    -1,   283,   151,   288,    -1,   288,    -1,   290,    68,
     282,   162,    -1,   290,   160,   281,   161,    -1,   290,   130,
     292,    -1,   273,   151,   288,    -1,   290,   151,   288,    -1,
     170,    -1,   160,   281,   161,    -1,   288,    -1,    83,    -1,
     160,   281,   161,    -1,   288,    -1,   295,    -1,    -1,   296,
      -1,   295,     8,   294,    -1,   294,    -1,   281,    14,   281,
      -1,   281,    -1,   281,    14,    36,   287,    -1,    36,   287,
      -1,   281,    14,   131,   157,   293,   158,    -1,   131,   157,
     293,   158,    -1,   297,   298,    -1,   297,    86,    -1,   298,
      -1,    86,   298,    -1,    84,    -1,    84,    68,   299,   162,
      -1,    84,   130,    83,    -1,   149,   281,   161,    -1,   149,
      88,   161,    -1,   149,    88,    68,   281,   162,   161,    -1,
     150,   287,   161,    -1,    83,    -1,    89,    -1,    84,    -1,
     122,   157,   301,   158,    -1,   123,   157,   281,   158,    -1,
       7,   281,    -1,     6,   281,    -1,     5,   157,   281,   158,
      -1,     4,   281,    -1,     3,   281,    -1,   302,    -1,   301,
       8,   302,    -1,   281,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   266,   266,   270,   270,   270,   270,   270,   270,   270,
     270,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   275,   275,   275,   275,   275,   275,
     275,   275,   276,   276,   276,   276,   276,   276,   276,   276,
     280,   281,   281,   281,   281,   281,   281,   285,   286,   294,
     295,   299,   300,   304,   305,   306,   310,   311,   312,   313,
     314,   315,   319,   322,   322,   325,   325,   328,   329,   330,
     331,   332,   336,   337,   341,   343,   348,   350,   355,   357,
     362,   364,   369,   371,   376,   377,   381,   383,   388,   389,
     393,   394,   398,   401,   406,   407,   408,   409,   410,   411,
     418,   419,   420,   421,   423,   425,   427,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   440,   444,   443,
     447,   448,   450,   451,   452,   457,   458,   463,   464,   468,
     469,   473,   474,   478,   482,   489,   490,   494,   495,   499,
     499,   502,   502,   508,   509,   513,   514,   518,   518,   524,
     524,   530,   531,   535,   536,   540,   541,   545,   546,   547,
     548,   552,   553,   557,   558,   562,   563,   567,   568,   569,
     570,   574,   575,   577,   582,   583,   588,   589,   594,   597,
     603,   604,   609,   612,   618,   619,   625,   626,   631,   633,
     638,   640,   646,   647,   651,   652,   656,   657,   658,   662,
     663,   667,   668,   672,   674,   679,   680,   684,   685,   689,
     695,   696,   700,   701,   706,   709,   714,   716,   718,   720,
     727,   728,   732,   733,   734,   738,   740,   745,   746,   750,
     755,   757,   759,   761,   766,   768,   772,   777,   778,   782,
     783,   787,   788,   793,   794,   799,   800,   801,   802,   803,
     804,   808,   809,   813,   815,   820,   821,   825,   829,   833,
     834,   837,   841,   842,   846,   847,   851,   851,   861,   863,
     868,   870,   872,   874,   876,   877,   879,   881,   883,   885,
     887,   889,   891,   893,   895,   897,   899,   901,   902,   903,
     904,   905,   907,   909,   911,   913,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   933,   935,   937,   939,   941,   943,   945,
     947,   949,   951,   952,   953,   955,   957,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   981,   989,   993,   997,  1001,
    1002,  1006,  1007,  1011,  1012,  1016,  1017,  1021,  1023,  1025,
    1027,  1032,  1035,  1039,  1040,  1044,  1045,  1050,  1051,  1052,
    1057,  1058,  1063,  1064,  1065,  1069,  1070,  1071,  1072,  1073,
    1074,  1075,  1076,  1077,  1078,  1079,  1080,  1082,  1083,  1084,
    1085,  1089,  1090,  1092,  1097,  1098,  1102,  1103,  1107,  1111,
    1112,  1113,  1117,  1118,  1119,  1123,  1125,  1127,  1129,  1131,
    1133,  1137,  1139,  1141,  1146,  1147,  1148,  1152,  1154,  1159,
    1161,  1163,  1165,  1167,  1169,  1174,  1175,  1176,  1180,  1181,
    1182,  1186,  1191,  1192,  1196,  1198,  1203,  1205,  1207,  1209,
    1211,  1214,  1220,  1222,  1224,  1226,  1231,  1233,  1236,  1239,
    1241,  1243,  1246,  1250,  1251,  1252,  1257,  1258,  1259,  1261,
    1263,  1265,  1267,  1272,  1273,  1278
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"yield from (T_YIELD_FROM)\"", "'='", "\"**= (T_POW_EQUAL)\"",
  "\">>= (T_SR_EQUAL)\"", "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"",
  "\"|= (T_OR_EQUAL)\"", "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"?? (T_COALESCE)\"",
  "\"|| (T_BOOLEAN_OR)\"", "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"<=> (T_SPACESHIP)\"", "\"!== (T_IS_NOT_IDENTICAL)\"",
  "\"=== (T_IS_IDENTICAL)\"", "\"!= (T_IS_NOT_EQUAL)\"",
  "\"== (T_IS_EQUAL)\"", "'<'", "'>'", "\">= (T_IS_GREATER_OR_EQUAL)\"",
  "\"<= (T_IS_SMALLER_OR_EQUAL)\"", "\">> (T_SR)\"", "\"<< (T_SL)\"",
  "'+'", "'-'", "'.'", "'*'", "'/'", "'%'", "'!'",
  "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"",
  "\"** (T_POW)\"", "'['", "\"clone (T_CLONE)\"", "\"new (T_NEW)\"",
  "T_NOELSE", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"public (T_PUBLIC)\"",
  "\"protected (T_PROTECTED)\"", "\"private (T_PRIVATE)\"",
  "\"final (T_FINAL)\"", "\"abstract (T_ABSTRACT)\"",
  "\"static (T_STATIC)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable (T_VARIABLE)\"", "T_INLINE_HTML",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"number (T_NUM_STRING)\"",
  "\"exit (T_EXIT)\"", "\"if (T_IF)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"var (T_VAR)\"", "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"",
  "\"empty (T_EMPTY)\"", "\"__halt_compiler (T_HALT_COMPILER)\"",
  "\"class (T_CLASS)\"", "\"trait (T_TRAIT)\"",
  "\"interface (T_INTERFACE)\"", "\"extends (T_EXTENDS)\"",
  "\"implements (T_IMPLEMENTS)\"", "\"-> (T_OBJECT_OPERATOR)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"", "\"__DIR__ (T_DIR)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"\\\\ (T_NS_SEPARATOR)\"",
  "\"... (T_ELLIPSIS)\"", "T_ERROR", "'('", "')'", "';'", "'{'", "'}'",
  "']'", "'`'", "'\"'", "'$'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_name", "name", "top_statement", "$@1",
  "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "inline_use_declarations",
  "unprefixed_use_declarations", "use_declarations",
  "inline_use_declaration", "unprefixed_use_declaration",
  "use_declaration", "const_list", "inner_statement_list",
  "inner_statement", "statement", "$@3", "catch_list", "catch_name_list",
  "finally_statement", "unset_variables", "unset_variable",
  "function_declaration_statement", "is_reference", "is_variadic",
  "class_declaration_statement", "@4", "@5", "class_modifiers",
  "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "while_statement",
  "if_stmt_without_else", "if_stmt", "alt_if_stmt_without_else",
  "alt_if_stmt", "parameter_list", "non_empty_parameter_list", "parameter",
  "optional_type", "type_expr", "type", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "name_list", "trait_adaptations",
  "trait_adaptation_list", "trait_adaptation", "trait_precedence",
  "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@8", "new_expr",
  "expr_without_variable", "function", "backup_doc_comment",
  "backup_fn_flags", "returns_ref", "lexical_vars", "lexical_var_list",
  "lexical_var", "function_call", "class_name", "class_name_reference",
  "exit_expr", "backticks_expr", "ctor_arguments", "dereferencable_scalar",
  "scalar", "constant", "expr", "optional_expr", "variable_class_name",
  "dereferencable", "callable_expr", "callable_variable", "variable",
  "simple_variable", "static_member", "new_variable", "member_name",
  "property_name", "array_pair_list", "possible_array_pair",
  "non_empty_array_pair_list", "array_pair", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "isset_variable", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,   267,   268,   269,    61,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    63,
      58,   282,   283,   284,   124,    94,    38,   285,   286,   287,
     288,   289,    60,    62,   290,   291,   292,   293,    43,    45,
      46,    42,    47,    37,    33,   294,   126,    64,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,    91,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,    40,    41,    59,
     123,   125,    93,    96,    34,    36
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   175,   174,   176,   174,   174,   174,   174,
     174,   174,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   188,   188,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   190,   189,
     189,   189,   189,   189,   189,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   196,   197,   197,   198,   198,   200,
     199,   201,   199,   202,   202,   203,   203,   205,   204,   207,
     206,   208,   208,   209,   209,   210,   210,   211,   211,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   215,
     215,   216,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   227,   227,   228,   228,   228,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   233,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   238,   238,
     239,   239,   240,   240,   240,   241,   241,   242,   242,   243,
     244,   244,   244,   244,   245,   245,   246,   247,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   251,   251,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   256,   257,
     257,   258,   259,   259,   260,   260,   262,   261,   263,   263,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   265,   266,   267,   268,
     268,   269,   269,   270,   270,   271,   271,   272,   272,   272,
     272,   273,   273,   274,   274,   275,   275,   276,   276,   276,
     277,   277,   278,   278,   278,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   280,   280,   280,   281,   281,   282,   282,   283,   284,
     284,   284,   285,   285,   285,   286,   286,   286,   286,   286,
     286,   287,   287,   287,   288,   288,   288,   289,   289,   290,
     290,   290,   290,   290,   290,   291,   291,   291,   292,   292,
     292,   293,   294,   294,   295,   295,   296,   296,   296,   296,
     296,   296,   297,   297,   297,   297,   298,   298,   298,   298,
     298,   298,   298,   299,   299,   299,   300,   300,   300,   300,
     300,   300,   300,   301,   301,   302
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     3,     1,     3,     2,     1,     1,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     4,     3,
       4,     3,     1,     1,     5,     6,     5,     6,     3,     1,
       3,     1,     3,     1,     1,     2,     1,     3,     1,     2,
       3,     1,     2,     0,     1,     1,     1,     1,     1,     4,
       3,     1,     1,     5,     7,     9,     5,     3,     3,     3,
       3,     3,     3,     1,     2,     5,     7,     9,     0,     6,
       1,     6,     3,     3,     2,     0,     9,     1,     3,     0,
       4,     1,     3,     1,    13,     0,     1,     0,     1,     0,
      10,     0,     9,     1,     2,     1,     1,     0,     7,     0,
       8,     0,     2,     0,     2,     0,     2,     1,     2,     4,
       3,     1,     4,     1,     4,     1,     4,     3,     4,     4,
       5,     0,     5,     4,     1,     1,     1,     4,     5,     6,
       1,     3,     6,     7,     3,     6,     1,     0,     1,     3,
       4,     6,     0,     1,     1,     2,     1,     1,     1,     0,
       2,     2,     3,     1,     3,     1,     2,     3,     1,     1,
       3,     1,     1,     3,     2,     0,     3,     4,     3,    12,
       1,     3,     1,     2,     3,     1,     2,     2,     2,     3,
       3,     3,     4,     3,     1,     1,     3,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     4,     3,     1,     4,     4,     3,
       1,     1,     0,     1,     3,     1,     0,     9,     3,     2,
       6,     5,     3,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     5,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     2,
       1,     2,     4,     2,    13,    14,     1,     0,     0,     0,
       1,     0,     4,     3,     1,     1,     2,     2,     4,     4,
       2,     1,     1,     1,     1,     0,     3,     0,     1,     1,
       0,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     3,     1,
       1,     1,     3,     3,     1,     1,     0,     1,     1,     1,
       3,     1,     1,     3,     1,     1,     4,     4,     4,     4,
       1,     1,     1,     3,     1,     4,     2,     3,     3,     1,
       4,     4,     3,     3,     3,     1,     3,     1,     1,     3,
       1,     1,     0,     1,     3,     1,     3,     1,     4,     2,
       6,     4,     2,     2,     1,     2,     1,     4,     3,     3,
       3,     6,     3,     1,     1,     1,     4,     4,     2,     2,
       4,     2,     2,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      80,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     370,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   462,     0,     0,   176,
     175,   391,   405,   406,    81,   444,   143,   404,   395,     0,
       0,     0,     0,     0,     0,     0,     0,   426,   426,     0,
     376,     0,   426,     0,     0,     0,     0,     0,     0,     0,
       0,   171,   177,   179,     0,     0,   407,   408,   409,   414,
     410,   411,   412,     0,    95,   413,     0,     0,   150,   123,
     397,     0,     0,    83,   421,    79,    86,    87,    88,     0,
     173,    89,    90,   210,   131,     0,   132,   353,   425,   379,
     440,     0,   419,   367,   420,     0,     0,   428,     0,   441,
     424,   435,   442,   357,   391,    81,     0,   379,   492,   491,
       0,   489,   488,   369,   371,   373,   338,   339,   340,   341,
     366,   364,   363,   362,   361,   360,   359,   358,   462,   391,
       0,   431,     0,   320,   318,     0,     0,   467,     0,   465,
     461,   463,   304,   296,   392,   299,   393,   400,   449,   394,
     242,     0,   241,   379,   154,   426,   365,     0,     0,   290,
     291,     0,     0,   292,     0,     0,     0,   427,     0,     0,
       0,     0,     0,   121,     0,   123,     0,   102,   103,     0,
     116,     0,     0,     0,   118,   113,     0,   238,   239,     0,
       0,     0,     0,     0,     0,     0,   462,   462,   476,     0,
     416,     0,     0,     0,   474,     0,    93,     0,    85,     0,
       0,   398,     0,   399,     0,     0,     0,   446,     0,     0,
     387,   169,   174,     0,     0,     0,     0,     0,   380,   377,
       0,   426,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,   426,     0,     0,   390,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     319,   317,   377,     0,     0,     0,     0,   429,   462,     0,
     403,   462,   400,     0,   401,   298,   426,     0,     0,     0,
       0,     0,   141,   377,     0,     0,     0,   142,     0,     0,
       0,   293,   295,     0,     0,     0,   137,   138,   153,     0,
       0,   101,   139,     0,   152,   116,   119,     0,     0,     0,
     116,     0,     0,    97,     0,    99,     0,   140,     0,   161,
     429,   495,     0,   493,     0,     0,   181,   377,   183,     0,
       0,     0,     0,   415,   475,     0,     0,   429,   473,   418,
     472,    84,    92,     0,    80,   352,     0,   130,   122,   124,
     125,   126,   127,   128,   368,   417,     0,    82,     0,   231,
       0,   233,   235,     0,     0,   211,     0,   123,   214,   377,
       0,     7,     6,     5,     4,     3,     8,     9,    10,    46,
      47,    11,    13,    12,    16,    17,    18,    76,    75,    74,
      73,    72,    71,    77,    14,    15,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    49,    50,    51,
      52,    53,    41,    42,    43,    44,    45,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    61,    59,
      60,    56,    57,    48,    54,    55,    66,    67,    68,    62,
      63,    65,    64,    58,    69,     0,    70,    78,   422,   447,
       0,     0,   323,   325,   324,     0,     0,   356,   321,   322,
     326,   328,   327,   350,   343,   342,   345,   344,   346,   348,
     349,   347,   337,   336,   330,   331,   329,   332,   334,   335,
     351,   333,   423,   448,     0,     0,   458,     0,   460,   443,
       0,     0,   302,   308,   316,   315,   314,   313,   312,   311,
     310,   309,   307,   306,   305,   490,   372,   403,   430,     0,
       0,     0,   466,     0,   464,   181,   453,     0,   452,   454,
       0,   243,   240,     0,   396,     0,   289,     0,     0,   292,
       0,     0,   148,     0,   377,   120,   155,     0,   117,     0,
     116,     0,    98,   100,     0,   116,   112,   237,     0,     0,
       0,   486,   487,    91,     0,   185,     0,     0,   377,     0,
     402,   483,   485,   484,     0,   478,     0,   480,   479,   482,
      80,     0,     0,   445,   236,     0,   232,   181,     0,     0,
       0,     0,   222,     0,   388,   437,   355,     0,   389,   436,
       0,   439,   438,   303,   471,   429,   462,   301,   185,   450,
     451,   222,   123,   208,     0,   123,   206,   133,     0,   294,
       0,   462,     0,     0,   429,     0,   201,   201,   136,   288,
     159,     0,     0,     0,   109,   114,     0,     0,   162,   145,
     494,   182,     0,   377,   245,   250,   184,     0,     0,   477,
       0,     0,    96,     0,   234,   185,     0,     0,     0,   222,
       0,   226,   227,   228,     0,   216,   218,   165,   223,   224,
     456,   354,   459,     0,   377,     0,   212,     0,     0,   292,
     429,     0,   462,     0,     0,   123,   195,   149,   201,     0,
     201,     0,     0,     0,   151,     0,   115,     0,   106,     0,
       0,   111,   186,     0,   271,     0,   245,   300,     0,    94,
     129,   377,   209,   123,   215,     0,   225,   381,   222,   166,
     167,   470,     0,   381,   134,     0,     0,   403,     0,     0,
     123,   193,   146,     0,     0,     0,     0,     0,     0,   197,
       0,   123,   107,   108,     0,     0,   104,   245,   275,   276,
     277,   280,   279,   278,     0,   270,   178,   244,     0,     0,
     272,   273,   251,   271,   481,     0,   213,   229,     0,   229,
     219,   168,     0,   245,   229,   207,     0,   189,     0,     0,
       0,     0,   199,     0,   204,   205,   123,   198,   157,     0,
       0,   105,   110,   271,     0,   377,     0,   282,     0,   379,
     274,   180,   245,     0,   378,     0,   378,   220,   271,   378,
     123,   191,   135,   147,     0,   196,   200,   123,   203,     0,
       0,   160,   172,   252,     0,   248,     0,   283,     0,   246,
       0,     0,   286,     0,   271,   230,     0,     0,   385,     0,
     384,     0,     0,   297,     0,     0,   194,   202,   158,     0,
      81,    58,   253,   264,     0,     0,   255,     0,     0,     0,
     265,   377,   281,     0,     0,   247,   377,   170,   123,   386,
       0,   382,   123,   221,   123,     0,   123,     0,   254,   256,
     257,   258,     0,     0,   284,   377,   285,     0,     0,   383,
       0,     0,   192,     0,   266,   260,   261,   263,   259,   287,
     222,   378,   378,   378,   156,   262,     0,   164,   374,   375,
     229,   378,     0,   267,   123,   378,     0,   249,   268
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   476,   477,   850,     2,    83,    84,    85,   373,
     217,   652,   341,   192,   653,   720,   193,   654,   194,   195,
     182,   220,   378,   379,   645,   650,   809,   714,   348,   349,
     380,   740,   792,   381,   393,   203,    89,    90,   382,   204,
     383,   205,   585,   588,   663,   643,   832,   752,   707,   648,
     709,   806,   637,    93,    94,    95,    96,   684,   685,   686,
     687,   688,   689,   824,   304,   390,   391,   196,   197,   161,
     162,   724,   777,   666,   845,   875,   876,   877,   878,   879,
     880,   935,   778,   779,   780,   781,   816,   817,   851,   852,
     183,   168,   169,   320,   321,   155,   302,    97,    98,   117,
     400,   856,   239,   789,   859,   860,   100,   101,   157,   166,
     222,   305,   102,   103,   104,   105,   178,   106,   107,   108,
     109,   110,   111,   112,   159,   480,   519,   148,   149,   150,
     151,   213,   214,   594,   113,   352,   353
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -723
static const yytype_int16 yypact[] =
{
    -723,    97,  1193,  -723,  5542,  5542,   -43,  5542,  5542,  5542,
    5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,
    5542,  5542,  5542,  5542,   232,   232,  4870,  5542,   482,  -723,
    -723,    20,  -723,  -723,    98,  -723,  -723,  -723,   -16,     1,
    5542,  4595,    44,    50,    83,    86,   167,  5542,  5542,   243,
    -723,   251,  5542,   186,  5542,   239,    -9,   191,   196,   205,
     209,  -723,  -723,  -723,   211,   238,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,   494,    46,  -723,   319,  5542,  -723,  -723,
     241,   273,   294,   274,   -20,  -723,  -723,  -723,  -723,   407,
    -723,  -723,  -723,    75,  -723,   418,  -723,  -723,  -723,   126,
    -723,   298,    15,  -723,   389,  6602,   311,    33,   310,   312,
     416,  -723,  -723,  -723,   360,  -723,   329,   126,  7308,  7308,
    5542,  7308,  7308,  1504,  1178,  1504,   420,   420,    60,   420,
     420,   420,   420,   420,   420,   420,   420,   420,  4870,  -723,
    5542,   331,   389,    30,    30,   232,   336,  7214,   337,  -723,
     495,  -723,  -723,  -723,  -723,  -723,   353,   310,  -723,   255,
     490,    53,  -723,   126,  -723,  5542,  -723,  5542,    57,  -723,
    7308,   424,  5542,  5542,  5542,   251,  5542,  7308,   364,   365,
     371,   503,    62,  -723,   375,  -723,  6649,  -723,  -723,   319,
     -11,    85,   377,    63,  -723,  -723,    65,  -723,  -723,   232,
    5542,  5542,   379,   456,   457,   467,  4870,  4870,    31,   261,
    -723,  4982,   232,   609,  -723,   319,   -38,   395,   274,  6696,
    1356,   366,   388,   394,   366,   281,  5542,  -723,   473,  4758,
    -723,  -723,  -723,   402,  4595,   411,   539,   412,  -723,   489,
    3475,  5542,  5542,  5542,  5542,  5094,  5542,  5542,  5542,  5542,
    5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,
    5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,   260,
    5542,  -723,  3475,  5542,   234,  5542,  -723,  5206,  5542,  5542,
    5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,  5542,
    -723,  -723,  -723,  6743,  5542,   421,  6790,    29,  4870,  5318,
     557,  4870,   310,    -9,  -723,  -723,  5542,   234,    -9,  5542,
    5542,   502,  -723,  -723,   429,  6837,  5542,  -723,   431,  6884,
     436,   583,  7308,  7166,    24,  6931,  -723,  -723,  -723,  5542,
     251,  -723,  -723,  1519,  -723,    11,  -723,   513,    19,   319,
     233,   439,    66,  -723,   226,  -723,    -9,  -723,    51,  -723,
      56,  7308,    61,  -723,  6978,   442,   474,  -723,   477,   453,
     460,    36,   533,  -723,  -723,   -21,  6023,   459,  -723,  -723,
    -723,   274,  -723,   462,  -723,   212,   476,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  6070,  -723,  5542,  -723,
      77,  -723,  7308,   541,  5542,  -723,  5542,  -723,  -723,  -723,
     480,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  5542,  -723,  -723,   492,   498,
     310,   469,  1344,  1018,  1504,  5542,  7261,  1667,  1828,  1991,
    2154,  2314,  2476,  2639,  2639,  2639,  2639,  2639,   776,   776,
     776,   776,   737,   737,   683,   683,   683,    60,    60,    60,
    -723,   420,   492,   498,   310,   484,  -723,  5542,  -723,   310,
    6118,   232,  1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504,
    1504,  1504,  1504,  1504,  1504,  -723,  1504,  -723,   499,   493,
     232,   501,  7308,  5542,  -723,   474,  -723,   500,  -723,  -723,
    6165,  7308,  -723,   504,  -723,  3780,  -723,  5542,  3943,  5542,
    5542,   458,  -723,    81,  7308,  -723,  -723,    84,  -723,    23,
     254,   151,  -723,  -723,   319,   351,  -723,  -723,   232,   505,
    5542,  -723,  -723,  -723,   225,   537,   507,   225,  -723,   652,
    -723,  -723,  -723,  -723,   508,  -723,  5542,  -723,  -723,  -723,
    -723,   867,   516,  -723,  7308,  5430,  -723,   474,  7025,  7072,
    1682,   514,   249,  6213,  -723,  -723,  1667,  5542,  -723,  -723,
    6260,  -723,  -723,    30,   652,    34,  4870,  1504,   537,  -723,
    -723,   249,  -723,  -723,  7119,  -723,  -723,  -723,   518,  7308,
     232,  4870,   521,    73,    74,  4106,   520,   522,  -723,  -723,
      21,    23,   319,    28,  -723,  -723,   216,   319,  -723,  -723,
    -723,  -723,   225,  -723,  -723,  -723,   667,   523,  5542,  -723,
    5976,  1030,  -723,   538,  -723,   537,  4595,   662,   543,   249,
     368,  -723,  -723,  -723,   542,   699,  -723,   677,  -723,  -723,
    -723,  1667,  -723,   561,  -723,   563,  3617,   564,  1845,  5542,
      79,   562,  4870,   458,  4269,  -723,  -723,  -723,  -723,   391,
    -723,     3,   569,   570,  -723,    37,  -723,    23,  -723,   319,
      42,  -723,   667,   572,   341,   225,  -723,  1504,   568,  -723,
    -723,  -723,  -723,  -723,  -723,   582,  -723,   624,   272,  -723,
     587,   652,   584,   624,  -723,   586,   588,    80,   590,   591,
    -723,  -723,  -723,  2008,   423,   593,  5542,    70,    12,  -723,
     225,  -723,  -723,  -723,    45,   319,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,   225,  -723,  -723,  -723,   669,   219,
     777,  -723,  -723,   397,  -723,   595,  3617,   726,   610,   726,
    -723,  -723,   684,  -723,   726,  -723,  4432,  -723,  4269,  2171,
     612,   615,  -723,  5692,  -723,  -723,  -723,  -723,  -723,    71,
    2334,  -723,  -723,   432,    35,   753,    68,  -723,  6332,   126,
    -723,  -723,  -723,   272,  -723,    90,  -723,   754,   611,  -723,
    -723,  -723,  -723,  -723,   616,  -723,  -723,  -723,  3617,   225,
     618,  -723,  -723,  -723,  5705,  -723,  5542,  -723,   669,  -723,
     762,    69,  -723,  6332,   686,  -723,   619,   696,  -723,    78,
    -723,   621,  5542,  -723,   622,  2497,  -723,  3617,  -723,   623,
     689,   329,  -723,  -723,   642,  5843,  -723,   635,   636,   698,
     680,  7308,  -723,  5542,  6332,  -723,  -723,  -723,  -723,  -723,
      90,  -723,  -723,  7308,  -723,   643,  -723,  6332,  -723,  -723,
    -723,  -723,  6470,   225,  -723,  7308,  -723,   648,  2660,  -723,
    2823,  2986,  -723,  3149,  -723,  -723,  -723,  6332,   667,  -723,
     249,  -723,  -723,  -723,  -723,  -723,   649,  -723,  -723,  -723,
     726,  -723,   178,  -723,  -723,  -723,  3312,  -723,  -723
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -723,  -723,   -93,  -723,  -212,  -306,     8,   -27,  -723,  -723,
    -723,   755,  -723,  -723,   160,    94,   625,   113,  -186,   470,
     640,  -180,  -723,    39,  -723,  -723,  -723,  -723,  -723,   256,
       2,  -723,  -723,     5,  -723,  -723,  -723,   743,    38,  -723,
      47,  -723,  -453,  -723,  -518,   130,  -723,    40,  -723,  -723,
    -558,    41,  -723,  -723,  -723,  -723,  -723,  -625,  -723,   101,
    -723,    17,   162,  -722,   -51,  -723,   236,  -723,   512,  -723,
     534,  -671,  -723,  -628,  -723,  -723,   -29,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -714,  -723,    27,  -723,   -35,
     529,  -723,   535,  -497,  -723,  -723,  -723,  -723,  -723,    -2,
    -267,  -475,  -115,   117,  -723,   -23,  -723,     7,   599,  -723,
    -723,   567,    14,  -723,   159,     4,    55,  -723,  -723,  -723,
    -723,   161,    67,  -723,  -723,   605,   571,  -128,   580,  -723,
    -723,    58,   404,  -723,  -723,  -723,   303
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -470
static const yytype_int16 yytable[] =
{
      99,   154,   292,   336,    87,   333,   695,    88,   118,   119,
     295,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   478,   163,
     147,   152,   330,   230,   722,   156,   717,  -469,   141,   141,
      91,    86,  -468,   725,   170,   717,   553,   596,   313,    92,
     765,   177,   177,   765,   735,   783,   177,   276,   186,   578,
     512,   311,   638,   190,  -163,   316,   820,   826,   601,   580,
     330,   344,   829,   346,   344,    35,   848,   884,   359,   360,
     171,   219,   216,  -431,   218,   605,   890,   703,  -187,   711,
     586,   337,   628,  -188,  -190,   158,   813,     3,  -429,   361,
     804,   273,   387,   179,   160,   839,   115,   184,   756,   757,
     694,   646,   163,   337,   120,   269,   228,   756,   757,   591,
     592,   372,   828,   198,   293,   593,   857,   270,   164,   115,
      50,  -392,   611,   187,   188,   712,   713,   229,   223,   225,
     597,   165,   147,   338,   296,  -431,   814,   233,   234,   227,
     754,   854,   758,   336,   675,   840,    82,   731,   167,   141,
    -429,   362,   238,   274,   759,   567,  -431,   387,   115,   177,
     539,   315,  -434,   807,   858,  -431,   319,   322,   323,   569,
     325,  -429,   562,   142,   142,   143,   144,  -469,   917,   718,
    -429,  -469,  -468,   275,   843,   844,  -468,   335,   762,   340,
     215,   172,   746,   766,   351,   354,   811,   173,   931,   579,
     147,   147,   312,   141,  -163,   366,   317,   610,    99,   581,
     314,   331,   345,   371,   347,   573,   141,   849,   885,   805,
     386,   704,  -187,   392,   387,   606,   891,  -188,  -190,   339,
     174,   647,   154,   175,   651,   177,   482,   483,   484,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   395,   511,   918,   156,   177,   680,   520,
    -430,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   671,   926,   481,   649,   536,   387,
     138,   680,   147,   542,   142,   147,   297,   479,   115,   115,
     177,   657,   139,   550,   551,   115,    35,   516,    35,    37,
     170,   667,   115,   306,   176,   208,   180,   221,   515,    50,
     818,    99,   115,   564,   181,   337,   158,   933,   934,   513,
     139,   518,  -430,   115,    35,   208,   185,   570,   199,   187,
     188,   861,   575,   200,   864,   115,   337,   208,   142,   224,
     350,   547,   201,  -430,    65,   208,   202,   368,   206,  -433,
     546,   142,  -430,   367,   518,   549,   719,   116,    35,    76,
     574,   681,   682,   655,   116,   307,    76,   571,   336,   140,
     211,   212,   604,   189,   517,   207,   723,    82,   608,    82,
     609,   116,   115,    76,   681,   682,   308,  -217,   656,   363,
     211,   212,   116,   198,    76,   309,   768,   769,   770,   771,
     772,   773,   211,   212,   116,    82,    76,   742,   228,   614,
     211,   212,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   385,   927,   928,   929,   240,
     208,   115,   696,   337,   226,   698,   932,   241,   774,    82,
     937,   775,   272,   618,   785,   655,   716,   229,   621,  -432,
      50,   721,   768,   769,   770,   771,   772,   773,   208,   613,
     368,   290,   291,   215,  -429,    29,    30,   270,  -434,   616,
     235,   236,   237,   298,   640,   755,   756,   757,   693,   300,
     681,   682,   776,   301,   303,   228,   310,   768,   769,   770,
     771,   772,   773,   701,   774,   211,   212,   775,   318,   329,
     116,   620,    76,   326,   327,   753,   641,   801,   756,   757,
     328,   655,   231,   721,   332,   141,   343,   355,   139,   356,
     357,   115,    35,   211,   212,    37,  -429,   627,   847,   774,
     358,   384,   775,   786,   141,   374,   387,   661,   821,   394,
     665,   634,   139,   322,   639,   115,    35,  -429,   396,   397,
     799,   398,   399,   543,   748,   141,  -429,   575,   208,   812,
     209,   810,   575,   537,   351,   683,   160,   554,   557,   642,
      65,   560,   141,   842,   633,   559,   568,   636,   572,    99,
     670,   583,   584,    87,   683,   587,    88,   153,    99,   392,
     116,   589,    76,   364,   904,   140,   595,   370,   590,   907,
     599,   691,   600,    82,   607,   364,   838,   370,   364,   370,
     147,   615,   873,   602,   116,   665,    76,   612,   919,    91,
      86,   886,   210,   211,   212,   147,   619,    82,    92,  -455,
     865,   624,   683,   683,   141,  -457,  -433,   867,   626,   575,
     575,   631,   629,   873,   659,   575,   662,   664,   668,    99,
     669,   679,   727,    87,   673,   725,    88,   699,   702,   708,
     142,   710,   623,   726,   706,   914,   768,   769,   770,   771,
     772,   773,   733,   208,    99,   368,    99,   730,   782,   142,
     737,   625,   734,   322,   853,   925,   147,   738,   908,    91,
      86,   683,   910,   739,   911,   732,   913,   141,    92,   741,
     142,   743,   644,   744,   747,   575,   760,   575,   774,   784,
     761,   775,   767,   808,   266,   267,   268,   142,   269,   350,
     787,   788,   791,   751,   793,   795,   796,   665,   797,   798,
     270,    99,   802,   815,   936,   822,   823,   369,   211,   212,
     803,   768,   769,   770,   771,   772,   773,   825,   827,   846,
     862,   835,   863,   575,   836,   866,   869,   819,   883,   888,
     889,   892,   894,   896,    99,   263,   264,   265,   266,   267,
     268,   -77,   269,   897,   900,   901,   683,    99,   903,   142,
     902,   700,   912,   774,   270,   920,   775,   930,    99,   916,
     191,   715,   868,   764,   576,   324,   342,   874,  -470,  -470,
    -470,  -470,   261,   262,   263,   264,   265,   266,   267,   268,
     763,   269,   232,   749,   658,   831,    99,   751,   833,   790,
     855,   674,   736,   270,   837,   552,   899,   887,   874,   906,
     881,   556,   768,   769,   770,   771,   772,   773,   577,   565,
     794,  -269,   142,    99,   644,    99,   893,   909,   510,   545,
       4,     5,     6,     7,     8,   882,   665,   514,   548,     9,
      10,   544,    11,   660,     0,     0,     0,   905,     0,     0,
       0,     0,     0,   683,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,    99,    99,
       0,    99,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    99,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,    55,     0,    56,     0,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,    74,
      75,    76,     0,     0,    77,     0,    78,    79,   672,   244,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,   270,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,    51,    52,    53,     0,     0,    54,    55,     0,    56,
       0,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,    74,    75,    76,     0,     0,    77,     0,    78,
      79,   729,   294,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,   245,    11,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,   270,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    54,
      55,     0,    56,     0,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,    74,    75,    76,     0,     0,
      77,     0,    78,    79,   243,   244,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,   270,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
     376,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,   377,     0,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,   245,    11,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,   270,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,   376,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
     566,     0,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,   270,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,   678,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,   376,    61,    62,    63,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,     0,     0,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,   270,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
     745,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,   376,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,     0,     0,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,   270,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
      33,    34,    35,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,     0,    43,     0,    44,     0,    45,   800,
       0,    46,     0,     0,     0,    47,    48,    49,    50,     0,
      52,    53,     0,     0,    54,     0,     0,    56,     0,    57,
      58,    59,   376,    61,    62,    63,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,    78,    79,     0,
       0,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,     0,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,   270,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
     834,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,     0,
      56,     0,    57,    58,    59,   376,    61,    62,    63,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
      78,    79,     0,     0,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   270,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,    33,    34,    35,    36,
       0,    37,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,    44,     0,    45,     0,     0,    46,     0,     0,
       0,    47,    48,    49,    50,     0,    52,    53,     0,     0,
      54,     0,     0,    56,     0,    57,    58,    59,   376,    61,
      62,    63,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   116,    75,    76,     0,
       0,    77,     0,    78,    79,   841,     0,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   270,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,   895,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,   376,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,     0,     0,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,  -470,  -470,  -470,  -470,
    -470,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,   376,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,   921,     0,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,   376,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,   922,     0,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
     376,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,   923,     0,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,   376,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
     924,     0,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,   376,    61,    62,    63,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,   938,     0,    80,    81,    82,   401,   402,
     403,   404,   405,     0,   406,   407,   408,   409,   410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   412,   413,     0,   414,   415,   416,
     417,   418,   419,   420,   421,   422,     0,     0,   423,    35,
       0,     0,     0,     0,     0,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
     458,   459,   460,   461,   462,     0,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     0,     0,   473,   474,     9,
      10,     0,    11,     0,     0,   475,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,   376,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,     0,     0,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     632,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,     0,     0,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   635,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,     0,     0,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   705,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,     0,     0,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   750,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
       0,     0,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   830,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,     0,     0,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,     0,     0,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,    32,
      33,   115,    35,     0,     0,    37,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     0,     0,
      58,    59,     9,    10,     0,    11,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,   145,     0,     0,     0,
     116,    75,    76,   388,     0,    77,   389,     0,    12,    13,
       0,    80,    81,    82,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,    32,    33,   115,    35,     0,     0,    37,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       0,     0,    58,    59,     9,    10,     0,    11,     0,     0,
       0,   146,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,     0,
      12,    13,     0,    80,    81,    82,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,    32,    33,   115,    35,     0,     0,    37,
     365,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     0,     0,    58,    59,     9,    10,     0,    11,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,   485,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,     0,    12,    13,     0,    80,    81,    82,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,    32,    33,   115,    35,     0,
       0,    37,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     4,
       5,     6,     7,     8,     0,     0,    58,    59,     9,    10,
       0,    11,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,   521,     0,     0,     0,   116,    75,    76,     0,
       0,    77,     0,     0,    12,    13,     0,    80,    81,    82,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,    32,    33,   115,
      35,     0,     0,    37,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     0,     0,    58,    59,
       9,    10,     0,    11,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,   540,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,     0,    12,    13,     0,    80,
      81,    82,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,    32,
      33,   115,    35,     0,     0,    37,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     0,     0,
      58,    59,     9,    10,     0,    11,     0,     0,     0,   541,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,     0,    12,    13,
       0,    80,    81,    82,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,    32,    33,   115,    35,     0,     0,    37,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       0,     0,    58,    59,     9,    10,     0,    11,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,   388,     0,    77,     0,     0,
      12,    13,     0,    80,    81,    82,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,    32,    33,   115,    35,     0,     0,    37,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,   242,   243,   244,     0,    80,    81,    82,   401,   402,
     403,   404,   405,     0,   406,   407,   408,   409,   410,     0,
       0,   245,   804,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
     411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   412,   413,     0,   414,   415,   416,
     417,   418,   419,   420,   421,   422,     0,     0,   870,     0,
       0,     0,     0,     0,     0,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
     458,   459,   460,   461,   462,     0,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   401,   402,   403,   404,
     405,   805,   406,   407,   408,   409,   410,   871,   474,    76,
       0,     0,     0,     0,     0,     0,   872,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   411,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   412,   413,     0,   414,   415,   416,   417,   418,
     419,   420,   421,   422,     0,     0,   870,     0,     0,     0,
       0,     0,     0,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,   458,   459,
     460,   461,   462,     0,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,   871,   474,    76,     0,     0,
       0,     0,     0,     0,   898,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   242,
     243,   244,     0,     0,     0,     0,     0,     0,     0,     0,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,   242,   243,   244,
       0,     0,     0,     0,     0,     0,     0,   270,   728,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,   598,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,   242,   243,   244,     0,     0,     0,     0,     0,
       0,   603,   270,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   242,
     243,   244,     0,     0,     0,     0,     0,     0,     0,   622,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   630,   270,     0,     0,
       0,     0,     0,     0,     0,   401,   402,   403,   404,   405,
       0,   406,   407,   408,   409,   410,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   690,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   411,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   412,   413,     0,   414,   415,   416,   417,   418,   419,
     420,   421,   422,     0,     0,   423,     0,     0,     0,     0,
       0,   692,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,     0,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   401,   402,   403,   404,   405,     0,   406,
     407,   408,   409,   410,   473,   474,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   412,
     413,     0,   414,   415,   416,   768,   769,   770,   771,   772,
     773,     0,     0,   915,     0,     0,     0,     0,     0,     0,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,     0,   458,   459,   460,   461,   462,
       0,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   242,   243,   244,     0,     0,     0,     0,     0,     0,
       0,     0,   473,   474,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,   242,   243,   244,     0,     0,     0,     0,     0,
       0,   271,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   242,
     243,   244,     0,     0,     0,     0,     0,     0,   334,     0,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,   242,   243,   244,     0,
       0,     0,     0,     0,   375,     0,     0,   270,     0,     0,
       0,     0,     0,     0,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   242,   243,   244,     0,     0,     0,     0,
       0,   535,     0,     0,   270,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
     242,   243,   244,     0,     0,     0,     0,     0,   538,     0,
       0,   270,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,   242,   243,   244,
       0,     0,     0,     0,     0,   555,     0,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,   558,     0,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,   242,   243,   244,     0,     0,     0,     0,     0,   563,
       0,     0,   270,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   242,   243,
     244,     0,     0,     0,     0,     0,   582,     0,     0,   270,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,   676,     0,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,   242,   243,   244,     0,     0,   299,     0,
     677,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   561,   269,
     242,   243,   244,     0,     0,     0,     0,   697,     0,     0,
       0,   270,     0,     0,     0,     0,     0,     0,     0,     0,
     245,   617,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,   242,   243,   244,
       0,     0,     0,     0,     0,     0,     0,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   270
};

static const yytype_int16 yycheck[] =
{
       2,    28,   117,   189,     2,   185,   631,     2,     4,     5,
     138,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   240,    31,
      26,    27,     8,    84,   662,    28,     8,     8,    24,    25,
       2,     2,     8,     8,    40,     8,   313,    68,   163,     2,
       8,    47,    48,     8,   679,   726,    52,   108,    54,     8,
     272,     8,   559,    55,     8,     8,   780,   789,   374,     8,
       8,     8,   794,     8,     8,    84,     8,     8,   206,   207,
      41,    77,    74,    68,    76,     8,     8,    14,    14,   647,
     357,   102,   545,    14,    14,    28,   767,     0,    68,    68,
      30,    68,    83,    48,    84,    34,    83,    52,   105,   106,
     628,    30,   114,   102,   157,    55,   154,   105,   106,    83,
      84,   159,   793,    56,   120,    89,    36,    67,    30,    83,
     110,   151,   399,   110,   111,   114,   115,   157,    80,    81,
     161,   157,   138,   154,   140,   130,   774,    72,    73,    82,
     708,   822,   710,   339,   607,    84,   165,   675,   157,   145,
     130,   130,    36,   130,   161,   154,   151,    83,    83,   165,
     298,   167,   157,   161,    84,   160,   172,   173,   174,   160,
     176,   151,   158,    24,    25,    24,    25,   158,   902,   161,
     160,   162,   158,   160,   159,   160,   162,   189,   161,   191,
     154,   157,   699,   161,   200,   201,   161,   157,   930,   158,
     206,   207,   159,   199,   158,   211,   159,   397,   220,   158,
     165,   159,   159,   215,   159,   159,   212,   159,   159,   159,
     226,   158,   158,   229,    83,   158,   158,   158,   158,   154,
     157,   160,   269,   157,   160,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   234,   270,   903,   269,   273,    29,   275,
      68,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   600,   920,   241,   564,   294,    83,
      68,    29,   298,   299,   145,   301,   145,   240,    83,    83,
     306,   160,    80,   309,   310,    83,    84,    83,    84,    87,
     316,   588,    83,    68,   157,    84,    83,    86,   273,   110,
     111,   333,    83,   329,    83,   102,   269,   159,   160,   272,
      80,   274,   130,    83,    84,    84,   160,   339,   157,   110,
     111,   826,   344,   157,   829,    83,   102,    84,   199,    86,
     199,   306,   157,   151,   132,    84,   157,    86,   157,   157,
     303,   212,   160,   212,   307,   308,   160,   152,    84,   154,
     154,   132,   133,   569,   152,   130,   154,   154,   574,   157,
     149,   150,   388,   154,   160,   157,   663,   165,   394,   165,
     396,   152,    83,   154,   132,   133,   151,   158,   154,   148,
     149,   150,   152,   346,   154,   160,    75,    76,    77,    78,
      79,    80,   149,   150,   152,   165,   154,   694,   154,   480,
     149,   150,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   164,   921,   922,   923,   151,
      84,    83,   632,   102,   160,   635,   931,    68,   117,   165,
     935,   120,   151,   514,   731,   651,   652,   157,   519,   157,
     110,   657,    75,    76,    77,    78,    79,    80,    84,   475,
      86,    65,    66,   154,    68,    78,    79,    67,   157,   485,
      72,    73,    74,   157,    36,   104,   105,   106,   626,   162,
     132,   133,   161,     8,   151,   154,    16,    75,    76,    77,
      78,    79,    80,   641,   117,   149,   150,   120,    94,    16,
     152,   517,   154,   159,   159,   705,    68,   104,   105,   106,
     159,   717,   125,   719,   159,   521,   159,   158,    80,    83,
      83,    83,    84,   149,   150,    87,   130,   543,   815,   117,
      83,   163,   120,   733,   540,   160,    83,   584,   161,   157,
     587,   557,    80,   559,   560,    83,    84,   151,   157,    30,
     750,   159,    83,    16,   702,   561,   160,   569,    84,   765,
      86,   761,   574,   162,   580,   612,    84,   158,   157,   131,
     132,     8,   578,   161,   555,   159,    83,   558,   159,   601,
     596,   159,   128,   601,   631,   128,   601,   125,   610,   605,
     152,   158,   154,   209,   881,   157,    83,   213,   158,   886,
     161,   617,   160,   165,    83,   221,   806,   223,   224,   225,
     626,   162,   844,   157,   152,   662,   154,   157,   905,   601,
     601,   853,   148,   149,   150,   641,   162,   165,   601,   157,
     830,   158,   679,   680,   640,   157,   157,   837,   157,   651,
     652,   157,   162,   875,   159,   657,   129,   160,    16,   671,
     162,   157,   668,   671,   158,     8,   671,   159,   157,   159,
     521,   159,   521,   160,   645,   897,    75,    76,    77,    78,
      79,    80,    30,    84,   696,    86,   698,   159,   725,   540,
     158,   540,   159,   699,   819,   917,   702,     8,   888,   671,
     671,   738,   892,    36,   894,   676,   896,   703,   671,   158,
     561,   158,   561,   159,   162,   717,   157,   719,   117,   161,
     160,   120,   160,   760,    51,    52,    53,   578,    55,   578,
     158,   117,   155,   704,   160,   159,   158,   774,   158,   158,
      67,   753,   159,    84,   934,   160,    30,   148,   149,   150,
     756,    75,    76,    77,    78,    79,    80,   157,    84,    16,
      16,   159,   161,   765,   159,   159,   158,   779,    16,   160,
      84,   160,   160,   160,   786,    48,    49,    50,    51,    52,
      53,   102,    55,   151,   159,   159,   823,   799,   118,   640,
     102,   640,   159,   117,    67,   157,   120,   158,   810,   902,
      55,   651,   839,   719,   344,   175,   191,   844,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     717,    55,    89,   703,   578,   796,   838,   798,   798,   738,
     823,   605,   680,    67,   803,   311,   875,   161,   875,   884,
     846,   316,    75,    76,    77,    78,    79,    80,   346,   330,
     743,    84,   703,   865,   703,   867,   862,   890,   269,   302,
       3,     4,     5,     6,     7,   848,   903,   272,   307,    12,
      13,   301,    15,   580,    -1,    -1,    -1,   883,    -1,    -1,
      -1,    -1,    -1,   920,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   908,    -1,   910,   911,
      -1,   913,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,   936,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,   116,   117,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,   161,    11,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    67,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,   116,   117,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,   161,    14,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    29,    15,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    67,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,   116,
     117,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,    10,    11,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    67,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,   161,    -1,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    29,    15,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    67,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
     161,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    67,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,    -1,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    67,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,    -1,    -1,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    67,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    87,    -1,    -1,    90,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,   101,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,
      -1,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    67,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    -1,
      -1,    90,    91,    92,    93,    94,    -1,    96,    -1,    98,
      99,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
     159,   160,    -1,    -1,   163,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,   159,   160,   161,    -1,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    97,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,    -1,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,   161,    -1,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,   161,    -1,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,   161,    -1,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
     161,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,   161,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,   152,   153,    12,
      13,    -1,    15,    -1,    -1,   160,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,    -1,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,    -1,    -1,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,    -1,    -1,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,    -1,    -1,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
      -1,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,    -1,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,    -1,    -1,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
     122,   123,    12,    13,    -1,    15,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    36,    -1,    -1,    -1,
     152,   153,   154,   155,    -1,   157,   158,    -1,    48,    49,
      -1,   163,   164,   165,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,   122,   123,    12,    13,    -1,    15,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,    -1,
      48,    49,    -1,   163,   164,   165,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,    87,
      88,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,   122,   123,    12,    13,    -1,    15,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    30,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,    -1,    48,    49,    -1,   163,   164,   165,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,   122,   123,    12,    13,
      -1,    15,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    36,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,    -1,    48,    49,    -1,   163,   164,   165,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,   122,   123,
      12,    13,    -1,    15,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    36,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,    -1,    48,    49,    -1,   163,
     164,   165,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
     122,   123,    12,    13,    -1,    15,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,    -1,    48,    49,
      -1,   163,   164,   165,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,   122,   123,    12,    13,    -1,    15,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,   155,    -1,   157,    -1,    -1,
      48,    49,    -1,   163,   164,   165,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,     9,    10,    11,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,     3,     4,     5,     6,
       7,   159,     9,    10,    11,    12,    13,   152,   153,   154,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,   125,   126,
     127,   128,   129,    -1,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,   161,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,   125,   126,   127,
     128,   129,    -1,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,   125,   126,   127,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,     9,    10,    11,    -1,    -1,    14,    -1,
     158,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   102,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   167,   171,     0,     3,     4,     5,     6,     7,    12,
      13,    15,    48,    49,    54,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,    69,    70,    78,
      79,    80,    81,    82,    83,    84,    85,    87,    90,    91,
      92,    93,    94,    96,    98,   100,   103,   107,   108,   109,
     110,   111,   112,   113,   116,   117,   119,   121,   122,   123,
     124,   125,   126,   127,   131,   132,   134,   135,   136,   137,
     138,   139,   140,   147,   152,   153,   154,   157,   159,   160,
     163,   164,   165,   172,   173,   174,   189,   196,   199,   202,
     203,   204,   206,   219,   220,   221,   222,   263,   264,   265,
     272,   273,   278,   279,   280,   281,   283,   284,   285,   286,
     287,   288,   289,   300,    80,    83,   152,   265,   281,   281,
     157,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,    68,    80,
     157,   278,   280,   287,   287,    36,   131,   281,   293,   294,
     295,   296,   281,   125,   173,   261,   273,   274,   288,   290,
      84,   235,   236,   265,    30,   157,   275,   157,   257,   258,
     281,   189,   157,   157,   157,   157,   157,   281,   282,   282,
      83,    83,   186,   256,   282,   160,   281,   110,   111,   154,
     172,   177,   179,   182,   184,   185,   233,   234,   288,   157,
     157,   157,   157,   201,   205,   207,   157,   157,    84,    86,
     148,   149,   150,   297,   298,   154,   172,   176,   172,   281,
     187,    86,   276,   297,    86,   297,   160,   288,   154,   157,
     230,   125,   203,    72,    73,    72,    73,    74,    36,   268,
     151,    68,     9,    10,    11,    29,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    55,
      67,   159,   151,    68,   130,   160,   230,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      65,    66,   268,   281,    14,   293,   281,   287,   157,    14,
     162,     8,   262,   151,   230,   277,    68,   130,   151,   160,
      16,     8,   159,   268,   282,   281,     8,   159,    94,   281,
     259,   260,   281,   281,   186,   281,   159,   159,   159,    16,
       8,   159,   159,   187,   159,   172,   184,   102,   154,   154,
     172,   178,   182,   159,     8,   159,     8,   159,   194,   195,
     287,   281,   301,   302,   281,   158,    83,    83,    83,   293,
     293,    68,   130,   148,   298,    88,   281,   287,    86,   148,
     298,   172,   159,   175,   160,   158,   124,   161,   188,   189,
     196,   199,   204,   206,   163,   164,   281,    83,   155,   158,
     231,   232,   281,   200,   157,   189,   157,    30,   159,    83,
     266,     3,     4,     5,     6,     7,     9,    10,    11,    12,
      13,    55,    69,    70,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    83,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   125,   126,
     127,   128,   129,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   152,   153,   160,   168,   169,   170,   288,
     291,   282,   281,   281,   281,    30,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     274,   281,   170,   288,   291,   282,    83,   160,   288,   292,
     281,    36,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   158,   281,   162,   158,   293,
      36,   131,   281,    16,   294,   277,   288,   282,   292,   288,
     281,   281,   236,   266,   158,   158,   258,   157,   158,   159,
       8,   102,   158,   158,   281,   256,   161,   154,    83,   160,
     172,   154,   159,   159,   154,   172,   185,   234,     8,   158,
       8,   158,   158,   159,   128,   208,   266,   128,   209,   158,
     158,    83,    84,    89,   299,    83,    68,   161,   161,   161,
     160,   171,   157,   161,   281,     8,   158,    83,   281,   281,
     187,   266,   157,   281,   230,   162,   281,    30,   230,   162,
     281,   230,   161,   287,   158,   287,   157,   281,   208,   162,
     161,   157,    30,   189,   281,    30,   189,   218,   259,   281,
      36,    68,   131,   211,   287,   190,    30,   160,   215,   266,
     191,   160,   177,   180,   183,   184,   154,   160,   195,   159,
     302,   173,   129,   210,   160,   173,   239,   266,    16,   162,
     281,   171,   161,   158,   232,   208,   158,   158,    74,   157,
      29,   132,   133,   173,   223,   224,   225,   226,   227,   228,
     161,   281,   161,   293,   210,   223,   187,   158,   187,   159,
     287,   293,   157,    14,   158,    30,   189,   214,   159,   216,
     159,   216,   114,   115,   193,   180,   184,     8,   161,   160,
     181,   184,   239,   266,   237,     8,   160,   281,   162,   161,
     159,   210,   189,    30,   159,   223,   228,   158,     8,    36,
     197,   158,   266,   158,   159,    95,   259,   162,   293,   211,
      30,   189,   213,   187,   216,   104,   105,   106,   216,   161,
     157,   160,   161,   183,   181,     8,   161,   160,    75,    76,
      77,    78,    79,    80,   117,   120,   161,   238,   248,   249,
     250,   251,   173,   237,   161,   266,   187,   158,   117,   269,
     225,   155,   198,   160,   269,   159,   158,   158,   158,   187,
     101,   104,   159,   281,    30,   159,   217,   161,   173,   192,
     187,   161,   184,   237,   239,    84,   252,   253,   111,   265,
     251,   161,   160,    30,   229,   157,   229,    84,   237,   229,
      30,   189,   212,   213,    99,   159,   159,   217,   187,    34,
      84,   161,   161,   159,   160,   240,    16,   266,     8,   159,
     170,   254,   255,   268,   237,   227,   267,    36,    84,   270,
     271,   267,    16,   161,   267,   187,   159,   187,   173,   158,
      83,   152,   161,   170,   173,   241,   242,   243,   244,   245,
     246,   281,   253,    16,     8,   159,   170,   161,   160,    84,
       8,   158,   160,   281,   160,    97,   160,   151,   161,   242,
     159,   159,   102,   118,   266,   281,   255,   266,   187,   271,
     187,   187,   159,   187,   170,    83,   168,   251,   239,   266,
     157,   161,   161,   161,   161,   170,   223,   267,   267,   267,
     158,   229,   267,   159,   160,   247,   187,   267,   161
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 81: /* "\"integer number (T_LNUMBER)\"" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3464 "Zend/zend_language_parser.c"
	break;
      case 82: /* "\"floating-point number (T_DNUMBER)\"" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3473 "Zend/zend_language_parser.c"
	break;
      case 83: /* "\"identifier (T_STRING)\"" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3482 "Zend/zend_language_parser.c"
	break;
      case 84: /* "\"variable (T_VARIABLE)\"" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3491 "Zend/zend_language_parser.c"
	break;
      case 85: /* "T_INLINE_HTML" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3500 "Zend/zend_language_parser.c"
	break;
      case 86: /* "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3509 "Zend/zend_language_parser.c"
	break;
      case 87: /* "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3518 "Zend/zend_language_parser.c"
	break;
      case 88: /* "\"variable name (T_STRING_VARNAME)\"" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3527 "Zend/zend_language_parser.c"
	break;
      case 89: /* "\"number (T_NUM_STRING)\"" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3536 "Zend/zend_language_parser.c"
	break;
      case 170: /* "identifier" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3545 "Zend/zend_language_parser.c"
	break;
      case 171: /* "top_statement_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3554 "Zend/zend_language_parser.c"
	break;
      case 172: /* "namespace_name" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3563 "Zend/zend_language_parser.c"
	break;
      case 173: /* "name" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3572 "Zend/zend_language_parser.c"
	break;
      case 174: /* "top_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3581 "Zend/zend_language_parser.c"
	break;
      case 178: /* "group_use_declaration" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3590 "Zend/zend_language_parser.c"
	break;
      case 179: /* "mixed_group_use_declaration" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3599 "Zend/zend_language_parser.c"
	break;
      case 180: /* "inline_use_declarations" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3608 "Zend/zend_language_parser.c"
	break;
      case 181: /* "unprefixed_use_declarations" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3617 "Zend/zend_language_parser.c"
	break;
      case 182: /* "use_declarations" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3626 "Zend/zend_language_parser.c"
	break;
      case 183: /* "inline_use_declaration" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3635 "Zend/zend_language_parser.c"
	break;
      case 184: /* "unprefixed_use_declaration" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3644 "Zend/zend_language_parser.c"
	break;
      case 185: /* "use_declaration" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3653 "Zend/zend_language_parser.c"
	break;
      case 186: /* "const_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3662 "Zend/zend_language_parser.c"
	break;
      case 187: /* "inner_statement_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3671 "Zend/zend_language_parser.c"
	break;
      case 188: /* "inner_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3680 "Zend/zend_language_parser.c"
	break;
      case 189: /* "statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3689 "Zend/zend_language_parser.c"
	break;
      case 191: /* "catch_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3698 "Zend/zend_language_parser.c"
	break;
      case 192: /* "catch_name_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3707 "Zend/zend_language_parser.c"
	break;
      case 193: /* "finally_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3716 "Zend/zend_language_parser.c"
	break;
      case 194: /* "unset_variables" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3725 "Zend/zend_language_parser.c"
	break;
      case 195: /* "unset_variable" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3734 "Zend/zend_language_parser.c"
	break;
      case 196: /* "function_declaration_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3743 "Zend/zend_language_parser.c"
	break;
      case 199: /* "class_declaration_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3752 "Zend/zend_language_parser.c"
	break;
      case 204: /* "trait_declaration_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3761 "Zend/zend_language_parser.c"
	break;
      case 206: /* "interface_declaration_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3770 "Zend/zend_language_parser.c"
	break;
      case 208: /* "extends_from" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3779 "Zend/zend_language_parser.c"
	break;
      case 209: /* "interface_extends_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3788 "Zend/zend_language_parser.c"
	break;
      case 210: /* "implements_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3797 "Zend/zend_language_parser.c"
	break;
      case 211: /* "foreach_variable" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3806 "Zend/zend_language_parser.c"
	break;
      case 212: /* "for_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3815 "Zend/zend_language_parser.c"
	break;
      case 213: /* "foreach_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3824 "Zend/zend_language_parser.c"
	break;
      case 214: /* "declare_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3833 "Zend/zend_language_parser.c"
	break;
      case 215: /* "switch_case_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3842 "Zend/zend_language_parser.c"
	break;
      case 216: /* "case_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3851 "Zend/zend_language_parser.c"
	break;
      case 218: /* "while_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3860 "Zend/zend_language_parser.c"
	break;
      case 219: /* "if_stmt_without_else" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3869 "Zend/zend_language_parser.c"
	break;
      case 220: /* "if_stmt" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3878 "Zend/zend_language_parser.c"
	break;
      case 221: /* "alt_if_stmt_without_else" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3887 "Zend/zend_language_parser.c"
	break;
      case 222: /* "alt_if_stmt" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3896 "Zend/zend_language_parser.c"
	break;
      case 223: /* "parameter_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3905 "Zend/zend_language_parser.c"
	break;
      case 224: /* "non_empty_parameter_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3914 "Zend/zend_language_parser.c"
	break;
      case 225: /* "parameter" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3923 "Zend/zend_language_parser.c"
	break;
      case 226: /* "optional_type" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3932 "Zend/zend_language_parser.c"
	break;
      case 227: /* "type_expr" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3941 "Zend/zend_language_parser.c"
	break;
      case 228: /* "type" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3950 "Zend/zend_language_parser.c"
	break;
      case 229: /* "return_type" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3959 "Zend/zend_language_parser.c"
	break;
      case 230: /* "argument_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3968 "Zend/zend_language_parser.c"
	break;
      case 231: /* "non_empty_argument_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3977 "Zend/zend_language_parser.c"
	break;
      case 232: /* "argument" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3986 "Zend/zend_language_parser.c"
	break;
      case 233: /* "global_var_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 3995 "Zend/zend_language_parser.c"
	break;
      case 234: /* "global_var" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4004 "Zend/zend_language_parser.c"
	break;
      case 235: /* "static_var_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4013 "Zend/zend_language_parser.c"
	break;
      case 236: /* "static_var" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4022 "Zend/zend_language_parser.c"
	break;
      case 237: /* "class_statement_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4031 "Zend/zend_language_parser.c"
	break;
      case 238: /* "class_statement" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4040 "Zend/zend_language_parser.c"
	break;
      case 239: /* "name_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4049 "Zend/zend_language_parser.c"
	break;
      case 240: /* "trait_adaptations" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4058 "Zend/zend_language_parser.c"
	break;
      case 241: /* "trait_adaptation_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4067 "Zend/zend_language_parser.c"
	break;
      case 242: /* "trait_adaptation" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4076 "Zend/zend_language_parser.c"
	break;
      case 243: /* "trait_precedence" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4085 "Zend/zend_language_parser.c"
	break;
      case 244: /* "trait_alias" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4094 "Zend/zend_language_parser.c"
	break;
      case 245: /* "trait_method_reference" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4103 "Zend/zend_language_parser.c"
	break;
      case 246: /* "absolute_trait_method_reference" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4112 "Zend/zend_language_parser.c"
	break;
      case 247: /* "method_body" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4121 "Zend/zend_language_parser.c"
	break;
      case 252: /* "property_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4130 "Zend/zend_language_parser.c"
	break;
      case 253: /* "property" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4139 "Zend/zend_language_parser.c"
	break;
      case 254: /* "class_const_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4148 "Zend/zend_language_parser.c"
	break;
      case 255: /* "class_const_decl" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4157 "Zend/zend_language_parser.c"
	break;
      case 256: /* "const_decl" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4166 "Zend/zend_language_parser.c"
	break;
      case 257: /* "echo_expr_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4175 "Zend/zend_language_parser.c"
	break;
      case 258: /* "echo_expr" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4184 "Zend/zend_language_parser.c"
	break;
      case 259: /* "for_exprs" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4193 "Zend/zend_language_parser.c"
	break;
      case 260: /* "non_empty_for_exprs" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4202 "Zend/zend_language_parser.c"
	break;
      case 261: /* "anonymous_class" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4211 "Zend/zend_language_parser.c"
	break;
      case 263: /* "new_expr" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4220 "Zend/zend_language_parser.c"
	break;
      case 264: /* "expr_without_variable" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4229 "Zend/zend_language_parser.c"
	break;
      case 266: /* "backup_doc_comment" */

/* Line 1000 of yacc.c  */
#line 53 "Zend/zend_language_parser.y"
	{ if ((yyvaluep->str)) zend_string_release((yyvaluep->str)); };

/* Line 1000 of yacc.c  */
#line 4238 "Zend/zend_language_parser.c"
	break;
      case 269: /* "lexical_vars" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4247 "Zend/zend_language_parser.c"
	break;
      case 270: /* "lexical_var_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4256 "Zend/zend_language_parser.c"
	break;
      case 271: /* "lexical_var" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4265 "Zend/zend_language_parser.c"
	break;
      case 272: /* "function_call" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4274 "Zend/zend_language_parser.c"
	break;
      case 273: /* "class_name" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4283 "Zend/zend_language_parser.c"
	break;
      case 274: /* "class_name_reference" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4292 "Zend/zend_language_parser.c"
	break;
      case 275: /* "exit_expr" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4301 "Zend/zend_language_parser.c"
	break;
      case 276: /* "backticks_expr" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4310 "Zend/zend_language_parser.c"
	break;
      case 277: /* "ctor_arguments" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4319 "Zend/zend_language_parser.c"
	break;
      case 278: /* "dereferencable_scalar" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4328 "Zend/zend_language_parser.c"
	break;
      case 279: /* "scalar" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4337 "Zend/zend_language_parser.c"
	break;
      case 280: /* "constant" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4346 "Zend/zend_language_parser.c"
	break;
      case 281: /* "expr" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4355 "Zend/zend_language_parser.c"
	break;
      case 282: /* "optional_expr" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4364 "Zend/zend_language_parser.c"
	break;
      case 283: /* "variable_class_name" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4373 "Zend/zend_language_parser.c"
	break;
      case 284: /* "dereferencable" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4382 "Zend/zend_language_parser.c"
	break;
      case 285: /* "callable_expr" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4391 "Zend/zend_language_parser.c"
	break;
      case 286: /* "callable_variable" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4400 "Zend/zend_language_parser.c"
	break;
      case 287: /* "variable" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4409 "Zend/zend_language_parser.c"
	break;
      case 288: /* "simple_variable" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4418 "Zend/zend_language_parser.c"
	break;
      case 289: /* "static_member" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4427 "Zend/zend_language_parser.c"
	break;
      case 290: /* "new_variable" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4436 "Zend/zend_language_parser.c"
	break;
      case 291: /* "member_name" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4445 "Zend/zend_language_parser.c"
	break;
      case 292: /* "property_name" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4454 "Zend/zend_language_parser.c"
	break;
      case 293: /* "array_pair_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4463 "Zend/zend_language_parser.c"
	break;
      case 294: /* "possible_array_pair" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4472 "Zend/zend_language_parser.c"
	break;
      case 295: /* "non_empty_array_pair_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4481 "Zend/zend_language_parser.c"
	break;
      case 296: /* "array_pair" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4490 "Zend/zend_language_parser.c"
	break;
      case 297: /* "encaps_list" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4499 "Zend/zend_language_parser.c"
	break;
      case 298: /* "encaps_var" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4508 "Zend/zend_language_parser.c"
	break;
      case 299: /* "encaps_var_offset" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4517 "Zend/zend_language_parser.c"
	break;
      case 300: /* "internal_functions_in_yacc" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4526 "Zend/zend_language_parser.c"
	break;
      case 301: /* "isset_variables" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4535 "Zend/zend_language_parser.c"
	break;
      case 302: /* "isset_variable" */

/* Line 1000 of yacc.c  */
#line 52 "Zend/zend_language_parser.y"
	{ zend_ast_destroy((yyvaluep->ast)); };

/* Line 1000 of yacc.c  */
#line 4544 "Zend/zend_language_parser.c"
	break;

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 266 "Zend/zend_language_parser.y"
    { CG(ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 285 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 286 "Zend/zend_language_parser.y"
    {
			zval zv;
			zend_lex_tstring(&zv);
			(yyval.ast) = zend_ast_create_zval(&zv);
		;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 294 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 295 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 299 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 300 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_append_str((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 304 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 305 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (3)].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 306 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); (yyval.ast)->attr = ZEND_NAME_FQ; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 310 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 311 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 312 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 313 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 314 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 316 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 320 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[(2) - (3)].ast), NULL);
			  RESET_DOC_COMMENT(); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 322 "Zend/zend_language_parser.y"
    { RESET_DOC_COMMENT(); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 324 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 325 "Zend/zend_language_parser.y"
    { RESET_DOC_COMMENT(); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 327 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[(4) - (5)].ast)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 328 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 329 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); (yyval.ast)->attr = (yyvsp[(2) - (4)].num); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 330 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); (yyval.ast)->attr = T_CLASS; ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 331 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); (yyval.ast)->attr = (yyvsp[(2) - (4)].num); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 332 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 336 "Zend/zend_language_parser.y"
    { (yyval.num) = T_FUNCTION; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 337 "Zend/zend_language_parser.y"
    { (yyval.num) = T_CONST; ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 342 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[(1) - (5)].ast), (yyvsp[(4) - (5)].ast)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 344 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast)); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 349 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[(1) - (5)].ast), (yyvsp[(4) - (5)].ast));;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 351 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 356 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 358 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 363 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 365 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 370 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 372 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 376 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); (yyval.ast)->attr = T_CLASS; ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 377 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); (yyval.ast)->attr = (yyvsp[(1) - (2)].num); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 382 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[(1) - (1)].ast), NULL); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 384 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 388 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 389 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 393 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 394 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 399 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 401 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 406 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 407 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 408 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 409 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 410 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 412 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; zend_error_noreturn(E_COMPILE_ERROR,
			      "__HALT_COMPILER() can only be used from the outermost scope"); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 418 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 419 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 420 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 422 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 424 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[(2) - (7)].ast), (yyvsp[(5) - (7)].ast)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 426 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[(3) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(9) - (9)].ast)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 428 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 429 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[(2) - (3)].ast)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 430 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[(2) - (3)].ast)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 431 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[(2) - (3)].ast)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 432 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 433 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 434 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 435 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 436 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 437 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (5)].ast); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 439 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[(3) - (7)].ast), (yyvsp[(5) - (7)].ast), NULL, (yyvsp[(7) - (7)].ast)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 442 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[(3) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(9) - (9)].ast)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 444 "Zend/zend_language_parser.y"
    { zend_handle_encoding_declaration((yyvsp[(3) - (4)].ast)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 446 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[(3) - (6)].ast), (yyvsp[(6) - (6)].ast)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 447 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 449 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), (yyvsp[(6) - (6)].ast)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 450 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[(2) - (3)].ast)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 451 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[(2) - (3)].ast)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 452 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[(1) - (2)].ast)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 457 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 459 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (9)].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[(4) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(8) - (9)].ast))); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 463 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 464 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 468 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 469 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 473 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 474 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 478 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 484 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[(2) - (13)].num) | (yyvsp[(13) - (13)].num), (yyvsp[(1) - (13)].num), (yyvsp[(4) - (13)].str),
		      zend_ast_get_str((yyvsp[(3) - (13)].ast)), (yyvsp[(6) - (13)].ast), NULL, (yyvsp[(11) - (13)].ast), (yyvsp[(8) - (13)].ast)); CG(extra_fn_flags) = (yyvsp[(9) - (13)].num); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 489 "Zend/zend_language_parser.y"
    { (yyval.num) = 0; ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 490 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_PARAM_REF; ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 494 "Zend/zend_language_parser.y"
    { (yyval.num) = 0; ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 495 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_PARAM_VARIADIC; ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 499 "Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 501 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[(1) - (10)].num), (yyvsp[(3) - (10)].num), (yyvsp[(7) - (10)].str), zend_ast_get_str((yyvsp[(4) - (10)].ast)), (yyvsp[(5) - (10)].ast), (yyvsp[(6) - (10)].ast), (yyvsp[(9) - (10)].ast), NULL); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 502 "Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 504 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[(2) - (9)].num), (yyvsp[(6) - (9)].str), zend_ast_get_str((yyvsp[(3) - (9)].ast)), (yyvsp[(4) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(8) - (9)].ast), NULL); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 508 "Zend/zend_language_parser.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 509 "Zend/zend_language_parser.y"
    { (yyval.num) = zend_add_class_modifier((yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].num)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 513 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 514 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_FINAL; ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 518 "Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 520 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[(2) - (7)].num), (yyvsp[(4) - (7)].str), zend_ast_get_str((yyvsp[(3) - (7)].ast)), NULL, NULL, (yyvsp[(6) - (7)].ast), NULL); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 524 "Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 526 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[(2) - (8)].num), (yyvsp[(5) - (8)].str), zend_ast_get_str((yyvsp[(3) - (8)].ast)), NULL, (yyvsp[(4) - (8)].ast), (yyvsp[(7) - (8)].ast), NULL); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 530 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 531 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 535 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 536 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 540 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 541 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 545 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 546 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 547 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LIST; ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 548 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 552 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 553 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (4)].ast); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 557 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 558 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (4)].ast); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 562 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 563 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (4)].ast); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 567 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 568 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 569 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (4)].ast); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 570 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (5)].ast); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 574 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 576 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (5)].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast))); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 578 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (4)].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[(4) - (4)].ast))); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 588 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 589 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (4)].ast); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 595 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast))); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 598 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (6)].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast))); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 603 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 605 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[(3) - (3)].ast))); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 610 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[(3) - (6)].ast), (yyvsp[(6) - (6)].ast))); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 613 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (7)].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[(4) - (7)].ast), (yyvsp[(7) - (7)].ast))); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 618 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (3)].ast); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 620 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (6)].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[(4) - (6)].ast))); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 625 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 626 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 632 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 634 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 639 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[(2) - (4)].num) | (yyvsp[(3) - (4)].num), (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast), NULL); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 641 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[(2) - (6)].num) | (yyvsp[(3) - (6)].num), (yyvsp[(1) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 646 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 647 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 651 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 652 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 656 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 657 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 658 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 662 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 663 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 667 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 668 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 673 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 675 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 679 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 680 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 684 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 685 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 690 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast))); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 695 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 696 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 700 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[(1) - (1)].ast), NULL); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 701 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 707 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 709 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 715 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); (yyval.ast)->attr = (yyvsp[(1) - (3)].num); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 717 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); (yyval.ast)->attr = (yyvsp[(1) - (4)].num); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 719 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[(2) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 722 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[(3) - (12)].num) | (yyvsp[(1) - (12)].num) | (yyvsp[(12) - (12)].num), (yyvsp[(2) - (12)].num), (yyvsp[(5) - (12)].str),
				  zend_ast_get_str((yyvsp[(4) - (12)].ast)), (yyvsp[(7) - (12)].ast), NULL, (yyvsp[(11) - (12)].ast), (yyvsp[(9) - (12)].ast)); CG(extra_fn_flags) = (yyvsp[(10) - (12)].num); ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 727 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 728 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 732 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 733 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 734 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 739 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 741 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 745 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 746 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 751 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 756 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 758 "Zend/zend_language_parser.y"
    { zval zv; zend_lex_tstring(&zv); (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[(1) - (3)].ast), zend_ast_create_zval(&zv)); ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 760 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[(3) - (4)].num), (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast)); ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 762 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[(3) - (3)].num), (yyvsp[(1) - (3)].ast), NULL); ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 767 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 768 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 773 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 777 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 778 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 782 "Zend/zend_language_parser.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 783 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PUBLIC; ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 787 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PUBLIC; ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 789 "Zend/zend_language_parser.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 793 "Zend/zend_language_parser.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 795 "Zend/zend_language_parser.y"
    { (yyval.num) = zend_add_member_modifier((yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].num)); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 799 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PUBLIC; ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 800 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PROTECTED; ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 801 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PRIVATE; ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 802 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_STATIC; ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 803 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_ABSTRACT; ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 804 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_FINAL; ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 808 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 809 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 814 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[(1) - (2)].ast), NULL, ((yyvsp[(2) - (2)].str) ? zend_ast_create_zval_from_str((yyvsp[(2) - (2)].str)) : NULL)); ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 816 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), ((yyvsp[(4) - (4)].str) ? zend_ast_create_zval_from_str((yyvsp[(4) - (4)].str)) : NULL)); ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 820 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 821 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 825 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), ((yyvsp[(4) - (4)].str) ? zend_ast_create_zval_from_str((yyvsp[(4) - (4)].str)) : NULL)); ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 829 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), ((yyvsp[(4) - (4)].str) ? zend_ast_create_zval_from_str((yyvsp[(4) - (4)].str)) : NULL)); ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 833 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 834 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 837 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 841 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 842 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 846 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 847 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 851 "Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 852 "Zend/zend_language_parser.y"
    {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[(2) - (9)].num), (yyvsp[(6) - (9)].str), NULL,
				(yyvsp[(4) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(8) - (9)].ast), NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[(3) - (9)].ast));
		;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 862 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[(2) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 864 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 869 "Zend/zend_language_parser.y"
    { (yyvsp[(3) - (6)].ast)->attr = ZEND_ARRAY_SYNTAX_LIST; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[(3) - (6)].ast), (yyvsp[(6) - (6)].ast)); ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 871 "Zend/zend_language_parser.y"
    { (yyvsp[(2) - (5)].ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[(2) - (5)].ast), (yyvsp[(5) - (5)].ast)); ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 873 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 875 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast)); ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 876 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 878 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_ADD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 880 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SUB, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 882 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MUL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 884 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_POW, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 886 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_DIV, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 888 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_CONCAT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 890 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MOD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 892 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 894 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 896 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_XOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 898 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 900 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 901 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[(1) - (2)].ast)); ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 902 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 903 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[(1) - (2)].ast)); ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 904 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 906 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 908 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 910 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 912 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 914 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 915 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 916 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 917 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 918 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 919 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 920 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 921 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 922 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 923 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 924 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 925 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 926 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 927 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 928 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 929 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 930 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 932 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 934 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 936 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 938 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 940 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 942 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 944 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 946 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 948 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 950 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 951 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 952 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 954 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[(1) - (5)].ast), (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 956 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[(1) - (4)].ast), NULL, (yyvsp[(4) - (4)].ast)); ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 958 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 959 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 960 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 961 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 962 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 963 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 964 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 965 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 966 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 967 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 968 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 969 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 970 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[(2) - (3)].ast)); ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 971 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 972 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 973 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[(2) - (2)].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 974 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[(4) - (4)].ast), (yyvsp[(2) - (4)].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 975 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[(2) - (2)].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 978 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[(2) - (13)].num) | (yyvsp[(13) - (13)].num), (yyvsp[(1) - (13)].num), (yyvsp[(3) - (13)].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[(5) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(8) - (13)].ast)); CG(extra_fn_flags) = (yyvsp[(9) - (13)].num); ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 983 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[(3) - (14)].num) | (yyvsp[(14) - (14)].num) | ZEND_ACC_STATIC, (yyvsp[(2) - (14)].num), (yyvsp[(4) - (14)].str),
			      zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[(6) - (14)].ast), (yyvsp[(8) - (14)].ast), (yyvsp[(12) - (14)].ast), (yyvsp[(9) - (14)].ast)); CG(extra_fn_flags) = (yyvsp[(10) - (14)].num); ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 989 "Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 993 "Zend/zend_language_parser.y"
    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 997 "Zend/zend_language_parser.y"
    { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1001 "Zend/zend_language_parser.y"
    { (yyval.num) = 0; ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1002 "Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1006 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1007 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1011 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1012 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1016 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1017 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (2)].ast); (yyval.ast)->attr = 1; ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1022 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1024 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), (yyvsp[(4) - (4)].ast)); ;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1026 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), (yyvsp[(4) - (4)].ast)); ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1028 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1033 "Zend/zend_language_parser.y"
    { zval zv; ZVAL_INTERNED_STR(&zv, CG(known_strings)[ZEND_STR_STATIC]);
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); ;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1035 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1039 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1040 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1044 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1045 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1050 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1051 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1052 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1057 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1058 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1063 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LONG; ;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1064 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; ;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1065 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1069 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1070 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1071 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1072 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); ;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1073 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); ;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1074 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); ;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1075 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); ;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1076 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); ;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1077 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); ;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1078 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); ;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1079 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1081 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); ;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1082 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1083 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1084 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1085 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1089 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1091 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1093 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1097 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1098 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1102 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1103 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1107 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1111 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1112 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1113 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1117 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1118 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1119 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1124 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1126 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); ;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1128 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); ;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1130 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); ;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1132 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), (yyvsp[(4) - (4)].ast)); ;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1133 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1138 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1140 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1142 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1146 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1147 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); ;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1148 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1153 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1155 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1160 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1162 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); ;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1164 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); ;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1166 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1168 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1170 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1174 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1175 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1176 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1180 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1181 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1182 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1187 "Zend/zend_language_parser.y"
    { /* allow single trailing comma */ (yyval.ast) = zend_ast_list_rtrim((yyvsp[(1) - (1)].ast)); ;}
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1191 "Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; ;}
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1192 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1197 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1199 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1204 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[(3) - (3)].ast), (yyvsp[(1) - (3)].ast)); ;}
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 1206 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[(1) - (1)].ast), NULL); ;}
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 1208 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[(4) - (4)].ast), (yyvsp[(1) - (4)].ast)); ;}
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 1210 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[(2) - (2)].ast), NULL); ;}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 1212 "Zend/zend_language_parser.y"
    { (yyvsp[(5) - (6)].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[(5) - (6)].ast), (yyvsp[(1) - (6)].ast)); ;}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 1215 "Zend/zend_language_parser.y"
    { (yyvsp[(3) - (4)].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[(3) - (4)].ast), NULL); ;}
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 1221 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 1223 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 1225 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 1227 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 1232 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 1234 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (4)].ast)), (yyvsp[(3) - (4)].ast)); ;}
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 1237 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (3)].ast)), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 1240 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(2) - (3)].ast)); ;}
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 1242 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(2) - (3)].ast)); ;}
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 1244 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[(2) - (6)].ast)), (yyvsp[(4) - (6)].ast)); ;}
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 1246 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 1250 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 1251 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 1252 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); ;}
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 1257 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(3) - (4)].ast); ;}
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 1258 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[(3) - (4)].ast)); ;}
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 1260 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 1262 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 1264 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[(3) - (4)].ast)); ;}
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 1266 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 1268 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[(2) - (2)].ast)); ;}
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 1272 "Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 1274 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); ;}
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 1278 "Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[(1) - (1)].ast)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 7804 "Zend/zend_language_parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1281 "Zend/zend_language_parser.y"


/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	/* CG(parse_error) states:
	 * 0 => yyres = NULL, yystr is the unexpected token
	 * 1 => yyres = NULL, yystr is one of the expected tokens
	 * 2 => yyres != NULL, yystr is the unexpected token
	 * 3 => yyres != NULL, yystr is one of the expected tokens
	 */
	if (yyres && CG(parse_error) < 2) {
		CG(parse_error) = 2;
	}

	if (CG(parse_error) % 2 == 0) {
		/* The unexpected token */
		char buffer[120];
		const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
		unsigned int len = 0, toklen = 0, yystr_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		str = LANG_SCNG(yy_text);
		end = memchr(str, '\n', LANG_SCNG(yy_leng));
		yystr_len = (unsigned int)yystrlen(yystr);

		if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
			&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
			toklen = (tok2 - tok1) + 1;
		} else {
			tok1 = tok2 = NULL;
			toklen = 0;
		}

		if (end == NULL) {
			len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
		} else {
			len = (end - str) > 30 ? 30 : (end - str);
		}
		if (yyres) {
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
		}
		return len + (toklen ? toklen + 1 : 0) + 2;
	}

	/* One of the expected tokens */
	if (!yyres) {
		return yystrlen(yystr) - (*yystr == '"' ? 2 : 0);
	}

	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

