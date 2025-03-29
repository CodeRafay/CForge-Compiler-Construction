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

extern FILE *yyin;
extern int yylineno;

void yyerror(const char *s);
int yylex(void);

#line 82 "parser.tab.c"

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
  YYSYMBOL_TYPE_SPEC = 3,                  /* TYPE_SPEC  */
  YYSYMBOL_THEN = 4,                       /* THEN  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_MAIN = 10,                      /* MAIN  */
  YYSYMBOL_PRINTF = 11,                    /* PRINTF  */
  YYSYMBOL_SCANF = 12,                     /* SCANF  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_SWITCH = 17,                    /* SWITCH  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_TRUE = 19,                      /* TRUE  */
  YYSYMBOL_FALSE = 20,                     /* FALSE  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_STRING = 23,                    /* STRING  */
  YYSYMBOL_IDENTIFIER = 24,                /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 25,                    /* NUMBER  */
  YYSYMBOL_PLUS = 26,                      /* PLUS  */
  YYSYMBOL_MINUS = 27,                     /* MINUS  */
  YYSYMBOL_MULT = 28,                      /* MULT  */
  YYSYMBOL_DIV = 29,                       /* DIV  */
  YYSYMBOL_MOD = 30,                       /* MOD  */
  YYSYMBOL_ASSIGN = 31,                    /* ASSIGN  */
  YYSYMBOL_LPAREN = 32,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 33,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 34,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 35,                    /* RBRACE  */
  YYSYMBOL_SEMI = 36,                      /* SEMI  */
  YYSYMBOL_LE = 37,                        /* LE  */
  YYSYMBOL_LT = 38,                        /* LT  */
  YYSYMBOL_GT = 39,                        /* GT  */
  YYSYMBOL_GE = 40,                        /* GE  */
  YYSYMBOL_EQ = 41,                        /* EQ  */
  YYSYMBOL_NEQ = 42,                       /* NEQ  */
  YYSYMBOL_OR = 43,                        /* OR  */
  YYSYMBOL_AND = 44,                       /* AND  */
  YYSYMBOL_NOT = 45,                       /* NOT  */
  YYSYMBOL_COMMA = 46,                     /* COMMA  */
  YYSYMBOL_INCR = 47,                      /* INCR  */
  YYSYMBOL_DECR = 48,                      /* DECR  */
  YYSYMBOL_COLON = 49,                     /* COLON  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_declaration_or_function_list = 52, /* declaration_or_function_list  */
  YYSYMBOL_declaration_or_function = 53,   /* declaration_or_function  */
  YYSYMBOL_global_declaration = 54,        /* global_declaration  */
  YYSYMBOL_function_definition = 55,       /* function_definition  */
  YYSYMBOL_main_or_id = 56,                /* main_or_id  */
  YYSYMBOL_type_specifier = 57,            /* type_specifier  */
  YYSYMBOL_parameter_list_opt = 58,        /* parameter_list_opt  */
  YYSYMBOL_parameter_list = 59,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 60,     /* parameter_declaration  */
  YYSYMBOL_compound_stmt = 61,             /* compound_stmt  */
  YYSYMBOL_stmt_list_opt = 62,             /* stmt_list_opt  */
  YYSYMBOL_stmt_list = 63,                 /* stmt_list  */
  YYSYMBOL_stmt = 64,                      /* stmt  */
  YYSYMBOL_init_expr = 65,                 /* init_expr  */
  YYSYMBOL_update_expr = 66,               /* update_expr  */
  YYSYMBOL_declaration = 67,               /* declaration  */
  YYSYMBOL_var_list = 68,                  /* var_list  */
  YYSYMBOL_var_decl = 69,                  /* var_decl  */
  YYSYMBOL_case_list = 70,                 /* case_list  */
  YYSYMBOL_case_stmt = 71,                 /* case_stmt  */
  YYSYMBOL_expr = 72,                      /* expr  */
  YYSYMBOL_arg_list_opt = 73,              /* arg_list_opt  */
  YYSYMBOL_arg_list = 74                   /* arg_list  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    41,    43,    48,    49,    53,    61,    62,
      66,    67,    71,    72,    73,    74,    79,    80,    84,    85,
      89,    94,    98,    99,   103,   104,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   129,   130,   135,   136,   137,   142,   147,   148,   153,
     154,   159,   160,   164,   165,   166,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   199,   200,
     204,   205
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
  "\"end of file\"", "error", "\"invalid token\"", "TYPE_SPEC", "THEN",
  "INT", "FLOAT", "BOOL", "RETURN", "VOID", "MAIN", "PRINTF", "SCANF",
  "FOR", "IF", "ELSE", "WHILE", "SWITCH", "CASE", "TRUE", "FALSE", "BREAK",
  "DEFAULT", "STRING", "IDENTIFIER", "NUMBER", "PLUS", "MINUS", "MULT",
  "DIV", "MOD", "ASSIGN", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "SEMI",
  "LE", "LT", "GT", "GE", "EQ", "NEQ", "OR", "AND", "NOT", "COMMA", "INCR",
  "DECR", "COLON", "$accept", "program", "declaration_or_function_list",
  "declaration_or_function", "global_declaration", "function_definition",
  "main_or_id", "type_specifier", "parameter_list_opt", "parameter_list",
  "parameter_declaration", "compound_stmt", "stmt_list_opt", "stmt_list",
  "stmt", "init_expr", "update_expr", "declaration", "var_list",
  "var_decl", "case_list", "case_stmt", "expr", "arg_list_opt", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-149)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-12)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      93,  -149,  -149,  -149,  -149,    14,    93,  -149,  -149,  -149,
      45,  -149,  -149,  -149,   -14,    18,   -31,  -149,   117,    93,
    -149,    28,  -149,  -149,  -149,  -149,    24,  -149,   117,   117,
     264,    34,    26,    22,  -149,    32,  -149,   117,   131,  -149,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,  -149,   -27,    93,   264,    37,    25,  -149,
     115,   115,  -149,  -149,  -149,    79,    79,    79,    79,    79,
      79,   283,   283,   108,  -149,  -149,  -149,  -149,   117,   117,
      41,    42,    44,    47,    58,    71,   -28,    86,    94,    28,
      91,   108,  -149,    98,   264,   150,   117,   111,   124,   117,
     117,   117,   117,   117,   102,   110,   114,   116,   101,  -149,
    -149,  -149,  -149,     7,   118,   122,   127,  -149,   169,   188,
     207,   226,   121,  -149,  -149,  -149,  -149,   129,   130,   117,
     117,   133,   133,   147,  -149,   146,  -149,  -149,   264,   245,
     168,  -149,    -6,  -149,   160,   133,   175,   136,    27,  -149,
      17,   170,  -149,   152,   108,  -149,  -149,   117,  -149,  -149,
     133,   108,    30,   264,  -149,    80,   183,   184,  -149,  -149
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    12,    13,    14,    15,     0,     2,     4,     5,     6,
       0,     1,     3,    10,    49,     0,     0,    47,     0,    16,
       7,     0,    75,    72,    73,    77,    71,    74,     0,     0,
      50,     0,     0,    17,    18,    49,    48,    78,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,    80,     0,    79,    70,
      61,    62,    63,    64,    65,    60,    59,    58,    66,    57,
      67,    56,    68,    22,     9,     8,    19,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    25,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,    46,    21,
      24,    40,    38,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    32,    33,    42,     0,
      36,    35,     0,    31,     0,     0,     0,     0,     0,    52,
       0,     0,    37,     0,     0,    39,    51,     0,    43,    44,
       0,     0,    55,    45,    34,     0,     0,     0,    54,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,   198,  -149,  -149,  -149,     2,  -149,  -149,
     167,   -65,  -149,  -148,   -90,  -149,  -149,   107,   134,   203,
    -149,    90,   -18,   138,   143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,     9,    15,    89,    32,    33,
      34,    75,    90,    91,    92,   116,   151,    93,    16,    17,
     148,   149,    56,    57,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,   110,    10,   102,   103,    20,   162,    73,    10,    74,
      38,    39,   146,   165,    11,    21,   147,    18,   -11,   104,
     105,    31,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     1,     2,     3,    79,     4,
     127,    80,    81,    82,    83,   146,    84,    85,   157,   147,
      19,   166,    35,    78,    86,    13,    37,    31,    53,    54,
      94,    95,   155,    18,   158,   159,   140,   141,    55,    14,
      77,    78,   110,    96,    97,   110,    98,    87,    88,    99,
     152,   118,   119,   120,   121,     1,     2,     3,    79,     4,
     100,    80,    81,    82,    83,   164,    84,    85,     1,     2,
       3,   167,     4,   101,    86,    40,    41,    42,    43,    44,
     106,   138,   139,     1,     2,     3,    79,     4,   107,    80,
      81,    82,    83,    22,    84,    85,   109,    87,    88,     1,
       2,     3,    86,     4,   111,   114,    23,    24,   123,   163,
      25,    26,    27,    42,    43,    44,   124,    21,   115,    28,
     125,   128,   126,   129,   135,    87,    88,    40,    41,    42,
      43,    44,    29,   130,    59,   136,   137,    73,    45,    46,
      47,    48,    49,    50,    51,    52,    40,    41,    42,    43,
      44,   142,   143,   145,   150,   154,   112,    45,    46,    47,
      48,    49,    50,    51,    52,    40,    41,    42,    43,    44,
     153,   161,   131,   160,    12,   117,    45,    46,    47,    48,
      49,    50,    51,    52,    40,    41,    42,    43,    44,   168,
     169,   132,    76,   108,    36,    45,    46,    47,    48,    49,
      50,    51,    52,    40,    41,    42,    43,    44,   156,   113,
     133,   122,     0,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,   134,    45,    46,    47,    48,    49,    50,    51,
      52,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,   144,    45,    46,    47,    48,    49,    50,    51,    52,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,    45,    46,    47,    48,    49,    50,    51,    52,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
      45,    46,    47,    48,    49,    50
};

static const yytype_int16 yycheck[] =
{
      18,    91,     0,    31,    32,    36,   154,    34,     6,    36,
      28,    29,    18,   161,     0,    46,    22,    31,    32,    47,
      48,    19,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     5,     6,     7,     8,     9,
      33,    11,    12,    13,    14,    18,    16,    17,    31,    22,
      32,    21,    24,    46,    24,    10,    32,    55,    24,    33,
      78,    79,    35,    31,    47,    48,   131,   132,    46,    24,
      33,    46,   162,    32,    32,   165,    32,    47,    48,    32,
     145,    99,   100,   101,   102,     5,     6,     7,     8,     9,
      32,    11,    12,    13,    14,   160,    16,    17,     5,     6,
       7,    21,     9,    32,    24,    26,    27,    28,    29,    30,
      24,   129,   130,     5,     6,     7,     8,     9,    24,    11,
      12,    13,    14,     6,    16,    17,    35,    47,    48,     5,
       6,     7,    24,     9,    36,    24,    19,    20,    36,   157,
      23,    24,    25,    28,    29,    30,    36,    46,    24,    32,
      36,    33,    36,    31,    33,    47,    48,    26,    27,    28,
      29,    30,    45,    36,    33,    36,    36,    34,    37,    38,
      39,    40,    41,    42,    43,    44,    26,    27,    28,    29,
      30,    34,    36,    15,    24,    49,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    26,    27,    28,    29,    30,
      25,    49,    33,    33,     6,    98,    37,    38,    39,    40,
      41,    42,    43,    44,    26,    27,    28,    29,    30,    36,
      36,    33,    55,    89,    21,    37,    38,    39,    40,    41,
      42,    43,    44,    26,    27,    28,    29,    30,   148,    96,
      33,   103,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     9,    51,    52,    53,    54,    55,
      57,     0,    53,    10,    24,    56,    68,    69,    31,    32,
      36,    46,     6,    19,    20,    23,    24,    25,    32,    45,
      72,    57,    58,    59,    60,    24,    69,    32,    72,    72,
      26,    27,    28,    29,    30,    37,    38,    39,    40,    41,
      42,    43,    44,    24,    33,    46,    72,    73,    74,    33,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    34,    36,    61,    60,    33,    46,     8,
      11,    12,    13,    14,    16,    17,    24,    47,    48,    57,
      62,    63,    64,    67,    72,    72,    32,    32,    32,    32,
      32,    32,    31,    32,    47,    48,    24,    24,    68,    35,
      64,    36,    36,    74,    24,    24,    65,    67,    72,    72,
      72,    72,    73,    36,    36,    36,    36,    33,    33,    31,
      36,    33,    33,    33,    36,    33,    36,    36,    72,    72,
      61,    61,    34,    36,    36,    15,    18,    22,    70,    71,
      24,    66,    61,    25,    49,    35,    71,    31,    47,    48,
      33,    49,    63,    72,    61,    63,    21,    21,    36,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    55,    55,
      56,    56,    57,    57,    57,    57,    58,    58,    59,    59,
      60,    61,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    66,    66,    66,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     6,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     3,
       2,     3,     0,     1,     2,     1,     4,     3,     3,     3,
       3,     5,     5,     5,     9,     5,     5,     7,     3,     7,
       2,     1,     3,     2,     2,     3,     2,     1,     3,     1,
       3,     2,     1,     6,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     1,     1,     1,     1,     1,     4,     1,     0,     1,
       1,     3
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
  case 2: /* program: declaration_or_function_list  */
#line 37 "parser.y"
    { printf("Expanding rule: program → declaration_or_function_list (line %d)\n", yylineno); }
#line 1284 "parser.tab.c"
    break;

  case 3: /* declaration_or_function_list: declaration_or_function_list declaration_or_function  */
#line 42 "parser.y"
    { printf("Expanding rule: declaration_or_function_list → declaration_or_function_list declaration_or_function (line %d)\n", yylineno); }
#line 1290 "parser.tab.c"
    break;

  case 4: /* declaration_or_function_list: declaration_or_function  */
#line 44 "parser.y"
    { printf("Expanding rule: declaration_or_function_list → declaration_or_function (line %d)\n", yylineno); }
#line 1296 "parser.tab.c"
    break;

  case 7: /* global_declaration: type_specifier var_list SEMI  */
#line 54 "parser.y"
    { printf("Expanding rule: global_declaration → type_specifier var_list SEMI (line %d)\n", yylineno); }
#line 1302 "parser.tab.c"
    break;

  case 8: /* function_definition: type_specifier main_or_id LPAREN parameter_list_opt RPAREN compound_stmt  */
#line 61 "parser.y"
                                                                             { printf("Expanding rule: function_definition → type_specifier main_or_id LPAREN parameter_list_opt RPAREN compound_stmt (line %d)\n", yylineno); }
#line 1308 "parser.tab.c"
    break;

  case 9: /* function_definition: type_specifier main_or_id LPAREN parameter_list_opt RPAREN SEMI  */
#line 62 "parser.y"
                                                                      { printf("Expanding rule: function_definition → type_specifier main_or_id LPAREN parameter_list_opt RPAREN SEMI (line %d)\n", yylineno); }
#line 1314 "parser.tab.c"
    break;

  case 10: /* main_or_id: MAIN  */
#line 66 "parser.y"
         { printf("Expanding rule: main_or_id → MAIN (line %d)\n", yylineno); }
#line 1320 "parser.tab.c"
    break;

  case 11: /* main_or_id: IDENTIFIER  */
#line 67 "parser.y"
                 { printf("Expanding rule: main_or_id → IDENTIFIER (line %d)\n", yylineno); }
#line 1326 "parser.tab.c"
    break;

  case 12: /* type_specifier: INT  */
#line 71 "parser.y"
        { printf("Expanding rule: type_specifier → INT (line %d)\n", yylineno); }
#line 1332 "parser.tab.c"
    break;

  case 13: /* type_specifier: FLOAT  */
#line 72 "parser.y"
                { printf("Expanding rule: type_specifier → FLOAT (line %d)\n", yylineno); }
#line 1338 "parser.tab.c"
    break;

  case 14: /* type_specifier: BOOL  */
#line 73 "parser.y"
           { printf("Expanding rule: type_specifier → BOOL (line %d)\n", yylineno); }
#line 1344 "parser.tab.c"
    break;

  case 15: /* type_specifier: VOID  */
#line 74 "parser.y"
           { printf("Expanding rule: type_specifier → VOID (line %d)\n", yylineno); }
#line 1350 "parser.tab.c"
    break;

  case 16: /* parameter_list_opt: %empty  */
#line 79 "parser.y"
                { printf("Expanding rule: parameter_list_opt → /* empty */ (line %d)\n", yylineno); }
#line 1356 "parser.tab.c"
    break;

  case 17: /* parameter_list_opt: parameter_list  */
#line 80 "parser.y"
                     { printf("Expanding rule: parameter_list_opt → parameter_list (line %d)\n", yylineno); }
#line 1362 "parser.tab.c"
    break;

  case 18: /* parameter_list: parameter_declaration  */
#line 84 "parser.y"
                          { printf("Expanding rule: parameter_list → parameter_declaration (line %d)\n", yylineno); }
#line 1368 "parser.tab.c"
    break;

  case 19: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 85 "parser.y"
                                                 { printf("Expanding rule: parameter_list → parameter_list COMMA parameter_declaration (line %d)\n", yylineno); }
#line 1374 "parser.tab.c"
    break;

  case 20: /* parameter_declaration: type_specifier IDENTIFIER  */
#line 89 "parser.y"
                              { printf("Expanding rule: parameter_declaration → type_specifier IDENTIFIER (line %d)\n", yylineno); }
#line 1380 "parser.tab.c"
    break;

  case 21: /* compound_stmt: LBRACE stmt_list_opt RBRACE  */
#line 94 "parser.y"
                                { printf("Expanding rule: compound_stmt → LBRACE stmt_list_opt RBRACE (line %d)\n", yylineno); }
#line 1386 "parser.tab.c"
    break;

  case 22: /* stmt_list_opt: %empty  */
#line 98 "parser.y"
                { printf("Expanding rule: stmt_list_opt → /* empty */ (line %d)\n", yylineno); }
#line 1392 "parser.tab.c"
    break;

  case 23: /* stmt_list_opt: stmt_list  */
#line 99 "parser.y"
                { printf("Expanding rule: stmt_list_opt → stmt_list (line %d)\n", yylineno); }
#line 1398 "parser.tab.c"
    break;

  case 24: /* stmt_list: stmt_list stmt  */
#line 103 "parser.y"
                   { printf("Expanding rule: stmt_list → stmt_list stmt (line %d)\n", yylineno); }
#line 1404 "parser.tab.c"
    break;

  case 25: /* stmt_list: stmt  */
#line 104 "parser.y"
           { printf("Expanding rule: stmt_list → stmt (line %d)\n", yylineno); }
#line 1410 "parser.tab.c"
    break;

  case 26: /* stmt: IDENTIFIER ASSIGN expr SEMI  */
#line 109 "parser.y"
                                { printf("Expanding rule: stmt → IDENTIFIER ASSIGN expr SEMI (line %d)\n", yylineno); }
#line 1416 "parser.tab.c"
    break;

  case 27: /* stmt: IDENTIFIER INCR SEMI  */
#line 110 "parser.y"
                           { printf("Expanding rule: stmt → IDENTIFIER INCR SEMI (line %d)\n", yylineno); }
#line 1422 "parser.tab.c"
    break;

  case 28: /* stmt: IDENTIFIER DECR SEMI  */
#line 111 "parser.y"
                           { printf("Expanding rule: stmt → IDENTIFIER DECR SEMI (line %d)\n", yylineno); }
#line 1428 "parser.tab.c"
    break;

  case 29: /* stmt: INCR IDENTIFIER SEMI  */
#line 112 "parser.y"
                           { printf("Expanding rule: stmt → INCR IDENTIFIER SEMI (line %d)\n", yylineno); }
#line 1434 "parser.tab.c"
    break;

  case 30: /* stmt: DECR IDENTIFIER SEMI  */
#line 113 "parser.y"
                           { printf("Expanding rule: stmt → DECR IDENTIFIER SEMI (line %d)\n", yylineno); }
#line 1440 "parser.tab.c"
    break;

  case 31: /* stmt: IDENTIFIER LPAREN arg_list_opt RPAREN SEMI  */
#line 114 "parser.y"
                                                 { printf("Expanding rule: stmt → IDENTIFIER LPAREN arg_list_opt RPAREN SEMI (line %d)\n", yylineno); }
#line 1446 "parser.tab.c"
    break;

  case 32: /* stmt: PRINTF LPAREN arg_list RPAREN SEMI  */
#line 115 "parser.y"
                                         { printf("Expanding rule: stmt → PRINTF LPAREN arg_list RPAREN SEMI (line %d)\n", yylineno); }
#line 1452 "parser.tab.c"
    break;

  case 33: /* stmt: SCANF LPAREN IDENTIFIER RPAREN SEMI  */
#line 116 "parser.y"
                                          { printf("Expanding rule: stmt → SCANF LPAREN IDENTIFIER RPAREN SEMI (line %d)\n", yylineno); }
#line 1458 "parser.tab.c"
    break;

  case 34: /* stmt: FOR LPAREN init_expr SEMI expr SEMI update_expr RPAREN compound_stmt  */
#line 117 "parser.y"
                                                                           { printf("Expanding rule: stmt → FOR (...) (line %d)\n", yylineno); }
#line 1464 "parser.tab.c"
    break;

  case 35: /* stmt: WHILE LPAREN expr RPAREN compound_stmt  */
#line 118 "parser.y"
                                             { printf("Expanding rule: stmt → WHILE LPAREN expr RPAREN compound_stmt (line %d)\n", yylineno); }
#line 1470 "parser.tab.c"
    break;

  case 36: /* stmt: IF LPAREN expr RPAREN compound_stmt  */
#line 119 "parser.y"
                                                     { printf("Expanding rule: stmt → IF LPAREN expr RPAREN compound_stmt (line %d)\n", yylineno); }
#line 1476 "parser.tab.c"
    break;

  case 37: /* stmt: IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt  */
#line 120 "parser.y"
                                                             { printf("Expanding rule: stmt → IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt (line %d)\n", yylineno); }
#line 1482 "parser.tab.c"
    break;

  case 38: /* stmt: RETURN expr SEMI  */
#line 121 "parser.y"
                       { printf("Expanding rule: stmt → RETURN expr SEMI (line %d)\n", yylineno); }
#line 1488 "parser.tab.c"
    break;

  case 39: /* stmt: SWITCH LPAREN expr RPAREN LBRACE case_list RBRACE  */
#line 122 "parser.y"
                                                        { printf("Expanding rule: stmt → SWITCH LPAREN expr RPAREN LBRACE case_list RBRACE (line %d)\n", yylineno); }
#line 1494 "parser.tab.c"
    break;

  case 40: /* stmt: declaration SEMI  */
#line 123 "parser.y"
                       { printf("Expanding rule: stmt → declaration SEMI (line %d)\n", yylineno); }
#line 1500 "parser.tab.c"
    break;

  case 41: /* init_expr: declaration  */
#line 129 "parser.y"
                { printf("Expanding rule: init_expr → declaration (line %d)\n", yylineno); }
#line 1506 "parser.tab.c"
    break;

  case 42: /* init_expr: IDENTIFIER ASSIGN expr  */
#line 130 "parser.y"
                             { printf("Expanding rule: init_expr → IDENTIFIER ASSIGN expr (line %d)\n", yylineno); }
#line 1512 "parser.tab.c"
    break;

  case 43: /* update_expr: IDENTIFIER INCR  */
#line 135 "parser.y"
                    { printf("Expanding rule: update_expr → IDENTIFIER INCR (line %d)\n", yylineno); }
#line 1518 "parser.tab.c"
    break;

  case 44: /* update_expr: IDENTIFIER DECR  */
#line 136 "parser.y"
                      { printf("Expanding rule: update_expr → IDENTIFIER DECR (line %d)\n", yylineno); }
#line 1524 "parser.tab.c"
    break;

  case 45: /* update_expr: IDENTIFIER ASSIGN expr  */
#line 137 "parser.y"
                             { printf("Expanding rule: update_expr → IDENTIFIER ASSIGN expr (line %d)\n", yylineno); }
#line 1530 "parser.tab.c"
    break;

  case 46: /* declaration: type_specifier var_list  */
#line 142 "parser.y"
                             { printf("Expanding rule: declaration → type_specifier var_list (line %d)\n", yylineno); }
#line 1536 "parser.tab.c"
    break;

  case 47: /* var_list: var_decl  */
#line 147 "parser.y"
             { printf("Expanding rule: var_list → var_decl (line %d)\n", yylineno); }
#line 1542 "parser.tab.c"
    break;

  case 48: /* var_list: var_list COMMA var_decl  */
#line 148 "parser.y"
                              { printf("Expanding rule: var_list → var_list COMMA var_decl (line %d)\n", yylineno); }
#line 1548 "parser.tab.c"
    break;

  case 49: /* var_decl: IDENTIFIER  */
#line 153 "parser.y"
               { printf("Expanding rule: var_decl → IDENTIFIER (line %d)\n", yylineno); }
#line 1554 "parser.tab.c"
    break;

  case 50: /* var_decl: IDENTIFIER ASSIGN expr  */
#line 154 "parser.y"
                             { printf("Expanding rule: var_decl → IDENTIFIER ASSIGN expr (line %d)\n", yylineno); }
#line 1560 "parser.tab.c"
    break;

  case 51: /* case_list: case_list case_stmt  */
#line 159 "parser.y"
                        { printf("Expanding rule: case_list → case_list case_stmt (line %d)\n", yylineno); }
#line 1566 "parser.tab.c"
    break;

  case 52: /* case_list: case_stmt  */
#line 160 "parser.y"
                { printf("Expanding rule: case_list → case_stmt (line %d)\n", yylineno); }
#line 1572 "parser.tab.c"
    break;

  case 53: /* case_stmt: CASE NUMBER COLON stmt_list BREAK SEMI  */
#line 164 "parser.y"
                                           { printf("Expanding rule: case_stmt → CASE NUMBER COLON stmt_list BREAK SEMI (line %d)\n", yylineno); }
#line 1578 "parser.tab.c"
    break;

  case 54: /* case_stmt: DEFAULT COLON stmt_list BREAK SEMI  */
#line 165 "parser.y"
                                         { printf("Expanding rule: case_stmt → DEFAULT COLON stmt_list BREAK SEMI (line %d)\n", yylineno); }
#line 1584 "parser.tab.c"
    break;

  case 55: /* case_stmt: DEFAULT COLON stmt_list  */
#line 166 "parser.y"
                              { printf("Expanding rule: case_stmt → DEFAULT COLON stmt_list (line %d)\n", yylineno); }
#line 1590 "parser.tab.c"
    break;

  case 56: /* expr: expr OR expr  */
#line 172 "parser.y"
                 { printf("Expanding rule: expr → expr OR expr (line %d)\n", yylineno); }
#line 1596 "parser.tab.c"
    break;

  case 57: /* expr: expr EQ expr  */
#line 173 "parser.y"
                   { printf("Expanding rule: expr → expr EQ expr (line %d)\n", yylineno); }
#line 1602 "parser.tab.c"
    break;

  case 58: /* expr: expr GT expr  */
#line 174 "parser.y"
                   { printf("Expanding rule: expr → expr GT expr (line %d)\n", yylineno); }
#line 1608 "parser.tab.c"
    break;

  case 59: /* expr: expr LT expr  */
#line 175 "parser.y"
                   { printf("Expanding rule: expr → expr LT expr (line %d)\n", yylineno); }
#line 1614 "parser.tab.c"
    break;

  case 60: /* expr: expr LE expr  */
#line 176 "parser.y"
                   { printf("Expanding rule: expr → expr LE expr (line %d)\n", yylineno); }
#line 1620 "parser.tab.c"
    break;

  case 61: /* expr: expr PLUS expr  */
#line 177 "parser.y"
                     { printf("Expanding rule: expr → expr PLUS expr (line %d)\n", yylineno); }
#line 1626 "parser.tab.c"
    break;

  case 62: /* expr: expr MINUS expr  */
#line 178 "parser.y"
                      { printf("Expanding rule: expr → expr MINUS expr (line %d)\n", yylineno); }
#line 1632 "parser.tab.c"
    break;

  case 63: /* expr: expr MULT expr  */
#line 179 "parser.y"
                     { printf("Expanding rule: expr → expr MULT expr (line %d)\n", yylineno); }
#line 1638 "parser.tab.c"
    break;

  case 64: /* expr: expr DIV expr  */
#line 180 "parser.y"
                    { printf("Expanding rule: expr → expr DIV expr (line %d)\n", yylineno); }
#line 1644 "parser.tab.c"
    break;

  case 65: /* expr: expr MOD expr  */
#line 181 "parser.y"
                    { printf("Expanding rule: expr → expr MOD expr (line %d)\n", yylineno); }
#line 1650 "parser.tab.c"
    break;

  case 66: /* expr: expr GE expr  */
#line 182 "parser.y"
                       { printf("Expanding rule: expr → expr GE expr (line %d)\n", yylineno); }
#line 1656 "parser.tab.c"
    break;

  case 67: /* expr: expr NEQ expr  */
#line 183 "parser.y"
                    { printf("Expanding rule: expr → expr NEQ expr (line %d)\n", yylineno); }
#line 1662 "parser.tab.c"
    break;

  case 68: /* expr: expr AND expr  */
#line 184 "parser.y"
                    { printf("Expanding rule: expr → expr AND expr (line %d)\n", yylineno); }
#line 1668 "parser.tab.c"
    break;

  case 69: /* expr: NOT expr  */
#line 185 "parser.y"
               { printf("Expanding rule: expr → NOT expr (line %d)\n", yylineno); }
#line 1674 "parser.tab.c"
    break;

  case 70: /* expr: LPAREN expr RPAREN  */
#line 186 "parser.y"
                         { printf("Expanding rule: expr → LPAREN expr RPAREN (line %d)\n", yylineno); }
#line 1680 "parser.tab.c"
    break;

  case 71: /* expr: IDENTIFIER  */
#line 187 "parser.y"
                 { printf("Expanding rule: expr → IDENTIFIER (line %d)\n", yylineno); }
#line 1686 "parser.tab.c"
    break;

  case 72: /* expr: TRUE  */
#line 188 "parser.y"
               { printf("Expanding rule: expr → TRUE (line %d)\n", yylineno); }
#line 1692 "parser.tab.c"
    break;

  case 73: /* expr: FALSE  */
#line 189 "parser.y"
            { printf("Expanding rule: expr → FALSE (line %d)\n", yylineno); }
#line 1698 "parser.tab.c"
    break;

  case 74: /* expr: NUMBER  */
#line 190 "parser.y"
             { printf("Expanding rule: expr → NUMBER (line %d)\n", yylineno); }
#line 1704 "parser.tab.c"
    break;

  case 75: /* expr: FLOAT  */
#line 191 "parser.y"
            { printf("Expanding rule: expr → FLOAT (line %d)\n", yylineno); }
#line 1710 "parser.tab.c"
    break;

  case 76: /* expr: IDENTIFIER LPAREN arg_list_opt RPAREN  */
#line 192 "parser.y"
                                            { printf("Expanding rule: expr → IDENTIFIER LPAREN arg_list_opt RPAREN (line %d)\n", yylineno); }
#line 1716 "parser.tab.c"
    break;

  case 77: /* expr: STRING  */
#line 193 "parser.y"
             { printf("Expanding rule: expr → STRING (line %d)\n", yylineno); }
#line 1722 "parser.tab.c"
    break;

  case 78: /* arg_list_opt: %empty  */
#line 199 "parser.y"
                { printf("Expanding rule: arg_list_opt → /* empty */ (line %d)\n", yylineno); }
#line 1728 "parser.tab.c"
    break;

  case 79: /* arg_list_opt: arg_list  */
#line 200 "parser.y"
               { printf("Expanding rule: arg_list_opt → arg_list (line %d)\n", yylineno); }
#line 1734 "parser.tab.c"
    break;

  case 80: /* arg_list: expr  */
#line 204 "parser.y"
         { printf("Expanding rule: arg_list → expr (line %d)\n", yylineno); }
#line 1740 "parser.tab.c"
    break;

  case 81: /* arg_list: arg_list COMMA expr  */
#line 205 "parser.y"
                          { printf("Expanding rule: arg_list → arg_list COMMA expr (line %d)\n", yylineno); }
#line 1746 "parser.tab.c"
    break;


#line 1750 "parser.tab.c"

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

#line 208 "parser.y"


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
    int result = yyparse();
    fclose(file);
    if (result == 0) {
        printf("Parsing successful!\n");
    } else {
        printf("Parsing failed with errors.\n");
    }
    return result;
}
