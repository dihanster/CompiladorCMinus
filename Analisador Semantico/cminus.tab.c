
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
#line 10 "cminus.y"

#define YYPARSER  /* distinguishes Yacc output from o//ther code files */ 

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static TreeNode * savedTree;   
static int yylex(void);
int yyerror(char* message);
void defineScope(TreeNode* t, char* scope);



/* Line 189 of yacc.c  */
#line 90 "cminus.tab.c"

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
     IF = 258,
     ELSE = 259,
     WHILE = 260,
     INT = 261,
     VOID = 262,
     RETURN = 263,
     NUM = 264,
     ID = 265,
     ASSIGN = 266,
     EQ = 267,
     DIF = 268,
     GT = 269,
     LT = 270,
     PLUS = 271,
     MINUS = 272,
     TIMES = 273,
     OVER = 274,
     LET = 275,
     GET = 276,
     LPAREN = 277,
     RPAREN = 278,
     LBRA = 279,
     RBRA = 280,
     LWRE = 281,
     RWRE = 282,
     SEMI = 283,
     COMM = 284,
     ERROR = 285,
     ENDFILE = 286
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 163 "cminus.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  114

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      22,    29,    36,    43,    45,    47,    51,    53,    56,    61,
      66,    70,    74,    77,    80,    82,    85,    87,    89,    91,
      93,    95,    97,   100,   102,   108,   116,   122,   125,   129,
     133,   135,   137,   142,   146,   148,   150,   152,   154,   156,
     158,   160,   164,   166,   168,   170,   174,   176,   178,   180,
     184,   186,   188,   190,   195,   199,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      33,     0,    -1,    34,    -1,    34,    35,    -1,    35,    -1,
      38,    -1,    39,    -1,    10,    -1,     9,    -1,     6,    36,
      28,    -1,     6,    36,    24,    37,    25,    28,    -1,     6,
      36,    22,    40,    23,    43,    -1,     7,    36,    22,    40,
      23,    43,    -1,    41,    -1,     7,    -1,    41,    29,    42,
      -1,    42,    -1,     6,    36,    -1,     6,    36,    24,    25,
      -1,    26,    44,    45,    27,    -1,    26,    44,    27,    -1,
      26,    45,    27,    -1,    26,    27,    -1,    44,    38,    -1,
      38,    -1,    45,    46,    -1,    46,    -1,    47,    -1,    43,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    28,    -1,
      28,    -1,     3,    22,    51,    23,    46,    -1,     3,    22,
      51,    23,    46,     4,    46,    -1,     5,    22,    51,    23,
      46,    -1,     8,    28,    -1,     8,    51,    28,    -1,    52,
      11,    51,    -1,    53,    -1,    36,    -1,    36,    24,    51,
      25,    -1,    55,    54,    55,    -1,    55,    -1,    12,    -1,
      13,    -1,    15,    -1,    20,    -1,    14,    -1,    21,    -1,
      55,    56,    57,    -1,    57,    -1,    16,    -1,    17,    -1,
      57,    58,    59,    -1,    59,    -1,    18,    -1,    19,    -1,
      22,    51,    23,    -1,    52,    -1,    60,    -1,    37,    -1,
      36,    22,    61,    23,    -1,    36,    22,    23,    -1,    61,
      29,    51,    -1,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    38,    50,    55,    59,    64,    70,    77,
      87,    99,   114,   128,   132,   138,   150,   155,   165,   176,
     188,   192,   196,   200,   212,   217,   230,   235,   239,   243,
     247,   251,   256,   260,   264,   270,   278,   285,   290,   296,
     302,   307,   311,   319,   325,   330,   336,   342,   347,   353,
     359,   365,   371,   376,   381,   387,   393,   398,   403,   409,
     413,   417,   421,   426,   433,   441,   453
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "INT", "VOID",
  "RETURN", "NUM", "ID", "ASSIGN", "EQ", "DIF", "GT", "LT", "PLUS",
  "MINUS", "TIMES", "OVER", "LET", "GET", "LPAREN", "RPAREN", "LBRA",
  "RBRA", "LWRE", "RWRE", "SEMI", "COMM", "ERROR", "ENDFILE", "$accept",
  "program", "list_declaration", "declaration", "id", "num",
  "var_declaration", "fun_declaration", "params", "param_list", "param",
  "compound_decl", "local_declarations", "statement_list", "statement",
  "expression_decl", "selection_decl", "iterator_decl", "return_decl",
  "expression", "var", "simple_expression", "relational", "sum_expression",
  "sum", "term", "mult", "factor", "activation", "arg_list", 0
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
     285,   286
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    37,    38,
      38,    39,    39,    40,    40,    41,    41,    42,    42,    43,
      43,    43,    43,    44,    44,    45,    45,    46,    46,    46,
      46,    46,    47,    47,    48,    48,    49,    50,    50,    51,
      51,    52,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    55,    55,    56,    56,    57,    57,    58,    58,    59,
      59,    59,    59,    60,    60,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       6,     6,     6,     1,     1,     3,     1,     2,     4,     4,
       3,     3,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     5,     7,     5,     2,     3,     3,
       1,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     4,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     5,     6,     7,     0,
       0,     1,     3,     0,     0,     9,     0,     0,    14,     0,
      13,    16,     8,     0,     0,    17,     0,     0,     0,     0,
       0,     0,    11,    15,    10,    12,    18,     0,     0,     0,
       0,     0,    22,    33,    41,    62,    24,    28,     0,     0,
      26,    27,    29,    30,    31,     0,    60,    40,    44,    52,
      56,    61,     0,     0,     0,    37,     0,     0,     0,     0,
      20,    23,     0,    21,    25,    32,     0,    45,    46,    49,
      47,    53,    54,    48,    50,     0,     0,    57,    58,     0,
       0,     0,    38,    59,    64,    66,     0,     0,    19,    39,
      60,    43,    51,    55,     0,     0,    63,     0,    42,    34,
      36,    65,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    44,    45,     6,     7,    19,    20,
      21,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    85,    58,    86,    59,    89,    60,    61,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -52
static const yytype_int8 yypact[] =
{
      85,    10,    10,    27,    85,   -52,   -52,   -52,   -52,    -7,
      50,   -52,   -52,    94,    71,   -52,    94,    10,   -52,    66,
      70,   -52,   -52,    72,    80,    69,    89,   110,    90,    89,
      92,     4,   -52,   -52,   -52,   -52,   -52,    97,    98,    10,
      -4,    44,   -52,   -52,    24,   -52,   -52,   -52,    34,    42,
     -52,   -52,   -52,   -52,   -52,    96,   111,   -52,    93,    64,
     -52,   -52,    44,    44,    35,   -52,    99,   100,    65,    44,
     -52,   -52,    68,   -52,   -52,   -52,    44,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,    44,    44,   -52,   -52,    44,
     102,   103,   -52,   -52,   -52,   -52,    26,   104,   -52,   -52,
     -52,    95,    64,   -52,    76,    76,   -52,    44,   -52,   117,
     -52,   -52,    76,   -52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,   -52,   124,     2,   116,   -15,   -52,   115,   -52,
     105,   -18,   -52,    86,   -47,   -52,   -52,   -52,   -52,   -40,
     -51,   -52,   -52,    48,   -52,    49,   -52,    47,   -52,   -52
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      66,    67,    74,     9,    10,    22,     8,    37,    32,    38,
      39,    35,    40,    22,     8,    13,    46,    14,    41,    25,
       8,    15,    90,    91,    65,    74,    41,    11,    95,    97,
      31,    42,    43,    71,   100,   100,    99,    37,   100,    38,
      39,    64,    40,    22,     8,    37,    68,    38,    69,   106,
      40,    22,     8,    22,     8,   107,    41,   109,   110,    14,
      31,    70,    43,    15,    41,   113,    41,   111,    31,    73,
      43,    37,    16,    38,    22,     8,    40,    22,     8,    37,
      22,    38,    87,    88,    40,    22,     8,    41,    94,    26,
      41,     1,     2,    30,    31,    98,    43,    28,    41,    27,
      17,    18,    31,    29,    43,    77,    78,    79,    80,    81,
      82,    81,    82,    83,    84,    31,    17,    36,    34,    62,
      63,   112,    76,    93,    75,   104,   105,    92,    12,   108,
      23,    24,    33,   101,    72,   102,   103
};

static const yytype_uint8 yycheck[] =
{
      40,    41,    49,     1,     2,     9,    10,     3,    26,     5,
       6,    29,     8,     9,    10,    22,    31,    24,    22,    17,
      10,    28,    62,    63,    28,    72,    22,     0,    68,    69,
      26,    27,    28,    48,    85,    86,    76,     3,    89,     5,
       6,    39,     8,     9,    10,     3,    22,     5,    24,    23,
       8,     9,    10,     9,    10,    29,    22,   104,   105,    24,
      26,    27,    28,    28,    22,   112,    22,   107,    26,    27,
      28,     3,    22,     5,     9,    10,     8,     9,    10,     3,
       9,     5,    18,    19,     8,     9,    10,    22,    23,    23,
      22,     6,     7,    24,    26,    27,    28,    25,    22,    29,
       6,     7,    26,    23,    28,    12,    13,    14,    15,    16,
      17,    16,    17,    20,    21,    26,     6,    25,    28,    22,
      22,     4,    11,    23,    28,    23,    23,    28,     4,    25,
      14,    16,    27,    85,    48,    86,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    33,    34,    35,    38,    39,    10,    36,
      36,     0,    35,    22,    24,    28,    22,     6,     7,    40,
      41,    42,     9,    37,    40,    36,    23,    29,    25,    23,
      24,    26,    43,    42,    28,    43,    25,     3,     5,     6,
       8,    22,    27,    28,    36,    37,    38,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    55,    57,
      59,    60,    22,    22,    36,    28,    51,    51,    22,    24,
      27,    38,    45,    27,    46,    28,    11,    12,    13,    14,
      15,    16,    17,    20,    21,    54,    56,    18,    19,    58,
      51,    51,    28,    23,    23,    51,    61,    51,    27,    51,
      52,    55,    57,    59,    23,    23,    23,    29,    25,    46,
      46,    51,     4,    46
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
#line 34 "cminus.y"
    {
                          savedTree = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 39 "cminus.y"
    {
                          YYSTYPE t = (yyvsp[(1) - (2)]);
                          if(t != NULL){
                            while(t->sibling != NULL)
                              t = t->sibling;
                            t->sibling = (yyvsp[(2) - (2)]);
                            (yyval) = (yyvsp[(1) - (2)]);
                          }
                          else
                            (yyval) = (yyvsp[(2) - (2)]);
                        ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 51 "cminus.y"
    {
                          (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 56 "cminus.y"
    {
                          (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 60 "cminus.y"
    {
                          (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 65 "cminus.y"
    {
                          (yyval) = newExpNode(IdK);
                          (yyval)->attr.name = copyString(tokenString);
                        ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 71 "cminus.y"
    {
                          (yyval) = newExpNode(ConstK);
                          (yyval)->attr.val = atoi(tokenString);
                          (yyval)->type = IntegerK;
                        ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 78 "cminus.y"
    {	
                        	(yyval) = newExpNode(TypeK);
                          (yyval)->type = IntegerK;
                          (yyval)->attr.name = "integer";
                          (yyval)->child[0] = (yyvsp[(2) - (3)]);
                          (yyvsp[(2) - (3)])->nodekind = StmtK;
                          (yyvsp[(2) - (3)])->kind.stmt = VariableK;
							            (yyvsp[(2) - (3)])->type = IntegerK;
                        ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 88 "cminus.y"
    {
                        	(yyval) = newExpNode(TypeK);
                          (yyval)->type = IntegerK;
                          (yyval)->attr.name = "integer";
                          (yyval)->child[0] = (yyvsp[(2) - (6)]);
                          (yyvsp[(2) - (6)])->nodekind = StmtK;
                          (yyvsp[(2) - (6)])->kind.stmt = VariableK;
							            (yyvsp[(2) - (6)])->type = IntegerK; 
                          (yyvsp[(2) - (6)])->attr.len = (yyvsp[(4) - (6)])->attr.val;
                        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 100 "cminus.y"
    {
                        	(yyval) = newExpNode(TypeK);
                          (yyval)->type = IntegerK;
                          (yyval)->attr.name = "integer";
                          (yyval)->child[0] = (yyvsp[(2) - (6)]);
                          (yyvsp[(2) - (6)])->child[0] = (yyvsp[(4) - (6)]);
                          (yyvsp[(2) - (6)])->child[1] = (yyvsp[(6) - (6)]);
                          (yyvsp[(2) - (6)])->nodekind = StmtK;
                          (yyvsp[(2) - (6)])->kind.stmt = FunctionK;
            							(yyvsp[(2) - (6)])->type = IntegerK;
            							(yyvsp[(4) - (6)])->type = IntegerK;
            							defineScope((yyvsp[(2) - (6)])->child[0], (yyvsp[(2) - (6)])->attr.name);
            							defineScope((yyvsp[(2) - (6)])->child[1], (yyvsp[(2) - (6)])->attr.name);
                        ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 115 "cminus.y"
    {
                        	(yyval) = newExpNode(TypeK);
                          (yyval)->type = VoidK;
                          (yyval)->attr.name = "void";
                          (yyval)->child[0] = (yyvsp[(2) - (6)]);
                          (yyvsp[(2) - (6)])->child[0] = (yyvsp[(4) - (6)]);
                          (yyvsp[(2) - (6)])->child[1] = (yyvsp[(6) - (6)]);
                          (yyvsp[(2) - (6)])->nodekind = StmtK;
                          (yyvsp[(2) - (6)])->kind.stmt = FunctionK;
							            defineScope((yyvsp[(2) - (6)])->child[0], (yyvsp[(2) - (6)])->attr.name);
							            defineScope((yyvsp[(2) - (6)])->child[1], (yyvsp[(2) - (6)])->attr.name);
                        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 129 "cminus.y"
    {
                          (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 133 "cminus.y"
    {
						              (yyval) = newExpNode(TypeK);
           				        (yyval)->attr.name = "void";
						            ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 139 "cminus.y"
    {
                          YYSTYPE t = (yyvsp[(1) - (3)]);
                          if(t != NULL){
                            while(t->sibling != NULL)
                              t = t->sibling;
                            t->sibling = (yyvsp[(3) - (3)]);
                            (yyval) = (yyvsp[(1) - (3)]);
                          }
                          else
                            (yyval) = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 151 "cminus.y"
    {
                          (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 156 "cminus.y"
    {
                          (yyval) = newExpNode(TypeK);
					                (yyvsp[(2) - (2)])->nodekind = StmtK;
                          (yyvsp[(2) - (2)])->kind.stmt = VariableK;
                          (yyval)->type = IntegerK;
						              (yyvsp[(2) - (2)])->type = IntegerK; 	
                          (yyval)->attr.name = "integer";
                          (yyval)->child[0] = (yyvsp[(2) - (2)]);
                        ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 166 "cminus.y"
    {
                          (yyval) = newExpNode(TypeK);
							            (yyvsp[(2) - (4)])->nodekind = StmtK;
                          (yyvsp[(2) - (4)])->kind.stmt = VariableK;
                          (yyval)->type = IntegerK;
                          (yyval)->attr.name = "integer";
                          (yyval)->child[0] = (yyvsp[(2) - (4)]);
						              (yyvsp[(2) - (4)])->type = IntegerK;
                        ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 177 "cminus.y"
    {
                          YYSTYPE t = (yyvsp[(2) - (4)]);
                          if(t != NULL){
                            while(t->sibling != NULL)
                              t = t->sibling;
                            t->sibling = (yyvsp[(3) - (4)]);
                            (yyval) = (yyvsp[(2) - (4)]);
                          }
                          else
                            (yyval) = (yyvsp[(3) - (4)]);
                        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 189 "cminus.y"
    {
                          (yyval) = (yyvsp[(2) - (3)]);
                        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 193 "cminus.y"
    {
                          (yyval) = (yyvsp[(2) - (3)]);
                        ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 197 "cminus.y"
    {
			   			          ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 201 "cminus.y"
    {
                            YYSTYPE t = (yyvsp[(1) - (2)]);
                            if(t != NULL){
                            	while(t->sibling != NULL)
                                	 t = t->sibling;
                             	t->sibling = (yyvsp[(2) - (2)]);
                             	(yyval) = (yyvsp[(1) - (2)]);
                            }
                            else
                               (yyval) = (yyvsp[(2) - (2)]);
                        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 213 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 218 "cminus.y"
    {
                           YYSTYPE t = (yyvsp[(1) - (2)]);
                           if(t != NULL)
						   {
                              while(t->sibling != NULL)
                                   t = t->sibling;
                              t->sibling = (yyvsp[(2) - (2)]);
                              (yyval) = (yyvsp[(1) - (2)]);
                           }
                           else
                             (yyval) = (yyvsp[(2) - (2)]);
                        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 231 "cminus.y"
    {
                           (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 236 "cminus.y"
    {
                           (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 240 "cminus.y"
    {
                           (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 244 "cminus.y"
    {
                           (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 248 "cminus.y"
    {
                           (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 252 "cminus.y"
    {
                           (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 257 "cminus.y"
    {
                           (yyval) = (yyvsp[(1) - (2)]);
                        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 261 "cminus.y"
    {
						            ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 265 "cminus.y"
    {
                             (yyval) = newStmtNode(IfK);
                             (yyval)->child[0] = (yyvsp[(3) - (5)]);
                             (yyval)->child[1] = (yyvsp[(5) - (5)]);
                        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 271 "cminus.y"
    {
                             (yyval) = newStmtNode(IfK);
                             (yyval)->child[0] = (yyvsp[(3) - (7)]);
                             (yyval)->child[1] = (yyvsp[(5) - (7)]);
                             (yyval)->child[2] = (yyvsp[(7) - (7)]);
                        ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 279 "cminus.y"
    {
                             (yyval) = newStmtNode(WhileK);
                             (yyval)->child[0] = (yyvsp[(3) - (5)]);
                             (yyval)->child[1] = (yyvsp[(5) - (5)]);
                        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 286 "cminus.y"
    {
                            (yyval) = newStmtNode(ReturnK);
							              (yyval)->type = VoidK;
                       ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 291 "cminus.y"
    {
                            (yyval) = newStmtNode(ReturnK);
                            (yyval)->child[0] = (yyvsp[(2) - (3)]);
                       ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 297 "cminus.y"
    {
                            (yyval) = newStmtNode(AssignK);
                            (yyval)->child[0] = (yyvsp[(1) - (3)]);
                            (yyval)->child[1] = (yyvsp[(3) - (3)]);
                       ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 303 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                       ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 308 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                       ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 312 "cminus.y"
    {
                          (yyval) = (yyvsp[(1) - (4)]);
                          (yyval)->child[0] = (yyvsp[(3) - (4)]);
                          (yyval)->kind.exp = VectorK;
							            (yyval)->type = IntegerK;
                       ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 320 "cminus.y"
    {
                            (yyval) = (yyvsp[(2) - (3)]);
                            (yyval)->child[0] = (yyvsp[(1) - (3)]);
                            (yyval)->child[1] = (yyvsp[(3) - (3)]);
                       ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 326 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                       ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 331 "cminus.y"
    {
                          (yyval) = newExpNode(OpK);
                          (yyval)->attr.op = EQ;  
							            (yyval)->type = BooleanK;             
                       ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 337 "cminus.y"
    {
                          (yyval) = newExpNode(OpK);
                          (yyval)->attr.op = DIF;
							            (yyval)->type = BooleanK;                        
                       ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 343 "cminus.y"
    {
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = LT;                     (yyval)->type = BooleanK;
                       ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 348 "cminus.y"
    {
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = LET;                            
							(yyval)->type = BooleanK;
                       ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 354 "cminus.y"
    {
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = GT;                            
							(yyval)->type = BooleanK;
                       ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 360 "cminus.y"
    {
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = GET;                     (yyval)->type = BooleanK;
                       ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 366 "cminus.y"
    {
                            (yyval) = (yyvsp[(2) - (3)]);
                            (yyval)->child[0] = (yyvsp[(1) - (3)]);
                            (yyval)->child[1] = (yyvsp[(3) - (3)]);
                       ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 372 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                       ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 377 "cminus.y"
    {
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = PLUS;                            
                       ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 382 "cminus.y"
    {
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = MINUS;                            
                       ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 388 "cminus.y"
    {
                            (yyval) = (yyvsp[(2) - (3)]);
                            (yyval)->child[0] = (yyvsp[(1) - (3)]);
                            (yyval)->child[1] = (yyvsp[(3) - (3)]);
                       ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 394 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                       ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 399 "cminus.y"
    {
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = TIMES;                
                       ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 404 "cminus.y"
    {
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = OVER;            
                       ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 410 "cminus.y"
    {
                            (yyval) = (yyvsp[(2) - (3)]);
                       ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 414 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                       ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 418 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                       ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 422 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                       ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 427 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (4)]);
                            (yyval)->child[0] = (yyvsp[(3) - (4)]);
                            (yyval)->nodekind = StmtK;
                            (yyval)->kind.stmt = CallK;
                       ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 434 "cminus.y"
    {
                            (yyval) = (yyvsp[(1) - (3)]);
                            (yyval)->nodekind = StmtK;
                            (yyval)->kind.stmt = CallK;
                       ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 442 "cminus.y"
    {
                            YYSTYPE t = (yyvsp[(1) - (3)]);
                             if(t != NULL){
                                while(t->sibling != NULL)
                                   t = t->sibling;
                                 t->sibling = (yyvsp[(3) - (3)]);
                                 (yyval) = (yyvsp[(1) - (3)]);
                             }
                             else
                                 (yyval) = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 454 "cminus.y"
    {
                             (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;



/* Line 1455 of yacc.c  */
#line 2181 "cminus.tab.c"
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
#line 458 "cminus.y"


int yyerror(char* message){
    fprintf(listing, "\nSYNTAX ERROR: \"%s\" LINE %d", tokenString, lineno);
    Error = TRUE;
    return 0;
}

static int yylex(void){
    return getToken();
}

TreeNode * parse(void){
    yyparse();
    return savedTree;
}
