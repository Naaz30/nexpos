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
#line 1 "splparser.y"

#include "data.h"
#include "spl.h"
#include "file.h"
#include "node.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#line 82 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    ALIAS = 258,                   /* ALIAS  */
    DEFINE = 259,                  /* DEFINE  */
    DO = 260,                      /* DO  */
    ELSE = 261,                    /* ELSE  */
    ENDIF = 262,                   /* ENDIF  */
    ENDWHILE = 263,                /* ENDWHILE  */
    IF = 264,                      /* IF  */
    RETURN = 265,                  /* RETURN  */
    IRETURN = 266,                 /* IRETURN  */
    LOAD = 267,                    /* LOAD  */
    STORE = 268,                   /* STORE  */
    THEN = 269,                    /* THEN  */
    WHILE = 270,                   /* WHILE  */
    HALT = 271,                    /* HALT  */
    REG = 272,                     /* REG  */
    NUM = 273,                     /* NUM  */
    ASSIGNOP = 274,                /* ASSIGNOP  */
    ARITHOP1 = 275,                /* ARITHOP1  */
    ARITHOP2 = 276,                /* ARITHOP2  */
    RELOP = 277,                   /* RELOP  */
    LOGOP = 278,                   /* LOGOP  */
    NOTOP = 279,                   /* NOTOP  */
    ID = 280,                      /* ID  */
    BREAK = 281,                   /* BREAK  */
    CONTINUE = 282,                /* CONTINUE  */
    CHKPT = 283,                   /* CHKPT  */
    READ = 284,                    /* READ  */
    READI = 285,                   /* READI  */
    PRINT = 286,                   /* PRINT  */
    STRING = 287,                  /* STRING  */
    INLINE = 288,                  /* INLINE  */
    BACKUP = 289,                  /* BACKUP  */
    RESTORE = 290,                 /* RESTORE  */
    LOADI = 291,                   /* LOADI  */
    GOTO = 292,                    /* GOTO  */
    CALL = 293,                    /* CALL  */
    ENCRYPT = 294,                 /* ENCRYPT  */
    PORT = 295,                    /* PORT  */
    MULTIPUSH = 296,               /* MULTIPUSH  */
    MULTIPOP = 297,                /* MULTIPOP  */
    START = 298,                   /* START  */
    RESET = 299,                   /* RESET  */
    TSL = 300,                     /* TSL  */
    UMIN = 301                     /* UMIN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ALIAS 258
#define DEFINE 259
#define DO 260
#define ELSE 261
#define ENDIF 262
#define ENDWHILE 263
#define IF 264
#define RETURN 265
#define IRETURN 266
#define LOAD 267
#define STORE 268
#define THEN 269
#define WHILE 270
#define HALT 271
#define REG 272
#define NUM 273
#define ASSIGNOP 274
#define ARITHOP1 275
#define ARITHOP2 276
#define RELOP 277
#define LOGOP 278
#define NOTOP 279
#define ID 280
#define BREAK 281
#define CONTINUE 282
#define CHKPT 283
#define READ 284
#define READI 285
#define PRINT 286
#define STRING 287
#define INLINE 288
#define BACKUP 289
#define RESTORE 290
#define LOADI 291
#define GOTO 292
#define CALL 293
#define ENCRYPT 294
#define PORT 295
#define MULTIPUSH 296
#define MULTIPOP 297
#define START 298
#define RESET 299
#define TSL 300
#define UMIN 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "splparser.y"

    struct tree *n;

#line 231 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ALIAS = 3,                      /* ALIAS  */
  YYSYMBOL_DEFINE = 4,                     /* DEFINE  */
  YYSYMBOL_DO = 5,                         /* DO  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_ENDIF = 7,                      /* ENDIF  */
  YYSYMBOL_ENDWHILE = 8,                   /* ENDWHILE  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_IRETURN = 11,                   /* IRETURN  */
  YYSYMBOL_LOAD = 12,                      /* LOAD  */
  YYSYMBOL_STORE = 13,                     /* STORE  */
  YYSYMBOL_THEN = 14,                      /* THEN  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_HALT = 16,                      /* HALT  */
  YYSYMBOL_REG = 17,                       /* REG  */
  YYSYMBOL_NUM = 18,                       /* NUM  */
  YYSYMBOL_ASSIGNOP = 19,                  /* ASSIGNOP  */
  YYSYMBOL_ARITHOP1 = 20,                  /* ARITHOP1  */
  YYSYMBOL_ARITHOP2 = 21,                  /* ARITHOP2  */
  YYSYMBOL_RELOP = 22,                     /* RELOP  */
  YYSYMBOL_LOGOP = 23,                     /* LOGOP  */
  YYSYMBOL_NOTOP = 24,                     /* NOTOP  */
  YYSYMBOL_ID = 25,                        /* ID  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_CHKPT = 28,                     /* CHKPT  */
  YYSYMBOL_READ = 29,                      /* READ  */
  YYSYMBOL_READI = 30,                     /* READI  */
  YYSYMBOL_PRINT = 31,                     /* PRINT  */
  YYSYMBOL_STRING = 32,                    /* STRING  */
  YYSYMBOL_INLINE = 33,                    /* INLINE  */
  YYSYMBOL_BACKUP = 34,                    /* BACKUP  */
  YYSYMBOL_RESTORE = 35,                   /* RESTORE  */
  YYSYMBOL_LOADI = 36,                     /* LOADI  */
  YYSYMBOL_GOTO = 37,                      /* GOTO  */
  YYSYMBOL_CALL = 38,                      /* CALL  */
  YYSYMBOL_ENCRYPT = 39,                   /* ENCRYPT  */
  YYSYMBOL_PORT = 40,                      /* PORT  */
  YYSYMBOL_MULTIPUSH = 41,                 /* MULTIPUSH  */
  YYSYMBOL_MULTIPOP = 42,                  /* MULTIPOP  */
  YYSYMBOL_START = 43,                     /* START  */
  YYSYMBOL_RESET = 44,                     /* RESET  */
  YYSYMBOL_TSL = 45,                       /* TSL  */
  YYSYMBOL_UMIN = 46,                      /* UMIN  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ','  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* ':'  */
  YYSYMBOL_52_ = 52,                       /* '['  */
  YYSYMBOL_53_ = 53,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_body = 55,                      /* body  */
  YYSYMBOL_definelistpad = 56,             /* definelistpad  */
  YYSYMBOL_definelist = 57,                /* definelist  */
  YYSYMBOL_definestmt = 58,                /* definestmt  */
  YYSYMBOL_stmtlist = 59,                  /* stmtlist  */
  YYSYMBOL_stmt = 60,                      /* stmt  */
  YYSYMBOL_expr = 61,                      /* expr  */
  YYSYMBOL_ifpad = 62,                     /* ifpad  */
  YYSYMBOL_elsepad = 63,                   /* elsepad  */
  YYSYMBOL_whilepad = 64,                  /* whilepad  */
  YYSYMBOL_reglist = 65,                   /* reglist  */
  YYSYMBOL_ids = 66                        /* ids  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      48,    50,     2,     2,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    47,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    29,    29,    36,    41,    42,    45,    48,    56,    59,
      64,    76,    88,    93,    99,   105,   109,   112,   115,   118,
     121,   124,   132,   140,   143,   150,   153,   156,   164,   167,
     170,   173,   181,   188,   195,   199,   202,   205,   208,   213,
     216,   219,   222,   225,   230,   233,   237,   240,   243,   246,
     249,   254,   259,   264,   271,   274,   279,   282
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
  "\"end of file\"", "error", "\"invalid token\"", "ALIAS", "DEFINE",
  "DO", "ELSE", "ENDIF", "ENDWHILE", "IF", "RETURN", "IRETURN", "LOAD",
  "STORE", "THEN", "WHILE", "HALT", "REG", "NUM", "ASSIGNOP", "ARITHOP1",
  "ARITHOP2", "RELOP", "LOGOP", "NOTOP", "ID", "BREAK", "CONTINUE",
  "CHKPT", "READ", "READI", "PRINT", "STRING", "INLINE", "BACKUP",
  "RESTORE", "LOADI", "GOTO", "CALL", "ENCRYPT", "PORT", "MULTIPUSH",
  "MULTIPOP", "START", "RESET", "TSL", "UMIN", "';'", "'('", "','", "')'",
  "':'", "'['", "']'", "$accept", "body", "definelistpad", "definelist",
  "definestmt", "stmtlist", "stmt", "expr", "ifpad", "elsepad", "whilepad",
  "reglist", "ids", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -89,    17,   232,     5,   -89,     8,   -89,   -28,   -10,    -9,
      -5,   -89,    -7,   -89,   -89,    39,    24,    -1,    11,    21,
      23,    26,     7,    24,   -89,    42,    28,    34,    37,    46,
      61,     7,    47,    48,    50,    56,    64,    24,    24,   232,
     -89,   290,    24,    24,   -89,    94,   -89,   103,   -89,   -89,
      24,    24,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,    91,   281,    97,   -89,   -89,    24,   101,   102,   104,
     128,   128,   -89,   -89,    24,    32,    -8,   -89,   -14,    24,
      24,    24,    24,   317,   313,   -13,   111,    57,   273,   -89,
     -89,   -89,   277,   -89,   -89,   -89,   114,   115,   116,    67,
     -89,   -89,   120,   285,   163,   -89,     9,    40,   232,   232,
     143,   175,   -89,    24,    24,    24,   128,   147,   155,   -89,
     -89,   -89,    98,   144,   -89,   160,    71,   265,   269,   -89,
     -89,   -89,   -89,   162,   232,   164,   -89,   181,   187,   190,
     -89,   188,   -89,   -89,   -89,   -89,   191,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     3,     1,     0,    51,     0,     0,     0,
       0,    53,     0,    57,    48,     0,     0,    56,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       9,     0,     0,     0,    49,     0,     4,     0,    19,    20,
       0,     0,    23,    43,    56,    44,    34,    21,    22,    25,
      26,     0,     0,     0,    29,    30,     0,     0,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    24,     0,    32,    33,    31,    55,     0,     0,     0,
      47,    46,     0,     0,    39,    40,    41,    42,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,    45,
      11,    10,     0,     0,     6,     0,     0,     0,     0,    54,
      35,    36,    52,     0,     0,     0,     7,     0,     0,     0,
      12,     0,    14,    16,    17,    18,     0,    13
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -89,   -89,   -89,   -89,   -89,   -88,   -39,   -15,   -89,   -89,
     -89,   -69,    -6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,    46,    39,    40,    41,    42,   134,
      43,    97,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      77,    55,    98,    13,    14,   110,    15,   111,    62,    45,
      16,    54,    79,    80,    81,    82,    61,     4,    24,    48,
     122,   123,    75,    76,    13,    69,   102,    83,    84,    79,
      80,    36,    54,    47,    37,    87,    88,    49,    38,    50,
      52,    13,    14,    51,    15,   101,   141,   129,    16,    54,
      56,    92,    79,    80,    81,    82,    24,    53,    57,    99,
      79,    80,    81,   103,   104,   105,   106,   107,    58,    36,
      59,    67,    37,    60,    63,    64,    38,    79,    80,    81,
      82,    65,   100,    77,    77,    66,    68,    79,    80,    81,
      82,    79,    80,    81,    82,    70,    71,    72,   126,   127,
     128,     5,    77,    73,   132,   133,   113,     6,     7,     8,
       9,    10,    74,    11,    12,    13,    14,   119,    15,    85,
      86,   137,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    89,    32,
      33,    34,    35,    36,    91,    96,    37,     5,    93,    94,
      38,    95,   135,     6,     7,     8,     9,    10,   112,    11,
      12,    13,    14,   116,    15,   117,   118,   120,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    80,    32,    33,    34,    35,    36,
     124,     5,    37,   125,   130,   146,    38,     6,     7,     8,
       9,    10,   131,    11,    12,    13,    14,   136,    15,   140,
       0,   142,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   143,    32,
      33,    34,    35,    36,   144,     5,    37,   145,   147,     0,
      38,     6,     7,     8,     9,    10,     0,    11,    12,    13,
      14,     0,    15,     0,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,    33,    34,    35,    36,     0,     0,
      37,     0,     0,     0,    38,    79,    80,    81,    82,    79,
      80,    81,    82,    79,    80,    81,    82,    79,    80,    81,
      82,    79,    80,    81,    82,    79,    80,    81,    82,    78,
      79,    80,    81,    82,     0,   138,     0,     0,   109,   139,
       0,     0,   114,     0,     0,     0,   115,     0,    90,     0,
       0,   108,   121,    79,    80,    81,    82,    79,    80,    81,
      82
};

static const yytype_int16 yycheck[] =
{
      39,    16,    71,    17,    18,    18,    20,    20,    23,     4,
      24,    25,    20,    21,    22,    23,    22,     0,    32,    47,
     108,   109,    37,    38,    17,    31,    40,    42,    43,    20,
      21,    45,    25,    25,    48,    50,    51,    47,    52,    48,
      47,    17,    18,    48,    20,    53,   134,   116,    24,    25,
      51,    66,    20,    21,    22,    23,    32,    18,    47,    74,
      20,    21,    22,    78,    79,    80,    81,    82,    47,    45,
      47,    25,    48,    47,    32,    47,    52,    20,    21,    22,
      23,    47,    50,   122,   123,    48,    25,    20,    21,    22,
      23,    20,    21,    22,    23,    48,    48,    47,   113,   114,
     115,     3,   141,    47,     6,     7,    49,     9,    10,    11,
      12,    13,    48,    15,    16,    17,    18,    50,    20,    25,
      17,    50,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    47,    41,
      42,    43,    44,    45,    47,    17,    48,     3,    47,    47,
      52,    47,     8,     9,    10,    11,    12,    13,    47,    15,
      16,    17,    18,    49,    20,    50,    50,    47,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    21,    41,    42,    43,    44,    45,
      47,     3,    48,    18,    47,     7,    52,     9,    10,    11,
      12,    13,    47,    15,    16,    17,    18,    47,    20,    47,
      -1,    47,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    47,    41,
      42,    43,    44,    45,    47,     3,    48,    47,    47,    -1,
      52,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    -1,    -1,    52,    20,    21,    22,    23,    20,
      21,    22,    23,    20,    21,    22,    23,    20,    21,    22,
      23,    20,    21,    22,    23,    20,    21,    22,    23,    19,
      20,    21,    22,    23,    -1,    50,    -1,    -1,     5,    50,
      -1,    -1,    49,    -1,    -1,    -1,    49,    -1,    47,    -1,
      -1,    14,    47,    20,    21,    22,    23,    20,    21,    22,
      23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,    57,     0,     3,     9,    10,    11,    12,
      13,    15,    16,    17,    18,    20,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    41,    42,    43,    44,    45,    48,    52,    59,
      60,    61,    62,    64,    66,     4,    58,    25,    47,    47,
      48,    48,    47,    18,    25,    61,    51,    47,    47,    47,
      47,    66,    61,    32,    47,    47,    48,    25,    25,    66,
      48,    48,    47,    47,    48,    61,    61,    60,    19,    20,
      21,    22,    23,    61,    61,    25,    17,    61,    61,    47,
      47,    47,    61,    47,    47,    47,    17,    65,    65,    61,
      50,    53,    40,    61,    61,    61,    61,    61,    14,     5,
      18,    20,    47,    49,    49,    49,    49,    50,    50,    50,
      47,    47,    59,    59,    47,    18,    61,    61,    61,    65,
      47,    47,     6,     7,    63,     8,    47,    50,    50,    50,
      47,    59,    47,    47,    47,    47,     7,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    57,    57,    58,    58,    59,    59,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    63,    64,    65,    65,    66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     4,     5,     2,     1,
       4,     4,     6,     8,     6,     4,     7,     7,     7,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     3,     2,
       2,     3,     3,     3,     2,     5,     5,     2,     2,     3,
       3,     3,     3,     2,     2,     4,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1
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
  case 2: /* body: definelistpad stmtlist  */
#line 29 "splparser.y"
                                {
                                    codegen((yyvsp[0].n));
                                    out_linecount++;
                                    fprintf(fp, "HALT");
                                }
#line 1406 "y.tab.c"
    break;

  case 3: /* definelistpad: definelist  */
#line 36 "splparser.y"
                                {
                                    add_predefined_constants();
                                }
#line 1414 "y.tab.c"
    break;

  case 6: /* definestmt: DEFINE ID NUM ';'  */
#line 45 "splparser.y"
                                                {
                                                    insert_constant((yyvsp[-2].n)->name, (yyvsp[-1].n)->value);
                                                }
#line 1422 "y.tab.c"
    break;

  case 7: /* definestmt: DEFINE ID ARITHOP1 NUM ';'  */
#line 48 "splparser.y"
                                                {
                                                    if (node_getType((yyvsp[-2].n)) == NODE_SUB)
                                                        insert_constant((yyvsp[-3].n)->name, -1 * (yyvsp[-1].n)->value);
                                                    else
                                                        insert_constant((yyvsp[-3].n)->name, (yyvsp[-1].n)->value);
                                                }
#line 1433 "y.tab.c"
    break;

  case 8: /* stmtlist: stmtlist stmt  */
#line 56 "splparser.y"
                                                {
                                                    (yyval.n) = create_nontermNode(NODE_STMTLIST, (yyvsp[-1].n), (yyvsp[0].n));
                                                }
#line 1441 "y.tab.c"
    break;

  case 9: /* stmtlist: stmt  */
#line 59 "splparser.y"
                                                {
                                                    (yyval.n) = (yyvsp[0].n);
                                                }
#line 1449 "y.tab.c"
    break;

  case 10: /* stmt: expr ASSIGNOP expr ';'  */
#line 64 "splparser.y"
                                                {
                                                    if (node_getType((yyvsp[-3].n)) == NODE_REG || node_getType((yyvsp[-3].n)) == NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[-2].n)->value = 2;
                                                        (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-3].n), (yyvsp[-1].n), NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n", linecount);
                                                        exit(0);
                                                    }
                                                }
#line 1466 "y.tab.c"
    break;

  case 11: /* stmt: expr ASSIGNOP PORT ';'  */
#line 76 "splparser.y"
                                                {
                                                    if (node_getType((yyvsp[-3].n)) == NODE_REG || node_getType((yyvsp[-3].n)) == NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[-2].n)->value = 2;
                                                        (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-3].n), (yyvsp[-1].n), NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n",  linecount);
                                                        exit(0);
                                                    }
                                                }
#line 1483 "y.tab.c"
    break;

  case 12: /* stmt: ifpad expr THEN stmtlist ENDIF ';'  */
#line 88 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-5].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                            pop_alias();
                                                            depth--;
                                                        }
#line 1493 "y.tab.c"
    break;

  case 13: /* stmt: ifpad expr THEN stmtlist elsepad stmtlist ENDIF ';'  */
#line 94 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-7].n), (yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n));
                                                            pop_alias();
                                                            depth--;
                                                        }
#line 1503 "y.tab.c"
    break;

  case 14: /* stmt: whilepad expr DO stmtlist ENDWHILE ';'  */
#line 99 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-5].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                            pop_alias();
                                                            depth--;
                                                            flag_break--;
                                                        }
#line 1514 "y.tab.c"
    break;

  case 15: /* stmt: ALIAS ID REG ';'  */
#line 105 "splparser.y"
                                                        {
                                                            push_alias((yyvsp[-2].n)->name, (yyvsp[-1].n)->value);
                                                            (yyval.n) = NULL;
                                                        }
#line 1523 "y.tab.c"
    break;

  case 16: /* stmt: LOAD '(' expr ',' expr ')' ';'  */
#line 109 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                        }
#line 1531 "y.tab.c"
    break;

  case 17: /* stmt: STORE '(' expr ',' expr ')' ';'  */
#line 112 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                        }
#line 1539 "y.tab.c"
    break;

  case 18: /* stmt: LOADI '(' expr ',' expr ')' ';'  */
#line 115 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                        }
#line 1547 "y.tab.c"
    break;

  case 19: /* stmt: RETURN ';'  */
#line 118 "splparser.y"
                                                        {
                                                            (yyval.n) = (yyvsp[-1].n);
                                                        }
#line 1555 "y.tab.c"
    break;

  case 20: /* stmt: IRETURN ';'  */
#line 121 "splparser.y"
                                                        {
                                                            (yyval.n) = (yyvsp[-1].n);
                                                        }
#line 1563 "y.tab.c"
    break;

  case 21: /* stmt: BREAK ';'  */
#line 124 "splparser.y"
                                                        {
                                                            if (flag_break == 0)
                                                            {
                                                                printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                                exit(0);
                                                            }
                                                            (yyval.n)=(yyvsp[-1].n);
                                                        }
#line 1576 "y.tab.c"
    break;

  case 22: /* stmt: CONTINUE ';'  */
#line 132 "splparser.y"
                                            {
                                                if (flag_break==0)
                                                {
                                                    printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1589 "y.tab.c"
    break;

  case 23: /* stmt: HALT ';'  */
#line 140 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1597 "y.tab.c"
    break;

  case 24: /* stmt: INLINE STRING ';'  */
#line 143 "splparser.y"
                                            {
                                                int temp;
                                                (yyvsp[-1].n)->name++;
                                                temp = strlen((yyvsp[-1].n)->name);
                                                (yyvsp[-1].n)->name[temp - 1] = '\0';
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1609 "y.tab.c"
    break;

  case 25: /* stmt: CHKPT ';'  */
#line 150 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1617 "y.tab.c"
    break;

  case 26: /* stmt: READ ';'  */
#line 153 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1625 "y.tab.c"
    break;

  case 27: /* stmt: READI ids ';'  */
#line 156 "splparser.y"
                                            {
                                                if (node_getType((yyvsp[-1].n)) != NODE_REG || !isAllowedRegister((yyvsp[-1].n)->value))
                                                {
                                                    printf("\n%d: Invalid operand in read!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1638 "y.tab.c"
    break;

  case 28: /* stmt: PRINT expr ';'  */
#line 164 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1646 "y.tab.c"
    break;

  case 29: /* stmt: BACKUP ';'  */
#line 167 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                            }
#line 1654 "y.tab.c"
    break;

  case 30: /* stmt: RESTORE ';'  */
#line 170 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                            }
#line 1662 "y.tab.c"
    break;

  case 31: /* stmt: ENCRYPT ids ';'  */
#line 173 "splparser.y"
                                            {
                                                if (node_getType((yyvsp[-1].n)) != NODE_REG || !isAllowedRegister((yyvsp[-1].n)->value))
                                                {
                                                    printf("\n%d: Invalid operand in encrypt!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1675 "y.tab.c"
    break;

  case 32: /* stmt: GOTO ID ';'  */
#line 181 "splparser.y"
                                            {
                                                if (lookup_constant(node_getName((yyvsp[-1].n))) != NULL) // if the address to jump to is a predefined value in constants file
                                                    (yyval.n) = create_tree((yyvsp[-2].n), substitute_id((yyvsp[-1].n)), NULL, NULL);
                                                else
                                                    (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                                (yyval.n)->value = linecount; // Hack to show line numbers in case of syntax errors
                                            }
#line 1687 "y.tab.c"
    break;

  case 33: /* stmt: CALL ID ';'  */
#line 188 "splparser.y"
                                            {
                                                if(lookup_constant(node_getName((yyvsp[-1].n))) != NULL) // if the address to jump to is a predefined value in constants file
                                                    (yyval.n) = create_tree((yyvsp[-2].n), substitute_id((yyvsp[-1].n)), NULL, NULL);
                                                else
                                                    (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                                (yyval.n)->value = linecount; // Hack to show line numbers in case of syntax errors
                                            }
#line 1699 "y.tab.c"
    break;

  case 34: /* stmt: ID ':'  */
#line 195 "splparser.y"
                                            {
                                                label_add(node_getName((yyvsp[-1].n)));
                                                (yyval.n) = create_nontermNode(NODE_LABEL_DEF, (yyvsp[-1].n), NULL);
                                            }
#line 1708 "y.tab.c"
    break;

  case 35: /* stmt: MULTIPUSH '(' reglist ')' ';'  */
#line 199 "splparser.y"
                                                {
                                                    (yyval.n) = create_tree((yyvsp[-4].n), (yyvsp[-2].n), NULL, NULL);
                                                }
#line 1716 "y.tab.c"
    break;

  case 36: /* stmt: MULTIPOP '(' reglist ')' ';'  */
#line 202 "splparser.y"
                                                {
                                                    (yyval.n) = create_tree((yyvsp[-4].n), (yyvsp[-2].n), NULL, NULL);
                                                }
#line 1724 "y.tab.c"
    break;

  case 37: /* stmt: START ';'  */
#line 205 "splparser.y"
                                                {
                                                    (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                                }
#line 1732 "y.tab.c"
    break;

  case 38: /* stmt: RESET ';'  */
#line 208 "splparser.y"
                                                {
                                                    (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                                }
#line 1740 "y.tab.c"
    break;

  case 39: /* expr: expr ARITHOP1 expr  */
#line 213 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1748 "y.tab.c"
    break;

  case 40: /* expr: expr ARITHOP2 expr  */
#line 216 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1756 "y.tab.c"
    break;

  case 41: /* expr: expr RELOP expr  */
#line 219 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1764 "y.tab.c"
    break;

  case 42: /* expr: expr LOGOP expr  */
#line 222 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1772 "y.tab.c"
    break;

  case 43: /* expr: ARITHOP1 NUM  */
#line 225 "splparser.y"
                                            {
                                                if (node_getType((yyvsp[-1].n)) == NODE_SUB)
                                                    (yyvsp[0].n)->value = (yyvsp[0].n)->value * -1;
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1782 "y.tab.c"
    break;

  case 44: /* expr: NOTOP expr  */
#line 230 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[0].n), NULL, NULL);
                                            }
#line 1790 "y.tab.c"
    break;

  case 45: /* expr: TSL '(' expr ')'  */
#line 233 "splparser.y"
                                              {
                                                
                                                (yyval.n) = create_tree((yyvsp[-3].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1799 "y.tab.c"
    break;

  case 46: /* expr: '[' expr ']'  */
#line 237 "splparser.y"
                                            {
                                                (yyval.n) = create_nontermNode(NODE_ADDR_EXPR, (yyvsp[-1].n), NULL);
                                            }
#line 1807 "y.tab.c"
    break;

  case 47: /* expr: '(' expr ')'  */
#line 240 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1815 "y.tab.c"
    break;

  case 48: /* expr: NUM  */
#line 243 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1823 "y.tab.c"
    break;

  case 49: /* expr: ids  */
#line 246 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1831 "y.tab.c"
    break;

  case 50: /* expr: STRING  */
#line 249 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1839 "y.tab.c"
    break;

  case 51: /* ifpad: IF  */
#line 254 "splparser.y"
                                            {
                                                depth++;
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1848 "y.tab.c"
    break;

  case 52: /* elsepad: ELSE  */
#line 259 "splparser.y"
                                            {
                                                pop_alias();
                                            }
#line 1856 "y.tab.c"
    break;

  case 53: /* whilepad: WHILE  */
#line 264 "splparser.y"
                                            {
                                                depth++;
                                                flag_break++;
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1866 "y.tab.c"
    break;

  case 54: /* reglist: REG ',' reglist  */
#line 271 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[0].n), NULL, NULL);
                                            }
#line 1874 "y.tab.c"
    break;

  case 55: /* reglist: REG  */
#line 274 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1882 "y.tab.c"
    break;

  case 56: /* ids: ID  */
#line 279 "splparser.y"
                                            {
                                                (yyval.n) = substitute_id((yyvsp[0].n));
                                            }
#line 1890 "y.tab.c"
    break;

  case 57: /* ids: REG  */
#line 282 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1898 "y.tab.c"
    break;


#line 1902 "y.tab.c"

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

#line 286 "splparser.y"


int yyerror (char *msg)
{
    return fprintf (stderr, "%d: %s\n", linecount, msg);
}
