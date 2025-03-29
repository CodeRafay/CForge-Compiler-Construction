/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

extern FILE *yyin;
void yyerror(const char *s);
int yylex(void);

int level = 0;  // Track parsing level

// Define yylval as a union
//#define YYSTYPE char*  // Define YYSTYPE as char* for simplicity
extern YYSTYPE yylval;  // Define yylval to hold string values

void print_level() {
    for (int i = 0; i < level; i++) {
        printf("  ");  // Indentation for clarity
    }
}

#line 93 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_RETURN = 4,                     /* RETURN  */
  YYSYMBOL_MAIN = 5,                       /* MAIN  */
  YYSYMBOL_PRINTF = 6,                     /* PRINTF  */
  YYSYMBOL_SCANF = 7,                      /* SCANF  */
  YYSYMBOL_FOR = 8,                        /* FOR  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_IDENTIFIER = 12,                /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 13,                    /* NUMBER  */
  YYSYMBOL_PLUS = 14,                      /* PLUS  */
  YYSYMBOL_MINUS = 15,                     /* MINUS  */
  YYSYMBOL_MULT = 16,                      /* MULT  */
  YYSYMBOL_DIV = 17,                       /* DIV  */
  YYSYMBOL_MOD = 18,                       /* MOD  */
  YYSYMBOL_ASSIGN = 19,                    /* ASSIGN  */
  YYSYMBOL_LPAREN = 20,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 21,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 22,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 23,                    /* RBRACE  */
  YYSYMBOL_SEMI = 24,                      /* SEMI  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_GT = 26,                        /* GT  */
  YYSYMBOL_EQ = 27,                        /* EQ  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_COMMA = 29,                     /* COMMA  */
  YYSYMBOL_INCR = 30,                      /* INCR  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_program = 32,                   /* program  */
  YYSYMBOL_function_list = 33,             /* function_list  */
  YYSYMBOL_function = 34,                  /* function  */
  YYSYMBOL_function_definition = 35,       /* function_definition  */
  YYSYMBOL_main_or_id = 36,                /* main_or_id  */
  YYSYMBOL_type_specifier = 37,            /* type_specifier  */
  YYSYMBOL_parameter_list_opt = 38,        /* parameter_list_opt  */
  YYSYMBOL_parameter_list = 39,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 40,     /* parameter_declaration  */
  YYSYMBOL_compound_stmt = 41,             /* compound_stmt  */
  YYSYMBOL_stmt_list_opt = 42,             /* stmt_list_opt  */
  YYSYMBOL_stmt_list = 43,                 /* stmt_list  */
  YYSYMBOL_stmt = 44,                      /* stmt  */
  YYSYMBOL_arg_list_opt = 45,              /* arg_list_opt  */
  YYSYMBOL_arg_list = 46,                  /* arg_list  */
  YYSYMBOL_expr = 47                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   191

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    51,    55,    62,    70,    77,    81,    88,
      95,    99,   106,   110,   117,   124,   131,   135,   142,   146,
     153,   157,   161,   165,   169,   173,   177,   181,   185,   189,
     196,   200,   207,   211,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "RETURN",
  "MAIN", "PRINTF", "SCANF", "FOR", "IF", "ELSE", "WHILE", "IDENTIFIER",
  "NUMBER", "PLUS", "MINUS", "MULT", "DIV", "MOD", "ASSIGN", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "SEMI", "LE", "GT", "EQ", "OR", "COMMA",
  "INCR", "$accept", "program", "function_list", "function",
  "function_definition", "main_or_id", "type_specifier",
  "parameter_list_opt", "parameter_list", "parameter_declaration",
  "compound_stmt", "stmt_list_opt", "stmt_list", "stmt", "arg_list_opt",
  "arg_list", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-61)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -61,    10,     0,   -61,   -61,    -4,   -61,   -61,   -61,
     -61,    -8,     0,    22,    20,    13,   -61,   -61,    23,     0,
      24,   -61,   -61,    27,    31,    38,    41,    42,    53,    25,
      47,    51,    24,   -61,    56,   -61,    27,    39,    27,    65,
      66,    27,    27,    27,   -15,   -61,   -61,    27,    54,    27,
      27,    27,    27,    27,   -61,    27,    27,    27,    27,    69,
      67,    70,    84,    99,   114,    27,   -61,    71,    62,   154,
     -61,    32,    32,   -61,   -61,   -61,   173,   173,   173,   159,
      79,    80,    27,    23,    23,   -61,   119,   -61,    27,   -61,
     -61,   134,    83,   -61,   -61,   154,    27,    23,   139,   -61,
      94,    77,    87,    23,   -61
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,     0,     2,     4,     5,     0,     1,     3,     7,
       8,     0,    10,     0,     0,    11,    12,    14,     0,     0,
      16,     6,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,    19,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    18,    30,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,    31,    32,
      43,    38,    39,    40,    41,    42,    37,    36,    35,    34,
       0,     0,     0,     0,     0,    20,     0,    46,     0,    21,
      22,     0,    25,    24,    29,    33,     0,     0,     0,    26,
       0,     0,     0,     0,    23
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,   -61,   115,   -61,   -61,     6,   -61,   -61,   100,
     -60,   -61,   -61,    89,   -61,   -61,   -36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    11,     6,    14,    15,    16,
      21,    31,    32,    33,    67,    68,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      48,     9,    59,     1,    65,    62,    63,    64,    10,    66,
       7,    69,    12,    71,    72,    73,    74,    75,    13,    76,
      77,    78,    79,    92,    93,    13,    30,     1,    23,    86,
      24,    25,    26,    27,    17,    28,    29,    99,    30,    34,
      35,    18,    19,   104,    43,    20,    91,    36,    51,    52,
      53,    38,    95,    49,    50,    51,    52,    53,    39,    44,
      98,    40,    41,    54,    55,    56,    57,    58,    49,    50,
      51,    52,    53,    42,    45,    70,    47,    60,    61,    55,
      56,    57,    58,    49,    50,    51,    52,    53,    81,    82,
      80,    88,    87,    97,    55,    56,    57,    58,    49,    50,
      51,    52,    53,    89,    90,    83,   101,   102,   103,    55,
      56,    57,    58,    49,    50,    51,    52,    53,     8,    22,
      84,    46,     0,     0,    55,    56,    57,    58,    49,    50,
      51,    52,    53,    49,    50,    51,    52,    53,    85,    55,
      56,    57,    58,    94,    55,    56,    57,    58,    49,    50,
      51,    52,    53,    49,    50,    51,    52,    53,    96,    55,
      56,    57,    58,   100,    55,    56,    57,    58,    49,    50,
      51,    52,    53,    49,    50,    51,    52,    53,     0,    55,
      56,    57,    58,     0,    55,    56,    57,    49,    50,    51,
      52,    53
};

static const yytype_int8 yycheck[] =
{
      36,     5,    38,     3,    19,    41,    42,    43,    12,    24,
       0,    47,    20,    49,    50,    51,    52,    53,    12,    55,
      56,    57,    58,    83,    84,    19,    20,     3,     4,    65,
       6,     7,     8,     9,    12,    11,    12,    97,    32,    12,
      13,    21,    29,   103,    19,    22,    82,    20,    16,    17,
      18,    20,    88,    14,    15,    16,    17,    18,    20,    12,
      96,    20,    20,    24,    25,    26,    27,    28,    14,    15,
      16,    17,    18,    20,    23,    21,    20,    12,    12,    25,
      26,    27,    28,    14,    15,    16,    17,    18,    21,    19,
      21,    29,    21,    10,    25,    26,    27,    28,    14,    15,
      16,    17,    18,    24,    24,    21,    12,    30,    21,    25,
      26,    27,    28,    14,    15,    16,    17,    18,     3,    19,
      21,    32,    -1,    -1,    25,    26,    27,    28,    14,    15,
      16,    17,    18,    14,    15,    16,    17,    18,    24,    25,
      26,    27,    28,    24,    25,    26,    27,    28,    14,    15,
      16,    17,    18,    14,    15,    16,    17,    18,    24,    25,
      26,    27,    28,    24,    25,    26,    27,    28,    14,    15,
      16,    17,    18,    14,    15,    16,    17,    18,    -1,    25,
      26,    27,    28,    -1,    25,    26,    27,    14,    15,    16,
      17,    18
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    32,    33,    34,    35,    37,     0,    34,     5,
      12,    36,    20,    37,    38,    39,    40,    12,    21,    29,
      22,    41,    40,     4,     6,     7,     8,     9,    11,    12,
      37,    42,    43,    44,    12,    13,    20,    47,    20,    20,
      20,    20,    20,    19,    12,    23,    44,    20,    47,    14,
      15,    16,    17,    18,    24,    25,    26,    27,    28,    47,
      12,    12,    47,    47,    47,    19,    24,    45,    46,    47,
      21,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      21,    21,    19,    21,    21,    24,    47,    21,    29,    24,
      24,    47,    41,    41,    24,    47,    24,    10,    47,    41,
      24,    12,    30,    21,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    35,    36,    36,    37,
      38,    38,    39,    39,    40,    41,    42,    42,    43,    43,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      45,    45,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     6,     1,     1,     1,
       0,     1,     1,     3,     2,     3,     0,     1,     2,     1,
       4,     5,     5,    12,     5,     5,     7,     3,     3,     5,
       0,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: function_list  */
#line 44 "parser.y"
                    {
          print_level();
          printf("Level %d: program → function_list\n", level);
      }
#line 1208 "parser.tab.c"
    break;

  case 3: /* function_list: function_list function  */
#line 51 "parser.y"
                             {
          print_level();
          printf("Level %d: function_list → function_list function\n", level);
      }
#line 1217 "parser.tab.c"
    break;

  case 4: /* function_list: function  */
#line 55 "parser.y"
               {
          print_level();
          printf("Level %d: function_list → function\n", level);
      }
#line 1226 "parser.tab.c"
    break;

  case 5: /* function: function_definition  */
#line 62 "parser.y"
                          {
          print_level();
          printf("Level %d: function → function_definition\n", level);
      }
#line 1235 "parser.tab.c"
    break;

  case 6: /* function_definition: type_specifier main_or_id LPAREN parameter_list_opt RPAREN compound_stmt  */
#line 70 "parser.y"
                                                                               {
          print_level();
          printf("Level %d: function_definition → type_specifier main_or_id (parameter_list_opt) compound_stmt\n", level);
      }
#line 1244 "parser.tab.c"
    break;

  case 7: /* main_or_id: MAIN  */
#line 77 "parser.y"
           {
          print_level();
          printf("Level %d: main_or_id → MAIN\n", level);
      }
#line 1253 "parser.tab.c"
    break;

  case 8: /* main_or_id: IDENTIFIER  */
#line 81 "parser.y"
                 {
          print_level();
          printf("Level %d: main_or_id → IDENTIFIER (%s)\n", level, yylval);
      }
#line 1262 "parser.tab.c"
    break;

  case 9: /* type_specifier: INT  */
#line 88 "parser.y"
          {
          print_level();
          printf("Level %d: type_specifier → INT\n", level);
      }
#line 1271 "parser.tab.c"
    break;

  case 10: /* parameter_list_opt: %empty  */
#line 95 "parser.y"
                  {
          print_level();
          printf("Level %d: parameter_list_opt → ε\n", level);
      }
#line 1280 "parser.tab.c"
    break;

  case 11: /* parameter_list_opt: parameter_list  */
#line 99 "parser.y"
                     {
          print_level();
          printf("Level %d: parameter_list_opt → parameter_list\n", level);
      }
#line 1289 "parser.tab.c"
    break;

  case 12: /* parameter_list: parameter_declaration  */
#line 106 "parser.y"
                            {
          print_level();
          printf("Level %d: parameter_list → parameter_declaration\n", level);
      }
#line 1298 "parser.tab.c"
    break;

  case 13: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 110 "parser.y"
                                                 {
          print_level();
          printf("Level %d: parameter_list → parameter_list , parameter_declaration\n", level);
      }
#line 1307 "parser.tab.c"
    break;

  case 14: /* parameter_declaration: type_specifier IDENTIFIER  */
#line 117 "parser.y"
                                {
          print_level();
          printf("Level %d: parameter_declaration → type_specifier IDENTIFIER (%s)\n", level, yytext);
      }
#line 1316 "parser.tab.c"
    break;

  case 15: /* compound_stmt: LBRACE stmt_list_opt RBRACE  */
#line 124 "parser.y"
                                  {
          print_level();
          printf("Level %d: compound_stmt → { stmt_list_opt }\n", level);
      }
#line 1325 "parser.tab.c"
    break;

  case 16: /* stmt_list_opt: %empty  */
#line 131 "parser.y"
                  {
          print_level();
          printf("Level %d: stmt_list_opt → ε\n", level);
      }
#line 1334 "parser.tab.c"
    break;

  case 17: /* stmt_list_opt: stmt_list  */
#line 135 "parser.y"
                {
          print_level();
          printf("Level %d: stmt_list_opt → stmt_list\n", level);
      }
#line 1343 "parser.tab.c"
    break;

  case 18: /* stmt_list: stmt_list stmt  */
#line 142 "parser.y"
                     {
          print_level();
          printf("Level %d: stmt_list → stmt_list stmt\n", level);
      }
#line 1352 "parser.tab.c"
    break;

  case 19: /* stmt_list: stmt  */
#line 146 "parser.y"
           {
          print_level();
          printf("Level %d: stmt_list → stmt\n", level);
      }
#line 1361 "parser.tab.c"
    break;

  case 20: /* stmt: IDENTIFIER ASSIGN expr SEMI  */
#line 153 "parser.y"
                                  {
          print_level();
          printf("Level %d: stmt → IDENTIFIER (%s) = expr ;\n", level, yytext);
      }
#line 1370 "parser.tab.c"
    break;

  case 21: /* stmt: PRINTF LPAREN expr RPAREN SEMI  */
#line 157 "parser.y"
                                     {
          print_level();
          printf("Level %d: stmt → PRINTF (expr) ;\n", level);
      }
#line 1379 "parser.tab.c"
    break;

  case 22: /* stmt: SCANF LPAREN IDENTIFIER RPAREN SEMI  */
#line 161 "parser.y"
                                          {
          print_level();
          printf("Level %d: stmt → SCANF (IDENTIFIER (%s)) ;\n", level, yytext);
      }
#line 1388 "parser.tab.c"
    break;

  case 23: /* stmt: FOR LPAREN IDENTIFIER ASSIGN expr SEMI expr SEMI IDENTIFIER INCR RPAREN compound_stmt  */
#line 165 "parser.y"
                                                                                            {
          print_level();
          printf("Level %d: stmt → FOR loop statement\n", level);
      }
#line 1397 "parser.tab.c"
    break;

  case 24: /* stmt: WHILE LPAREN expr RPAREN compound_stmt  */
#line 169 "parser.y"
                                             {
          print_level();
          printf("Level %d: stmt → WHILE (expr) compound_stmt\n", level);
      }
#line 1406 "parser.tab.c"
    break;

  case 25: /* stmt: IF LPAREN expr RPAREN compound_stmt  */
#line 173 "parser.y"
                                          {
          print_level();
          printf("Level %d: stmt → IF (expr) compound_stmt\n", level);
      }
#line 1415 "parser.tab.c"
    break;

  case 26: /* stmt: IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt  */
#line 177 "parser.y"
                                                             {
          print_level();
          printf("Level %d: stmt → IF (expr) compound_stmt ELSE compound_stmt\n", level);
      }
#line 1424 "parser.tab.c"
    break;

  case 27: /* stmt: RETURN expr SEMI  */
#line 181 "parser.y"
                       {
          print_level();
          printf("Level %d: stmt → RETURN expr ;\n", level);
      }
#line 1433 "parser.tab.c"
    break;

  case 28: /* stmt: type_specifier IDENTIFIER SEMI  */
#line 185 "parser.y"
                                     {
          print_level();
          printf("Level %d: stmt → type_specifier IDENTIFIER (%s) ;\n", level, yytext);
      }
#line 1442 "parser.tab.c"
    break;

  case 29: /* stmt: type_specifier IDENTIFIER ASSIGN expr SEMI  */
#line 189 "parser.y"
                                                 {
          print_level();
          printf("Level %d: stmt → type_specifier IDENTIFIER (%s) = expr ;\n", level, yytext);
      }
#line 1451 "parser.tab.c"
    break;

  case 30: /* arg_list_opt: %empty  */
#line 196 "parser.y"
                  {
          print_level();
          printf("Level %d: arg_list_opt → ε\n", level);
      }
#line 1460 "parser.tab.c"
    break;

  case 31: /* arg_list_opt: arg_list  */
#line 200 "parser.y"
               {
          print_level();
          printf("Level %d: arg_list_opt → arg_list\n", level);
      }
#line 1469 "parser.tab.c"
    break;

  case 32: /* arg_list: expr  */
#line 207 "parser.y"
           {
          print_level();
          printf("Level %d: arg_list → expr\n", level);
      }
#line 1478 "parser.tab.c"
    break;

  case 33: /* arg_list: arg_list COMMA expr  */
#line 211 "parser.y"
                          {
          print_level();
          printf("Level %d: arg_list → arg_list , expr\n", level);
      }
#line 1487 "parser.tab.c"
    break;

  case 34: /* expr: expr OR expr  */
#line 220 "parser.y"
                   { print_level(); printf("Level %d: expr → expr OR expr\n", level); }
#line 1493 "parser.tab.c"
    break;

  case 35: /* expr: expr EQ expr  */
#line 221 "parser.y"
                   { print_level(); printf("Level %d: expr → expr EQ expr\n", level); }
#line 1499 "parser.tab.c"
    break;

  case 36: /* expr: expr GT expr  */
#line 222 "parser.y"
                   { print_level(); printf("Level %d: expr → expr GT expr\n", level); }
#line 1505 "parser.tab.c"
    break;

  case 37: /* expr: expr LE expr  */
#line 223 "parser.y"
                   { print_level(); printf("Level %d: expr → expr LE expr\n", level); }
#line 1511 "parser.tab.c"
    break;

  case 38: /* expr: expr PLUS expr  */
#line 224 "parser.y"
                     { print_level(); printf("Level %d: expr → expr PLUS expr\n", level); }
#line 1517 "parser.tab.c"
    break;

  case 39: /* expr: expr MINUS expr  */
#line 225 "parser.y"
                      { print_level(); printf("Level %d: expr → expr MINUS expr\n", level); }
#line 1523 "parser.tab.c"
    break;

  case 40: /* expr: expr MULT expr  */
#line 226 "parser.y"
                     { print_level(); printf("Level %d: expr → expr MULT expr\n", level); }
#line 1529 "parser.tab.c"
    break;

  case 41: /* expr: expr DIV expr  */
#line 227 "parser.y"
                    { print_level(); printf("Level %d: expr → expr DIV expr\n", level); }
#line 1535 "parser.tab.c"
    break;

  case 42: /* expr: expr MOD expr  */
#line 228 "parser.y"
                    { print_level(); printf("Level %d: expr → expr MOD expr\n", level); }
#line 1541 "parser.tab.c"
    break;

  case 43: /* expr: LPAREN expr RPAREN  */
#line 229 "parser.y"
                         { print_level(); printf("Level %d: expr → ( expr )\n", level); }
#line 1547 "parser.tab.c"
    break;

  case 44: /* expr: IDENTIFIER  */
#line 230 "parser.y"
                 { print_level(); printf("Level %d: expr → IDENTIFIER (%s)\n", level, yylval); }
#line 1553 "parser.tab.c"
    break;

  case 45: /* expr: NUMBER  */
#line 231 "parser.y"
             { print_level(); printf("Level %d: expr → NUMBER (%s)\n", level, yytext); }
#line 1559 "parser.tab.c"
    break;

  case 46: /* expr: IDENTIFIER LPAREN arg_list_opt RPAREN  */
#line 232 "parser.y"
                                            {
        print_level();
        printf("Level %d: expr → function call IDENTIFIER (%s)\n", level, yytext);
      }
#line 1568 "parser.tab.c"
    break;


#line 1572 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 238 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error: %s\n", s);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }
    yyin = file;
    
    printf("####### Starting parsing #######\n");
    
    int result = yyparse();
    fclose(file);
    if (result == 0) {
        printf("Parsing successful!\n");
    } else {
        printf("Parsing failed with errors.\n");
    }
    return result;
}
