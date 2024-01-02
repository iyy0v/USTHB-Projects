
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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "synt.y"

    
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "pgm.h"

  int yylex(void);
  int yyerror(char* s);

  int nb_lignes; 
  int col;
  int i,t;
  char idfType[20];
  int inStruct;
  int isElse;

  char sauvIdf[50][50];
  char sauvType[20][50];
  int sauvTaille[50];
  char sauvTypeAff[20];
  int isAffect;
  int qc;
  int sauvQc;
  int tc;
  int cc;


/* Line 189 of yacc.c  */
#line 30 "synt.y"

int yylex();


/* Line 189 of yacc.c  */
#line 108 "synt.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_var = 258,
     mc_code = 259,
     mc_integer = 260,
     mc_float = 261,
     mc_const = 262,
     mc_struct = 263,
     mc_if = 264,
     mc_else = 265,
     mc_for = 266,
     mc_while = 267,
     acc_1 = 268,
     acc_2 = 269,
     virgule = 270,
     p_virgule = 271,
     bracket_1 = 272,
     bracket_2 = 273,
     aff = 274,
     point = 275,
     par_1 = 276,
     par_2 = 277,
     d_point = 278,
     plus = 279,
     minus = 280,
     multi = 281,
     divi = 282,
     and = 283,
     or = 284,
     not = 285,
     gt = 286,
     get = 287,
     lt = 288,
     let = 289,
     eq = 290,
     neq = 291,
     idf = 292,
     comment = 293,
     cstInt = 294,
     cstReel = 295,
     err = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 35 "synt.y"
 
    int entier; 
    float reel;
    char* str;



/* Line 214 of yacc.c  */
#line 193 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "synt.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    15,    18,    20,    22,    24,    26,
      30,    36,    42,    44,    46,    49,    53,    55,    57,    62,
      69,    71,    74,    76,    80,    83,    84,    86,    88,    90,
      92,    97,    99,   104,   109,   113,   120,   127,   134,   141,
     151,   161,   163,   165,   169,   173,   177,   181,   185,   187,
     191,   196,   201,   208,   215,   222,   229,   239,   249,   255,
     261,   265,   271,   275,   279,   283,   285,   290,   294,   298,
     302,   306,   310,   314,   319,   330,   336,   339
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    37,    13,     3,    44,     4,    55,    14,
      -1,    13,    45,    14,    -1,    46,    45,    -1,    46,    -1,
      47,    -1,    48,    -1,    52,    -1,    49,    50,    16,    -1,
       7,    37,    19,    39,    16,    -1,     7,    37,    19,    40,
      16,    -1,     5,    -1,     6,    -1,     8,    37,    -1,    51,
      15,    50,    -1,    51,    -1,    37,    -1,    37,    17,    39,
      18,    -1,    53,    13,    54,    14,    37,    16,    -1,     8,
      -1,    47,    54,    -1,    47,    -1,    13,    56,    14,    -1,
      57,    56,    -1,    -1,    58,    -1,    61,    -1,    66,    -1,
      68,    -1,    59,    19,    60,    16,    -1,    37,    -1,    37,
      17,    39,    18,    -1,    37,    17,    37,    18,    -1,    37,
      20,    37,    -1,    37,    20,    37,    17,    39,    18,    -1,
      37,    20,    37,    17,    37,    18,    -1,    37,    17,    39,
      18,    20,    37,    -1,    37,    17,    37,    18,    20,    37,
      -1,    37,    17,    39,    18,    20,    37,    17,    39,    18,
      -1,    37,    17,    37,    18,    20,    37,    17,    37,    18,
      -1,    39,    -1,    40,    -1,    60,    26,    60,    -1,    60,
      27,    60,    -1,    60,    24,    60,    -1,    60,    25,    60,
      -1,    21,    60,    22,    -1,    37,    -1,    37,    20,    37,
      -1,    37,    17,    39,    18,    -1,    37,    17,    37,    18,
      -1,    37,    20,    37,    17,    39,    18,    -1,    37,    20,
      37,    17,    37,    18,    -1,    37,    17,    39,    18,    20,
      37,    -1,    37,    17,    37,    18,    20,    37,    -1,    37,
      17,    39,    18,    20,    37,    17,    39,    18,    -1,    37,
      17,    37,    18,    20,    37,    17,    37,    18,    -1,    62,
      22,    13,    56,    14,    -1,    63,    10,    13,    56,    14,
      -1,     9,    21,    64,    -1,    62,    22,    13,    56,    14,
      -1,    64,    28,    64,    -1,    64,    29,    64,    -1,    21,
      64,    22,    -1,    65,    -1,    30,    21,    64,    22,    -1,
      60,    31,    60,    -1,    60,    32,    60,    -1,    60,    33,
      60,    -1,    60,    34,    60,    -1,    60,    35,    60,    -1,
      60,    36,    60,    -1,    67,    13,    56,    14,    -1,    11,
      21,    37,    23,    60,    23,    39,    23,    60,    22,    -1,
      70,    22,    13,    56,    14,    -1,    12,    21,    -1,    69,
      64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    70,    72,    73,    75,    76,    77,    80,
      83,    92,   103,   116,   129,   149,   150,   153,   169,   195,
     229,   233,   234,   237,   240,   241,   243,   244,   245,   246,
     248,   254,   263,   278,   293,   306,   325,   344,   365,   387,
     414,   444,   453,   459,   466,   473,   480,   487,   490,   497,
     513,   533,   553,   576,   599,   623,   649,   680,   715,   721,
     730,   736,   751,   775,   798,   801,   804,   813,   831,   849,
     867,   885,   908,   935,   948,   967,   981,   986
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_var", "mc_code", "mc_integer",
  "mc_float", "mc_const", "mc_struct", "mc_if", "mc_else", "mc_for",
  "mc_while", "acc_1", "acc_2", "virgule", "p_virgule", "bracket_1",
  "bracket_2", "aff", "point", "par_1", "par_2", "d_point", "plus",
  "minus", "multi", "divi", "and", "or", "not", "gt", "get", "lt", "let",
  "eq", "neq", "idf", "comment", "cstInt", "cstReel", "err", "$accept",
  "S", "DECSEG", "DECLIST", "DEC", "VARDEC", "CONSTDEC", "TYPE", "VARLIST",
  "VARIABLE", "STRUCTDEF", "STRCT", "STRUCTDEFLIST", "CODESEG", "INSTLIST",
  "INST", "AFFECTATION", "IDFAFF", "EXPRESSION", "IFINST", "IFINST_1",
  "IFINST_2", "CONDITION", "COMP", "FORINST", "FORINST_1", "WHILEINST",
  "WHILEINST_1", "WHILEINST_2", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    45,    45,    46,    46,    46,    47,
      48,    48,    49,    49,    49,    50,    50,    51,    51,    52,
      53,    54,    54,    55,    56,    56,    57,    57,    57,    57,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    61,    61,
      62,    63,    64,    64,    64,    64,    64,    65,    65,    65,
      65,    65,    65,    66,    67,    68,    69,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     3,     2,     1,     1,     1,     1,     3,
       5,     5,     1,     1,     2,     3,     1,     1,     4,     6,
       1,     2,     1,     3,     2,     0,     1,     1,     1,     1,
       4,     1,     4,     4,     3,     6,     6,     6,     6,     9,
       9,     1,     1,     3,     3,     3,     3,     3,     1,     3,
       4,     4,     6,     6,     6,     6,     9,     9,     5,     5,
       3,     5,     3,     3,     3,     1,     4,     3,     3,     3,
       3,     3,     3,     4,    10,     5,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,    12,    13,
       0,    20,     0,     5,     6,     7,     0,     8,     0,     0,
       0,    14,     3,     4,    17,     0,    16,     0,    25,     0,
       0,     0,     9,     0,     0,    22,     0,     0,     0,     0,
      31,     0,    25,    26,     0,    27,     0,     0,    28,     0,
      29,     0,     0,     2,     0,     0,     0,    15,    21,     0,
       0,     0,    76,     0,     0,    23,    24,     0,     0,     0,
      25,     0,     0,    48,    41,    42,     0,    77,    65,     0,
      10,    11,    18,     0,    60,     0,     0,     0,    34,     0,
       0,    25,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    19,     0,    33,    32,     0,     0,    30,     0,
       0,    73,    47,    64,     0,     0,     0,    49,    45,    46,
      43,    44,    67,    68,    69,    70,    71,    72,    62,    63,
       0,     0,     0,     0,     0,     0,    58,    59,    66,    51,
      50,     0,    75,     0,    38,    37,    36,    35,     0,     0,
       0,     0,     0,     0,     0,    55,    54,    53,    52,     0,
       0,     0,     0,     0,     0,    40,    39,     0,     0,    74,
      57,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    12,    13,    14,    15,    16,    25,    26,
      17,    18,    36,    29,    41,    42,    43,    44,    76,    45,
      46,    47,    77,    78,    48,    49,    50,    51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const yytype_int16 yypact[] =
{
     -34,    -5,    20,    23,   -68,    36,   103,    39,   -68,   -68,
      45,    54,    43,   103,   -68,   -68,    60,   -68,   104,   114,
     109,   -68,   -68,   -68,   112,   115,   117,    55,     7,   116,
      -9,    94,   -68,    60,    54,    55,   120,   118,   119,   121,
      28,   122,     7,   -68,   124,   -68,   113,   127,   -68,   125,
     -68,   -16,   123,   -68,   128,   130,   129,   -68,   -68,   111,
     -16,   126,   -68,    44,   131,   -68,   -68,   -12,   136,   137,
       7,   -16,   132,    99,   -68,   -68,    53,    97,   -68,   138,
     -68,   -68,   -68,   139,    97,   133,   134,   140,   142,   -12,
     -14,     7,     7,   143,    40,    25,   -16,    81,   135,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -16,
     -16,     7,   -68,   -12,   141,   144,    84,    68,   -68,   146,
     148,   -68,   -68,   -68,    30,   147,   149,   152,    42,    42,
     -68,   -68,    88,    88,    88,    88,    88,    88,   145,   -68,
     156,    80,   150,   151,   153,   155,   165,   -68,   -68,   157,
     158,    85,   -68,   102,   159,   162,   -68,   -68,   154,   160,
     163,   164,   161,   166,   167,   168,   169,   -68,   -68,   -12,
     171,   172,   170,   173,    74,   -68,   -68,   174,   175,   -68,
     -68,   -68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   -68,   181,   -68,   -20,   -68,   -68,   176,   -68,
     -68,   -68,   178,   -68,   -41,   -68,   -68,   -68,   -67,   -68,
     -68,   -68,   -54,   -68,   -68,   -68,   -68,   -68,   -68
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -62
static const yytype_int16 yytable[] =
{
      90,    66,   118,     1,    94,    71,    84,    35,     3,    89,
      99,   100,   101,   102,    72,    35,    37,    95,    38,    39,
       4,    73,   117,    74,    75,    73,     5,    74,    75,    93,
      54,    55,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   124,    19,    40,    63,   141,   123,    64,     6,
     119,   120,   148,   109,   110,   138,   139,    22,   109,   110,
       8,     9,   122,    34,    99,   100,   101,   102,   101,   102,
     140,   103,   104,   105,   106,   107,   108,    99,   100,   101,
     102,    86,    20,    87,   103,   104,   105,   106,   107,   108,
     122,    21,    99,   100,   101,   102,   179,    24,    99,   100,
     101,   102,   174,   153,    99,   100,   101,   102,     8,     9,
      10,    11,    99,   100,   101,   102,    97,    27,   125,    98,
     126,   144,   160,   145,   161,   109,   110,    28,    30,    31,
      53,    32,    33,    56,    59,    68,    65,    69,    70,    60,
      61,   162,    62,    67,    80,    79,    81,    82,    83,    91,
      92,   111,   114,    96,     0,   112,   113,   121,   115,   116,
     146,   142,   147,    85,   143,   149,     0,   150,    88,   151,
     152,   156,   127,   157,   110,   -61,   163,   158,   159,   164,
       0,   167,   168,     0,   169,   172,   173,   154,   155,   175,
     176,   165,   180,   181,    23,     0,     0,   166,     0,     0,
       0,     0,     0,   170,     0,     0,   171,   177,     0,    57,
       0,     0,   178,    58
};

static const yytype_int16 yycheck[] =
{
      67,    42,    16,    37,    71,    21,    60,    27,    13,    21,
      24,    25,    26,    27,    30,    35,     9,    71,    11,    12,
       0,    37,    89,    39,    40,    37,     3,    39,    40,    70,
      39,    40,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    96,     4,    37,    17,   113,    22,    20,    13,
      91,    92,    22,    28,    29,   109,   110,    14,    28,    29,
       5,     6,    22,     8,    24,    25,    26,    27,    26,    27,
     111,    31,    32,    33,    34,    35,    36,    24,    25,    26,
      27,    37,    37,    39,    31,    32,    33,    34,    35,    36,
      22,    37,    24,    25,    26,    27,    22,    37,    24,    25,
      26,    27,   169,    23,    24,    25,    26,    27,     5,     6,
       7,     8,    24,    25,    26,    27,    17,    13,    37,    20,
      39,    37,    37,    39,    39,    28,    29,    13,    19,    17,
      14,    16,    15,    39,    14,    22,    14,    10,    13,    21,
      21,    39,    21,    19,    16,    22,    16,    18,    37,    13,
      13,    13,    18,    21,    -1,    16,    23,    14,    18,    17,
      14,    20,    14,    37,    20,    18,    -1,    18,    37,    17,
      14,    18,    37,    18,    29,    10,    17,    20,    20,    17,
      -1,    18,    18,    -1,    23,    17,    17,    37,    37,    18,
      18,    37,    18,    18,    13,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    39,    37,    -1,    33,
      -1,    -1,    39,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    43,    13,     0,     3,    13,    44,     5,     6,
       7,     8,    45,    46,    47,    48,    49,    52,    53,     4,
      37,    37,    14,    45,    37,    50,    51,    13,    13,    55,
      19,    17,    16,    15,     8,    47,    54,     9,    11,    12,
      37,    56,    57,    58,    59,    61,    62,    63,    66,    67,
      68,    69,    70,    14,    39,    40,    39,    50,    54,    14,
      21,    21,    21,    17,    20,    14,    56,    19,    22,    10,
      13,    21,    30,    37,    39,    40,    60,    64,    65,    22,
      16,    16,    18,    37,    64,    37,    37,    39,    37,    21,
      60,    13,    13,    56,    60,    64,    21,    17,    20,    24,
      25,    26,    27,    31,    32,    33,    34,    35,    36,    28,
      29,    13,    16,    23,    18,    18,    17,    60,    16,    56,
      56,    14,    22,    22,    64,    37,    39,    37,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    64,    64,
      56,    60,    20,    20,    37,    39,    14,    14,    22,    18,
      18,    17,    14,    23,    37,    37,    18,    18,    20,    20,
      37,    39,    39,    17,    17,    37,    37,    18,    18,    23,
      37,    39,    17,    17,    60,    18,    18,    37,    39,    22,
      18,    18
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
#line 65 "synt.y"
    {
                insererTYPE((yyvsp[(1) - (7)].str), "PROGRAM ID");
                quadr("", "", "", "");
            ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 83 "synt.y"
    {
                if(doubleDeclaration((yyvsp[(2) - (5)].str)) != 0) printf("\nErreur semantique %d:%d - %s: Variable deja declaree.\n", nb_lignes, col, (yyvsp[(2) - (5)].str));
                else{ 
                     insererTYPE((yyvsp[(2) - (5)].str), "INTEGER");
                     char temp[50];
                     sprintf(temp, "%d", (yyvsp[(4) - (5)].entier));
                     setConst((yyvsp[(2) - (5)].str), temp);
                }
            ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 92 "synt.y"
    {
                if(doubleDeclaration((yyvsp[(2) - (5)].str)) != 0) printf("\nErreur semantique %d:%d - %s: Variable deja declaree.\n", nb_lignes, col, (yyvsp[(2) - (5)].str));
                else{ 
                     insererTYPE((yyvsp[(2) - (5)].str), "FLOAT");
                     char temp[50];
                     sprintf(temp, "%f", (yyvsp[(4) - (5)].reel));
                     setConst((yyvsp[(2) - (5)].str), temp);
                }
            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 103 "synt.y"
    {
        if(inStruct){
            int s=t;
            for(int s=t; s<=i; s++){
                sprintf(sauvType[s], "INTEGER");
                t = s;
            }
            t++;
        }
        else{
            sprintf(idfType, "INTEGER");
        }
    ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 116 "synt.y"
    {
        if(inStruct){
            int s = t;
            for(s=t; s<=i; s++){
                sprintf(sauvType[s], "FLOAT");
                t = s;
            }
            t++;
        }
        else{
            sprintf(idfType, "FLOAT");
        }
    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 129 "synt.y"
    {
        if(isStruct((yyvsp[(2) - (2)].str))){
            if(inStruct){
                int s = t;
                for(s=t; s<=i; s++){
                    sprintf(sauvType[s], (yyvsp[(2) - (2)].str));
                    t = s;
                }
                t++;
            }
            else{
                sprintf(idfType, (yyvsp[(2) - (2)].str));
            }
        }
        else{
            printf("\nErreur semantique %d:%d - %s: Type inconnu.\n", nb_lignes, col, (yyvsp[(2) - (2)].str));
        }
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 153 "synt.y"
    {
        if(inStruct){
            sauvTaille[i] = 0;
            sprintf(sauvIdf[i], "%s", (yyvsp[(1) - (1)].str));
            i++;
        }
        else{
            if(doubleDeclaration((yyvsp[(1) - (1)].str)) != 0) printf("\nErreur semantique %d:%d - %s: Variable deja declaree.\n", nb_lignes, col, (yyvsp[(1) - (1)].str));
            else{ 
                insererTYPE((yyvsp[(1) - (1)].str), idfType);
                if(isStruct(idfType)){
                    insertStruct((yyvsp[(1) - (1)].str), idfType);
                }
            }
        }
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 169 "synt.y"
    {
        if(inStruct){
            char temp[50];
            sauvTaille[i] = (yyvsp[(3) - (4)].entier);
            sprintf(temp, "%s", sauvType[i]);
            sprintf(sauvType[i], "ARRAY OF %s", temp);
            sprintf(sauvIdf[i], "%s", (yyvsp[(1) - (4)].str));
            i++;
        }
        else{
            if(doubleDeclaration((yyvsp[(1) - (4)].str)) != 0) printf("\nErreur semantique %d:%d - %s: Variable deja declaree.\n", nb_lignes, col, (yyvsp[(1) - (4)].str));
            else if((yyvsp[(3) - (4)].entier) <= 0) printf("\nErreur semantique %d:%d - Taille tableau negative.\n", nb_lignes, col);
            else{ 
                char temp[50];
                sprintf(temp, "ARRAY OF %s", idfType);
                insererTYPE((yyvsp[(1) - (4)].str), temp);
                setArraySize((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].entier));

                if(isStruct(idfType)){
                    insertStruct((yyvsp[(1) - (4)].str), idfType);
                }
            }
        }
    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 195 "synt.y"
    {
        if(doubleDeclaration((yyvsp[(5) - (6)].str)) != 0) printf("\nErreur semantique %d:%d - %s: Nom de structure invalide.\n", nb_lignes, col, (yyvsp[(5) - (6)].str));
        else{ 
            insererTYPE((yyvsp[(5) - (6)].str), "STRUCT");
        }

        int ds = 0, k=0;
        while(ds==0 && k<i){
            for(int j=k+1; j<i; j++){
                if(strcmp(sauvIdf[k], sauvIdf[j]) == 0){
                    ds = 1;
                    break;
                }
            }
            k++;
        }
        if(ds) printf("\nErreur semantique %d:%d - %s.%s: Variable deja declaree.\n", nb_lignes, col, (yyvsp[(5) - (6)].str), sauvIdf[k]);
        else{
            for(int j=0; j<i; j++) {
                char temp[50];
                sprintf(temp, "%s.%s", (yyvsp[(5) - (6)].str), sauvIdf[j]);
                lookup (temp,"IDF","",0, 0); 
                insererTYPE(temp, sauvType[j]);
                setParent(temp, (yyvsp[(5) - (6)].str));
                setArraySize(temp, sauvTaille[j]);
            }
        }

        inStruct = 0;
        i=0;
        t=0;
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 229 "synt.y"
    {
    inStruct = 1;
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 248 "synt.y"
    {
                isAffect = 0;
                quadr(":=", (yyvsp[(3) - (4)].str), "", (yyvsp[(1) - (4)].str));
            ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 254 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (1)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (1)].str));
            else if(isConst((yyvsp[(1) - (1)].str))) printf("\nErreur semantique %d:%d: (%s) Constante deja initialisee.\n", nb_lignes, col, (yyvsp[(1) - (1)].str));
            else{
                sprintf(sauvTypeAff, "%s", getType((yyval.str)));
                isAffect = 1;
                (yyval.str) = strdup((yyvsp[(1) - (1)].str));
            }
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 263 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (4)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (4)].str));
            else{
                if(!isArray((yyvsp[(1) - (4)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (4)].str));
                else if(isOutOfRange((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    sprintf(sauvTypeAff, "%s", arrayElementType((yyvsp[(1) - (4)].str)));
                    isAffect = 1;

                    char temp[50];
                    sprintf(temp, "%s[%d]", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].entier));
                    (yyval.str) = strdup(temp);
                }
            }
        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 278 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (4)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (4)].str));
            else{
                if(!isArray((yyvsp[(1) - (4)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (4)].str));
                else if(cmpType((yyvsp[(3) - (4)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    sprintf(sauvTypeAff, "%s", arrayElementType((yyvsp[(1) - (4)].str)));
                    isAffect = 1;

                    char temp[50];
                    sprintf(temp, "%s[%s]", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].str));
                    (yyval.str) = strdup(temp);
                }
            }
        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 293 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (3)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (3)].str));
            else{
                char temp[50];
                sprintf(temp, "%s.%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    sprintf(sauvTypeAff, "%s", getType(temp));
                    isAffect = 1;
                    (yyval.str) = strdup(temp);
                }
            }
        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 306 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (6)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
            else{
                char temp[50];
                sprintf(temp, "%s.%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].str));
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                    else if(isOutOfRange(temp, (yyvsp[(5) - (6)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                    else{
                        sprintf(sauvTypeAff, "%s", arrayElementType(temp));
                        isAffect = 1;

                        sprintf(temp, "%s[%d]", temp, (yyvsp[(5) - (6)].entier));
                        (yyval.str) = strdup(temp);
                    }
                }
            }
        ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 325 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (6)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
            else{
                char temp[50];
                sprintf(temp, "%s.%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].str));
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                    else if(cmpType((yyvsp[(5) - (6)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                    else{
                        sprintf(sauvTypeAff, "%s", arrayElementType(temp));
                        isAffect = 1;

                        sprintf(temp, "%s[%s]", temp, (yyvsp[(5) - (6)].str));
                        (yyval.str) = strdup(temp);
                    }
                }
            }
        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 344 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (6)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
            else{
                if(!isArray((yyvsp[(1) - (6)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
                else if(isOutOfRange((yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    isAffect = 1;

                    char temp[50];
                    sprintf(temp, "%s.%s", (yyvsp[(1) - (6)].str), (yyvsp[(6) - (6)].str));
                    sprintf(sauvTypeAff, "%s", getType(temp));

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{
                        sprintf(temp, "%s[%d].%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].entier), (yyvsp[(6) - (6)].str));
                        (yyval.str) = strdup(temp);
                    }
                    
                }
            }
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 365 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (6)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
            else{
                if(!isArray((yyvsp[(1) - (6)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
                else if(cmpType((yyvsp[(3) - (6)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    
                    char temp[50];
                    sprintf(temp, "%s.%s", (yyvsp[(1) - (6)].str), (yyvsp[(6) - (6)].str));
                    sprintf(sauvTypeAff, "%s", getType(temp));

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{
                        isAffect = 1;
                        sprintf(temp, "%s[%s].%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(6) - (6)].str));
                        (yyval.str) = strdup(temp);
                    }
                    
                }
                
            }
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 387 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (9)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (9)].str));
            else{
                if(!isArray((yyvsp[(1) - (9)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (9)].str));
                else if(isOutOfRange((yyvsp[(1) - (9)].str), (yyvsp[(3) - (9)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", (yyvsp[(1) - (9)].str), (yyvsp[(6) - (9)].str));

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{

                        if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                        else if(isOutOfRange(temp, (yyvsp[(8) - (9)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                        else{
                            sprintf(sauvTypeAff, "%s", arrayElementType(temp));
                            isAffect = 1;

                            sprintf(temp, "%s[%d].%s[%d]", (yyvsp[(1) - (9)].str), (yyvsp[(3) - (9)].entier), (yyvsp[(6) - (9)].str), (yyvsp[(8) - (9)].entier));
                            (yyval.str) = strdup(temp);
                        }
                    }
                    
                }
                
            }
        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 414 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (9)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (9)].str));
            else{
                if(!isArray((yyvsp[(1) - (9)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (9)].str));
                else if(cmpType((yyvsp[(3) - (9)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", (yyvsp[(1) - (9)].str), (yyvsp[(6) - (9)].str));

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{

                        if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                        else if(cmpType((yyvsp[(8) - (9)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                        else{
                            sprintf(sauvTypeAff, "%s", arrayElementType(temp));
                            isAffect = 1;

                            sprintf(temp, "%s[%s].%s[%s]", (yyvsp[(1) - (9)].str), (yyvsp[(3) - (9)].str), (yyvsp[(6) - (9)].str), (yyvsp[(8) - (9)].str));
                            (yyval.str) = strdup(temp);
                        }
                    }
                    
                }
                
            }
        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 444 "synt.y"
    {
            if(isAffect){
                if(!isCompatible(sauvTypeAff, "INTEGER")) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
            }

            char temp[50];
            sprintf(temp, "%d", (yyvsp[(1) - (1)].entier));
            (yyval.str) = strdup(temp);
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 453 "synt.y"
    {
            if(isAffect){
                if(!isCompatible(sauvTypeAff, "FLOAT")) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
            }
            sprintf((yyval.str), "%f", (yyvsp[(1) - (1)].reel));
         ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 459 "synt.y"
    {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("*", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), temp);
            sprintf((yyval.str), "%s", temp);
         ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 466 "synt.y"
    {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("/", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), temp);
            sprintf((yyval.str), "%s", temp);
         ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 473 "synt.y"
    {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("+", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), temp);
            sprintf((yyval.str), "%s", temp);
         ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 480 "synt.y"
    {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("-", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), temp);
            sprintf((yyval.str), "%s", temp);
         ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 487 "synt.y"
    {
            sprintf((yyval.str), "%s", (yyvsp[(2) - (3)].str));
         ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 490 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (1)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (1)].str));
            if(isAffect){
                if(!isCompatible(sauvTypeAff, getType((yyvsp[(1) - (1)].str)))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
            }
            sprintf((yyval.str), "%s", (yyvsp[(1) - (1)].str));
         ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 497 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (3)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (3)].str));
            else{
                char temp[50];
                sprintf(temp, "%s.%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else if(isAffect){
                    if(!isCompatible(sauvTypeAff, getType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                    else{
                        sprintf((yyval.str), "%s", temp);
                    }
                }

                sprintf((yyval.str), "%s", temp);
            }
         ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 513 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (4)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (4)].str));
            else{
                if(!isArray((yyvsp[(1) - (4)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (4)].str));
                else if(isOutOfRange((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else if(isAffect){
                    if(!isCompatible(sauvTypeAff, arrayElementType((yyvsp[(1) - (4)].str)))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                    else{
                        char temp[50];
                        sprintf(temp, "%s[%d]", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].entier));
                        (yyval.str) = strdup(temp);
                    }
                }
                else{
                    char temp[50];
                    sprintf(temp, "%s[%d]", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].entier));
                    (yyval.str) = strdup(temp);
                }
            }
         ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 533 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (4)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (4)].str));
            else{
                if(!isArray((yyvsp[(1) - (4)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (4)].str));
                else if(cmpType((yyvsp[(3) - (4)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else if(isAffect){
                    if(!isCompatible( sauvTypeAff, arrayElementType((yyvsp[(1) - (4)].str)))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                    else{
                        char temp[50];
                        sprintf(temp, "%s[%s]", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].str));
                        (yyval.str) = strdup(temp);
                    }
                }
                else{
                    char temp[50];
                    sprintf(temp, "%s[%s]", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].str));
                    (yyval.str) = strdup(temp);
                }
            }
        ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 553 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (6)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
            else{
                char temp[50];
                sprintf(temp, "%s.%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].str));
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                    else if(isOutOfRange(temp, (yyvsp[(5) - (6)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                    else if(isAffect){
                        if(!isCompatible(sauvTypeAff, arrayElementType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                        else{
                            sprintf(temp, "%s[%d]", temp, (yyvsp[(5) - (6)].entier));
                            (yyval.str) = strdup(temp);
                        }
                    }
                    else{
                        sprintf(temp, "%s[%d]", temp, (yyvsp[(5) - (6)].entier));
                        (yyval.str) = strdup(temp);
                    }
                }
            }
        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 576 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (6)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
            else{
                char temp[50];
                sprintf(temp, "%s.%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].str));
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                    else if(cmpType((yyvsp[(5) - (6)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                    else if(isAffect){
                        if(!isCompatible(sauvTypeAff, arrayElementType((yyvsp[(3) - (6)].str)))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                        else{
                            sprintf(temp, "%s[%s]", temp, (yyvsp[(5) - (6)].str));
                            (yyval.str) = strdup(temp);
                        }
                    }
                    else{
                        sprintf(temp, "%s[%s]", temp, (yyvsp[(5) - (6)].str));
                        (yyval.str) = strdup(temp);
                    }
                }
            }
        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 599 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (6)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
            else{
                if(!isArray((yyvsp[(1) - (6)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
                else if(isOutOfRange((yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", (yyvsp[(1) - (6)].str), (yyvsp[(6) - (6)].str));
                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else if(isAffect){
                        if(!isCompatible(sauvTypeAff, getType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                        else{
                            sprintf(temp, "%s[%d].%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].entier), (yyvsp[(6) - (6)].str));
                            (yyval.str) = strdup(temp);
                        }
                    }
                    else{
                        sprintf(temp, "%s[%d].%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].entier), (yyvsp[(6) - (6)].str));
                        (yyval.str) = strdup(temp);
                    }
                    
                }
            }
        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 623 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (6)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
            else{
                if(!isArray((yyvsp[(1) - (6)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (6)].str));
                else if(cmpType((yyvsp[(3) - (6)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", (yyvsp[(1) - (6)].str), (yyvsp[(6) - (6)].str));

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else if(isAffect){
                        if(!isCompatible(sauvTypeAff, getType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                        else{
                            sprintf(temp, "%s[%s].%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(6) - (6)].str));
                            (yyval.str) = strdup(temp);
                        }
                    }
                    else{
                        sprintf(temp, "%s[%s].%s", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(6) - (6)].str));
                        (yyval.str) = strdup(temp);
                    }
                    
                }
                
            }
        ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 649 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (9)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (9)].str));
            else{
                if(!isArray((yyvsp[(1) - (9)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (9)].str));
                else if(isOutOfRange((yyvsp[(1) - (9)].str), (yyvsp[(3) - (9)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", (yyvsp[(1) - (9)].str), (yyvsp[(6) - (9)].str));

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{

                        if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                        else if(isOutOfRange(temp, (yyvsp[(8) - (9)].entier))) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                        else if(isAffect){
                            if(!isCompatible(sauvTypeAff, arrayElementType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                            else{
                                sprintf(temp, "%s[%d].%s[%d]", (yyvsp[(1) - (9)].str), (yyvsp[(3) - (9)].entier), (yyvsp[(6) - (9)].str), (yyvsp[(8) - (9)].entier));
                                (yyval.str) = strdup(temp);
                            }
                        }
                        else{
                            sprintf(temp, "%s[%d].%s[%d]", (yyvsp[(1) - (9)].str), (yyvsp[(3) - (9)].entier), (yyvsp[(6) - (9)].str), (yyvsp[(8) - (9)].entier));
                            (yyval.str) = strdup(temp);
                        }
                    }
                    
                }
                
            }
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 680 "synt.y"
    {
            if(doubleDeclaration((yyvsp[(1) - (9)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(1) - (9)].str));
            else{
                if(!isArray((yyvsp[(1) - (9)].str))) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, (yyvsp[(1) - (9)].str));
                else if(cmpType((yyvsp[(3) - (9)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", (yyvsp[(1) - (9)].str), (yyvsp[(6) - (9)].str));

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{

                        if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                        else if(cmpType((yyvsp[(8) - (9)].str), "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                        else if(isAffect){
                            if(!isCompatible(sauvTypeAff, arrayElementType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                            else{
                                sprintf(temp, "%s[%s].%s[%s]", (yyvsp[(1) - (9)].str), (yyvsp[(3) - (9)].str), (yyvsp[(6) - (9)].str), (yyvsp[(8) - (9)].str));
                                (yyval.str) = strdup(temp);
                            }
                        }
                        else{

                            sprintf(temp, "%s[%s].%s[%s]", (yyvsp[(1) - (9)].str), (yyvsp[(3) - (9)].str), (yyvsp[(6) - (9)].str), (yyvsp[(8) - (9)].str));
                            (yyval.str) = strdup(temp);
                        }
                    }
                    
                }
                
            }
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 715 "synt.y"
    {
            char temp[50];
            sprintf(temp, "%d", qc);
            int x = pop(1);
            ajouter_quad(x, 1, temp);
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 721 "synt.y"
    {
            char temp[50];
            sprintf(temp, "%d", qc);
            int x = pop(2);
            ajouter_quad(x, 1, temp);
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 730 "synt.y"
    {
            push(1, qc);
            quadr("BZ", "", (yyvsp[(3) - (3)].str), "");
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 736 "synt.y"
    {

            push(2, qc);
            quadr("BR", "", "", "");

            char temp[50];
            sprintf(temp, "%d", qc);
            
            int x = pop(1);
            ajouter_quad(x, 1, temp);
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 751 "synt.y"
    {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("*", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), temp);

            char temp2[50];
            sprintf(temp2, "t%d", tc);
            tc++;

            char tempQc[50];
            sprintf(tempQc, "%d", qc+3);
            quadr("BZ", tempQc, temp, "");

            quadr(":=", "1", "", temp2);

            sprintf(tempQc, "%d", qc+2);
            quadr("BR", tempQc, "", "");

            quadr(":=", "0", "", temp2);

            sprintf((yyval.str), "%s", temp2);
            
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 775 "synt.y"
    {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("+", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), temp);

            char temp2[50];
            sprintf(temp2, "t%d", tc);
            tc++;

            char tempQc[50];
            sprintf(tempQc, "%d", qc+3);
            quadr("BZ", tempQc, temp, "");

            quadr(":=", "1", "", temp2);

            sprintf(tempQc, "%d", qc+2);
            quadr("BR", tempQc, "", "");

            quadr(":=", "0", "", temp2);

            sprintf((yyval.str), "%s", temp2);
         ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 798 "synt.y"
    {
            (yyval.str) = strdup((yyvsp[(2) - (3)].str));
         ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 801 "synt.y"
    {
            (yyval.str) = strdup((yyvsp[(1) - (1)].str));
         ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 804 "synt.y"
    {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("NOT", (yyvsp[(3) - (4)].str), "", temp);
            (yyval.str) = strdup(temp);
         ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 813 "synt.y"
    {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);

        quadr("BLE", tempQc, (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
        quadr(":=", "1", "", temp);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp);

        sprintf((yyval.str), "%s", temp);
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 831 "synt.y"
    {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);

        quadr("BL", tempQc, (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
        quadr(":=", "1", "", temp);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp);

        sprintf((yyval.str), "%s", temp);
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 849 "synt.y"
    {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);

        quadr("BGE", tempQc, (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
        quadr(":=", "1", "", temp);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp);

        sprintf((yyval.str), "%s", temp);
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 867 "synt.y"
    {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);

        quadr("BG", tempQc, (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
        quadr(":=", "1", "", temp);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp);

        sprintf((yyval.str), "%s", temp);
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 885 "synt.y"
    {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;
        quadr("-", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), temp);

        char temp2[50];
        sprintf(temp2, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);
        quadr("BNZ", tempQc, temp, "");

        quadr(":=", "1", "", temp2);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp2);

        sprintf((yyval.str), "%s", temp2);
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 908 "synt.y"
    {

        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;
        quadr("-", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), temp);

        char temp2[50];
        sprintf(temp2, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);
        quadr("BZ", tempQc, temp, "");

        quadr(":=", "1", "", temp2);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp2);

        sprintf((yyval.str), "%s", temp2);
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 935 "synt.y"
    {
    int x = pop(1);
    char temp[50];
    sprintf(temp, "%d", x);
    quadr("BR", temp, "", "");
    
    x = pop(2);
    sprintf(temp, "%d", qc);
    ajouter_quad(x, 1, temp);

;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 948 "synt.y"
    {
        if(doubleDeclaration((yyvsp[(3) - (10)].str)) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, (yyvsp[(3) - (10)].str));
        else{
            quadr(":=", (yyvsp[(5) - (10)].str), "", (yyvsp[(3) - (10)].str));

            char temp[50];
            sprintf(temp, "%d", qc+2);
            quadr("BR", temp, "", "");


            push(1, qc);
            sprintf(temp, "%d", (yyvsp[(7) - (10)].entier));
            quadr("+", (yyvsp[(3) - (10)].str), temp, (yyvsp[(3) - (10)].str));

            push(2, qc);
            quadr("BG", "", (yyvsp[(3) - (10)].str), (yyvsp[(9) - (10)].str));
        }
;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 967 "synt.y"
    {

            int x = pop(1);
            char temp[50];
            sprintf(temp, "%d", x);
            quadr("BR", temp, "", "");

            x = pop(2);
            sprintf(temp, "%d", qc);
            ajouter_quad(x, 1, temp);

;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 981 "synt.y"
    {
            push(1, qc);

;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 986 "synt.y"
    {
            push(2, qc);
            quadr("BZ", "", (yyvsp[(2) - (2)].str), "");
;}
    break;



/* Line 1455 of yacc.c  */
#line 2764 "synt.tab.c"
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
#line 991 "synt.y"


int main()
{
  nb_lignes = 1; 
  col = 1;
  i = 0;
  t = 0;
  qc = 0;

  

  init();
  yyparse();
  afficher();
  afficher_qdr();

  Optimization();
  
  afficher_qdr();

  int x = tc;
  generer_asm(x);

  return 0;
}
int yywrap()
{}

int yyerror(char * msg){
    printf("Erreur syntaxique a la ligne %d, colonne %d\n", nb_lignes, col);
}
