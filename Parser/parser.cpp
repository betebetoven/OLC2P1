// A Bison parser, made by GNU Bison 3.7.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "parser.hpp"


// Unqualified %code blocks.
#line 111 "Parser.y"

yy::Parser::symbol_type yylex(void* yyscanner, yy::location& loc, class Clase3::Interfaz & intr);

#line 50 "parser.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 142 "parser.cpp"

  /// Build a parser object.
  Parser::Parser (void *scanner_yyarg, yy::location& loc_yyarg, class Clase3::Interfaz & intr_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      scanner (scanner_yyarg),
      loc (loc_yyarg),
      intr (intr_yyarg)
  {}

  Parser::~Parser ()
  {}

  Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | symbol kinds.  |
  `---------------*/



  // by_state.
  Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  Parser::symbol_kind_type
  Parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  Parser::stack_symbol_type::stack_symbol_type ()
  {}

  Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_sentencia: // sentencia
      case symbol_kind::S_ciclo_for: // ciclo_for
      case symbol_kind::S_ciclo_while: // ciclo_while
      case symbol_kind::S_ins_if: // ins_if
      case symbol_kind::S_aumento: // aumento
      case symbol_kind::S_decremento: // decremento
      case symbol_kind::S_bloque: // bloque
      case symbol_kind::S_declaracion_var: // declaracion_var
      case symbol_kind::S_asignacion_var: // asignacion_var
      case symbol_kind::S_x: // x
      case symbol_kind::S_cond: // cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_tipo: // tipo
        value.YY_MOVE_OR_COPY< AbstractExpr* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_s: // s
      case symbol_kind::S_lSentencia: // lSentencia
        value.YY_MOVE_OR_COPY< QVector<AbstractExpr*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_STR: // STR
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_FLO: // FLO
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_oprel: // oprel
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_sentencia: // sentencia
      case symbol_kind::S_ciclo_for: // ciclo_for
      case symbol_kind::S_ciclo_while: // ciclo_while
      case symbol_kind::S_ins_if: // ins_if
      case symbol_kind::S_aumento: // aumento
      case symbol_kind::S_decremento: // decremento
      case symbol_kind::S_bloque: // bloque
      case symbol_kind::S_declaracion_var: // declaracion_var
      case symbol_kind::S_asignacion_var: // asignacion_var
      case symbol_kind::S_x: // x
      case symbol_kind::S_cond: // cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_tipo: // tipo
        value.move< AbstractExpr* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_s: // s
      case symbol_kind::S_lSentencia: // lSentencia
        value.move< QVector<AbstractExpr*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_STR: // STR
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_FLO: // FLO
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_oprel: // oprel
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_sentencia: // sentencia
      case symbol_kind::S_ciclo_for: // ciclo_for
      case symbol_kind::S_ciclo_while: // ciclo_while
      case symbol_kind::S_ins_if: // ins_if
      case symbol_kind::S_aumento: // aumento
      case symbol_kind::S_decremento: // decremento
      case symbol_kind::S_bloque: // bloque
      case symbol_kind::S_declaracion_var: // declaracion_var
      case symbol_kind::S_asignacion_var: // asignacion_var
      case symbol_kind::S_x: // x
      case symbol_kind::S_cond: // cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_tipo: // tipo
        value.copy< AbstractExpr* > (that.value);
        break;

      case symbol_kind::S_s: // s
      case symbol_kind::S_lSentencia: // lSentencia
        value.copy< QVector<AbstractExpr*>* > (that.value);
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_STR: // STR
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_FLO: // FLO
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_oprel: // oprel
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_sentencia: // sentencia
      case symbol_kind::S_ciclo_for: // ciclo_for
      case symbol_kind::S_ciclo_while: // ciclo_while
      case symbol_kind::S_ins_if: // ins_if
      case symbol_kind::S_aumento: // aumento
      case symbol_kind::S_decremento: // decremento
      case symbol_kind::S_bloque: // bloque
      case symbol_kind::S_declaracion_var: // declaracion_var
      case symbol_kind::S_asignacion_var: // asignacion_var
      case symbol_kind::S_x: // x
      case symbol_kind::S_cond: // cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_tipo: // tipo
        value.move< AbstractExpr* > (that.value);
        break;

      case symbol_kind::S_s: // s
      case symbol_kind::S_lSentencia: // lSentencia
        value.move< QVector<AbstractExpr*>* > (that.value);
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_STR: // STR
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_FLO: // FLO
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_oprel: // oprel
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  Parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        switch (yykind)
    {
      case symbol_kind::S_NUMERO: // NUMERO
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 427 "parser.cpp"
        break;

      case symbol_kind::S_ID: // ID
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 433 "parser.cpp"
        break;

      case symbol_kind::S_STRING: // STRING
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 439 "parser.cpp"
        break;

      case symbol_kind::S_INT: // INT
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 445 "parser.cpp"
        break;

      case symbol_kind::S_STR: // STR
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 451 "parser.cpp"
        break;

      case symbol_kind::S_FLOAT: // FLOAT
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 457 "parser.cpp"
        break;

      case symbol_kind::S_FLO: // FLO
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 463 "parser.cpp"
        break;

      case symbol_kind::S_BOOL: // BOOL
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 469 "parser.cpp"
        break;

      case symbol_kind::S_s: // s
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < QVector<AbstractExpr*>* > (); }
#line 475 "parser.cpp"
        break;

      case symbol_kind::S_lSentencia: // lSentencia
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < QVector<AbstractExpr*>* > (); }
#line 481 "parser.cpp"
        break;

      case symbol_kind::S_sentencia: // sentencia
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 487 "parser.cpp"
        break;

      case symbol_kind::S_ciclo_for: // ciclo_for
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 493 "parser.cpp"
        break;

      case symbol_kind::S_ciclo_while: // ciclo_while
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 499 "parser.cpp"
        break;

      case symbol_kind::S_ins_if: // ins_if
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 505 "parser.cpp"
        break;

      case symbol_kind::S_aumento: // aumento
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 511 "parser.cpp"
        break;

      case symbol_kind::S_decremento: // decremento
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 517 "parser.cpp"
        break;

      case symbol_kind::S_bloque: // bloque
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 523 "parser.cpp"
        break;

      case symbol_kind::S_declaracion_var: // declaracion_var
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 529 "parser.cpp"
        break;

      case symbol_kind::S_asignacion_var: // asignacion_var
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 535 "parser.cpp"
        break;

      case symbol_kind::S_x: // x
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 541 "parser.cpp"
        break;

      case symbol_kind::S_cond: // cond
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 547 "parser.cpp"
        break;

      case symbol_kind::S_oprel: // oprel
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 553 "parser.cpp"
        break;

      case symbol_kind::S_expr: // expr
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 559 "parser.cpp"
        break;

      case symbol_kind::S_tipo: // tipo
#line 171 "Parser.y"
                 { yyoutput << yysym.value.template as < AbstractExpr* > (); }
#line 565 "parser.cpp"
        break;

      default:
        break;
    }
        yyo << ')';
      }
  }
#endif

  void
  Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  Parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  Parser::state_type
  Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::operator() ()
  {
    return parse ();
  }

  int
  Parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (scanner, loc, intr));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_sentencia: // sentencia
      case symbol_kind::S_ciclo_for: // ciclo_for
      case symbol_kind::S_ciclo_while: // ciclo_while
      case symbol_kind::S_ins_if: // ins_if
      case symbol_kind::S_aumento: // aumento
      case symbol_kind::S_decremento: // decremento
      case symbol_kind::S_bloque: // bloque
      case symbol_kind::S_declaracion_var: // declaracion_var
      case symbol_kind::S_asignacion_var: // asignacion_var
      case symbol_kind::S_x: // x
      case symbol_kind::S_cond: // cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_tipo: // tipo
        yylhs.value.emplace< AbstractExpr* > ();
        break;

      case symbol_kind::S_s: // s
      case symbol_kind::S_lSentencia: // lSentencia
        yylhs.value.emplace< QVector<AbstractExpr*>* > ();
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_STR: // STR
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_FLO: // FLO
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_oprel: // oprel
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // s: lSentencia
#line 180 "Parser.y"
               {std::cout << "LLEGO A S PARA SALIR" << std::endl;
        intr.raiz = *yystack_[0].value.as < QVector<AbstractExpr*>* > ();
                yylhs.value.as < QVector<AbstractExpr*>* > () = yystack_[0].value.as < QVector<AbstractExpr*>* > ();
                if (!yystack_[0].value.as < QVector<AbstractExpr*>* > ()->isEmpty()) {
        AbstractExpr* firstElement = (*yystack_[0].value.as < QVector<AbstractExpr*>* > ())[0]; 
        std::cout << "Class name of the first object in QVector: " << typeid(*firstElement).name() << std::endl;
    } else {
        std::cout << "QVector is empty" << std::endl;
    }
    if (!intr.raiz.isEmpty()) {
        AbstractExpr* firstElement = intr.raiz[0];
        std::cout << "Class name of the first object in intr.raiz: " << typeid(*firstElement).name() << std::endl;
    } else {
        std::cout << "intr.raiz is empty" << std::endl;
    }
    }
#line 866 "parser.cpp"
    break;

  case 3: // lSentencia: lSentencia sentencia z
#line 199 "Parser.y"
                                   {
                           yylhs.value.as < QVector<AbstractExpr*>* > () = yystack_[2].value.as < QVector<AbstractExpr*>* > ();
                            yylhs.value.as < QVector<AbstractExpr*>* > ()->append(yystack_[1].value.as < AbstractExpr* > ());
                        }
#line 875 "parser.cpp"
    break;

  case 4: // lSentencia: sentencia z
#line 203 "Parser.y"
                  {
        QVector<AbstractExpr*>* vec = new QVector<AbstractExpr*>();
        vec->append(yystack_[1].value.as < AbstractExpr* > ());
        yylhs.value.as < QVector<AbstractExpr*>* > () = vec;
    }
#line 885 "parser.cpp"
    break;

  case 5: // sentencia: declaracion_var
#line 211 "Parser.y"
                           {yylhs.value.as < AbstractExpr* > () = yystack_[0].value.as < AbstractExpr* > ();}
#line 891 "parser.cpp"
    break;

  case 6: // sentencia: asignacion_var
#line 212 "Parser.y"
                         {yylhs.value.as < AbstractExpr* > () = yystack_[0].value.as < AbstractExpr* > (); }
#line 897 "parser.cpp"
    break;

  case 7: // sentencia: bloque
#line 214 "Parser.y"
             {yylhs.value.as < AbstractExpr* > () = yystack_[0].value.as < AbstractExpr* > ();}
#line 903 "parser.cpp"
    break;

  case 8: // sentencia: aumento
#line 215 "Parser.y"
             {yylhs.value.as < AbstractExpr* > () = yystack_[0].value.as < AbstractExpr* > ();}
#line 909 "parser.cpp"
    break;

  case 9: // sentencia: decremento
#line 216 "Parser.y"
                {yylhs.value.as < AbstractExpr* > () = yystack_[0].value.as < AbstractExpr* > ();}
#line 915 "parser.cpp"
    break;

  case 10: // sentencia: ciclo_for
#line 217 "Parser.y"
               {yylhs.value.as < AbstractExpr* > ()=yystack_[0].value.as < AbstractExpr* > ();}
#line 921 "parser.cpp"
    break;

  case 11: // sentencia: ciclo_while
#line 218 "Parser.y"
                {yylhs.value.as < AbstractExpr* > ()=yystack_[0].value.as < AbstractExpr* > ();}
#line 927 "parser.cpp"
    break;

  case 12: // sentencia: ins_if
#line 219 "Parser.y"
            {yylhs.value.as < AbstractExpr* > ()=yystack_[0].value.as < AbstractExpr* > ();}
#line 933 "parser.cpp"
    break;

  case 13: // ciclo_for: FOR '(' declaracion_var z x z aumento ')' '{' lSentencia '}'
#line 222 "Parser.y"
                                                                       {yylhs.value.as < AbstractExpr* > () = new Bloque(*yystack_[1].value.as < QVector<AbstractExpr*>* > (),yystack_[8].value.as < AbstractExpr* > (),yystack_[6].value.as < AbstractExpr* > (),yystack_[4].value.as < AbstractExpr* > (),true,nullptr);}
#line 939 "parser.cpp"
    break;

  case 14: // ciclo_while: WHILE '(' x ')' '{' lSentencia '}'
#line 225 "Parser.y"
                                                {yylhs.value.as < AbstractExpr* > () = new Bloque(*yystack_[1].value.as < QVector<AbstractExpr*>* > (),nullptr,yystack_[4].value.as < AbstractExpr* > (),nullptr,true,nullptr);}
#line 945 "parser.cpp"
    break;

  case 15: // ins_if: IF '(' x ')' '{' lSentencia '}'
#line 229 "Parser.y"
                                        {yylhs.value.as < AbstractExpr* > () = new Bloque(*yystack_[1].value.as < QVector<AbstractExpr*>* > (),nullptr,yystack_[4].value.as < AbstractExpr* > (),nullptr,false,nullptr);}
#line 951 "parser.cpp"
    break;

  case 16: // ins_if: IF '(' x ')' '{' lSentencia '}' ELSE '{' lSentencia '}'
#line 230 "Parser.y"
                                                              {Bloque* elsa = new Bloque(*yystack_[1].value.as < QVector<AbstractExpr*>* > (),nullptr,nullptr,nullptr,false, nullptr);
                                                                yylhs.value.as < AbstractExpr* > () = new Bloque(*yystack_[5].value.as < QVector<AbstractExpr*>* > (),nullptr,yystack_[8].value.as < AbstractExpr* > (),nullptr,false,elsa);}
#line 958 "parser.cpp"
    break;

  case 17: // ins_if: IF '(' x ')' '{' lSentencia '}' ELSE ins_if
#line 232 "Parser.y"
                                                    {yylhs.value.as < AbstractExpr* > () = new Bloque(*yystack_[3].value.as < QVector<AbstractExpr*>* > (),nullptr,yystack_[6].value.as < AbstractExpr* > (),nullptr,false,yystack_[0].value.as < AbstractExpr* > ());}
#line 964 "parser.cpp"
    break;

  case 18: // aumento: INCREMENT ID
#line 239 "Parser.y"
                       {            NT_ID* id_avar2 = new NT_ID(QString::fromStdString(yystack_[0].value.as < std::string > ()));
                                T_ID* id_avar = new T_ID(QString::fromStdString(yystack_[0].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_AsigVar(id_avar2,new NT_Suma(id_avar, new T_Numero( QString::fromStdString("1"))),true ); }
#line 972 "parser.cpp"
    break;

  case 19: // aumento: ID INCREMENT
#line 242 "Parser.y"
                   {            NT_ID* id_avar2 = new NT_ID(QString::fromStdString(yystack_[1].value.as < std::string > ()));
                                T_ID* id_avar = new T_ID(QString::fromStdString(yystack_[1].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_AsigVar(id_avar2,new NT_Suma(id_avar, new T_Numero( QString::fromStdString("1"))),false ); }
#line 980 "parser.cpp"
    break;

  case 20: // decremento: DECREMENT ID
#line 246 "Parser.y"
                         {            NT_ID* id_avar2 = new NT_ID(QString::fromStdString(yystack_[0].value.as < std::string > ()));
                                T_ID* id_avar = new T_ID(QString::fromStdString(yystack_[0].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_AsigVar(id_avar2,new NT_Resta(id_avar, new T_Numero( QString::fromStdString("1"))),true ); }
#line 988 "parser.cpp"
    break;

  case 21: // decremento: ID DECREMENT
#line 249 "Parser.y"
                   {            NT_ID* id_avar2 = new NT_ID(QString::fromStdString(yystack_[1].value.as < std::string > ()));
                                T_ID* id_avar = new T_ID(QString::fromStdString(yystack_[1].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_AsigVar(id_avar2,new NT_Resta(id_avar, new T_Numero( QString::fromStdString("1"))),false ); }
#line 996 "parser.cpp"
    break;

  case 22: // bloque: '{' lSentencia '}'
#line 262 "Parser.y"
                           { yylhs.value.as < AbstractExpr* > () = new Bloque(*yystack_[1].value.as < QVector<AbstractExpr*>* > (),nullptr,nullptr,nullptr,false, nullptr); }
#line 1002 "parser.cpp"
    break;

  case 23: // z: ';'
#line 264 "Parser.y"
       {  }
#line 1008 "parser.cpp"
    break;

  case 24: // z: %empty
#line 265 "Parser.y"
             { }
#line 1014 "parser.cpp"
    break;

  case 25: // declaracion_var: ID AS tipo
#line 269 "Parser.y"
                            {   NT_ID* id = new NT_ID(QString::fromStdString(yystack_[2].value.as < std::string > ()));
                                    yylhs.value.as < AbstractExpr* > () = new NT_DeclVar(yystack_[0].value.as < AbstractExpr* > (), id); }
#line 1021 "parser.cpp"
    break;

  case 26: // declaracion_var: ID AS tipo '=' x
#line 271 "Parser.y"
                       {    std::cout << "declaracion con asignacion" << std::endl;
                                NT_ID* id = new NT_ID(QString::fromStdString(yystack_[4].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_DeclVar(yystack_[2].value.as < AbstractExpr* > (), id,yystack_[0].value.as < AbstractExpr* > () );  }
#line 1029 "parser.cpp"
    break;

  case 27: // asignacion_var: ID '=' x
#line 276 "Parser.y"
                         {   NT_ID* id_avar = new NT_ID(QString::fromStdString(yystack_[2].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_AsigVar(id_avar, yystack_[0].value.as < AbstractExpr* > (),true);
                                }
#line 1037 "parser.cpp"
    break;

  case 28: // x: cond
#line 282 "Parser.y"
         {yylhs.value.as < AbstractExpr* > () = yystack_[0].value.as < AbstractExpr* > ();}
#line 1043 "parser.cpp"
    break;

  case 29: // cond: cond OR cond
#line 285 "Parser.y"
                   {yylhs.value.as < AbstractExpr* > () = new NT_Or(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());}
#line 1049 "parser.cpp"
    break;

  case 30: // cond: cond AND cond
#line 286 "Parser.y"
                    {yylhs.value.as < AbstractExpr* > () = new NT_And(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());}
#line 1055 "parser.cpp"
    break;

  case 31: // cond: NOT cond
#line 287 "Parser.y"
               { yylhs.value.as < AbstractExpr* > () = new NT_Not(yystack_[0].value.as < AbstractExpr* > ());}
#line 1061 "parser.cpp"
    break;

  case 32: // cond: '(' cond ')'
#line 288 "Parser.y"
                 {yylhs.value.as < AbstractExpr* > () = yystack_[1].value.as < AbstractExpr* > ();}
#line 1067 "parser.cpp"
    break;

  case 33: // cond: expr oprel expr
#line 289 "Parser.y"
                     {if (yystack_[1].value.as < std::string > () == "mayor") {
        yylhs.value.as < AbstractExpr* > () = new NT_Mayor(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());
    } else if (yystack_[1].value.as < std::string > () == "menor") {
        yylhs.value.as < AbstractExpr* > () = new NT_Menor(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());
    } else if (yystack_[1].value.as < std::string > () == "igual") {
        yylhs.value.as < AbstractExpr* > () = new NT_IgualIgual(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());
    } else if (yystack_[1].value.as < std::string > () == "menorigual") {
        yylhs.value.as < AbstractExpr* > () = new NT_MenorIgual(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());
    } else if (yystack_[1].value.as < std::string > () == "mayorigual") {
        yylhs.value.as < AbstractExpr* > () = new NT_MayorIgual(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());
    } else if (yystack_[1].value.as < std::string > () == "diferente") {
        yylhs.value.as < AbstractExpr* > () = new NT_Diferente(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());
    } else {
        yylhs.value.as < AbstractExpr* > () = new NT_Diferente(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());
    }}
#line 1087 "parser.cpp"
    break;

  case 34: // cond: expr
#line 304 "Parser.y"
         {yylhs.value.as < AbstractExpr* > () = yystack_[0].value.as < AbstractExpr* > ();}
#line 1093 "parser.cpp"
    break;

  case 35: // oprel: MAYOR
#line 306 "Parser.y"
            {yylhs.value.as < std::string > () = "mayor";}
#line 1099 "parser.cpp"
    break;

  case 36: // oprel: MENOR
#line 307 "Parser.y"
           {yylhs.value.as < std::string > () = "menor";}
#line 1105 "parser.cpp"
    break;

  case 37: // oprel: IGUAL_IGUAL
#line 308 "Parser.y"
                 {yylhs.value.as < std::string > () = "igual";}
#line 1111 "parser.cpp"
    break;

  case 38: // oprel: MENOR_IGUAL
#line 309 "Parser.y"
                 {yylhs.value.as < std::string > () = "menorigual";}
#line 1117 "parser.cpp"
    break;

  case 39: // oprel: MAYOR_IGUAL
#line 310 "Parser.y"
                 {yylhs.value.as < std::string > () = "mayorigual";}
#line 1123 "parser.cpp"
    break;

  case 40: // oprel: DIFERENTE
#line 311 "Parser.y"
               {yylhs.value.as < std::string > () = "diferente";}
#line 1129 "parser.cpp"
    break;

  case 41: // expr: expr SUMA expr
#line 313 "Parser.y"
                       { yylhs.value.as < AbstractExpr* > () = new NT_Suma(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ());  }
#line 1135 "parser.cpp"
    break;

  case 42: // expr: expr MENOS expr
#line 314 "Parser.y"
                      { yylhs.value.as < AbstractExpr* > () = new NT_Resta(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ()); }
#line 1141 "parser.cpp"
    break;

  case 43: // expr: expr MULTIPLICACION expr
#line 315 "Parser.y"
                               { yylhs.value.as < AbstractExpr* > () = new NT_Multiplicacion(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ()); }
#line 1147 "parser.cpp"
    break;

  case 44: // expr: expr DIVISION expr
#line 316 "Parser.y"
                         { yylhs.value.as < AbstractExpr* > () = new NT_Division(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ()); }
#line 1153 "parser.cpp"
    break;

  case 45: // expr: expr EXPONENCIAL expr
#line 317 "Parser.y"
                            { yylhs.value.as < AbstractExpr* > () = new NT_Exponencial(yystack_[2].value.as < AbstractExpr* > (), yystack_[0].value.as < AbstractExpr* > ()); }
#line 1159 "parser.cpp"
    break;

  case 46: // expr: '(' expr ')'
#line 318 "Parser.y"
                   { yylhs.value.as < AbstractExpr* > () = yystack_[1].value.as < AbstractExpr* > (); }
#line 1165 "parser.cpp"
    break;

  case 47: // expr: INCREMENT ID
#line 319 "Parser.y"
                   {            NT_ID* id_avar2 = new NT_ID(QString::fromStdString(yystack_[0].value.as < std::string > ()));
                                T_ID* id_avar = new T_ID(QString::fromStdString(yystack_[0].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_AsigVar(id_avar2,new NT_Suma(id_avar, new T_Numero( QString::fromStdString("1"))),true ); }
#line 1173 "parser.cpp"
    break;

  case 48: // expr: ID INCREMENT
#line 322 "Parser.y"
                   {            NT_ID* id_avar2 = new NT_ID(QString::fromStdString(yystack_[1].value.as < std::string > ()));
                                T_ID* id_avar = new T_ID(QString::fromStdString(yystack_[1].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_AsigVar(id_avar2,new NT_Suma(id_avar, new T_Numero( QString::fromStdString("1"))),false ); }
#line 1181 "parser.cpp"
    break;

  case 49: // expr: DECREMENT ID
#line 325 "Parser.y"
                   {            NT_ID* id_avar2 = new NT_ID(QString::fromStdString(yystack_[0].value.as < std::string > ()));
                                T_ID* id_avar = new T_ID(QString::fromStdString(yystack_[0].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_AsigVar(id_avar2,new NT_Resta(id_avar, new T_Numero( QString::fromStdString("1"))),true ); }
#line 1189 "parser.cpp"
    break;

  case 50: // expr: ID DECREMENT
#line 328 "Parser.y"
                   {            NT_ID* id_avar2 = new NT_ID(QString::fromStdString(yystack_[1].value.as < std::string > ()));
                                T_ID* id_avar = new T_ID(QString::fromStdString(yystack_[1].value.as < std::string > ()));
                                yylhs.value.as < AbstractExpr* > () = new NT_AsigVar(id_avar2,new NT_Resta(id_avar, new T_Numero( QString::fromStdString("1"))),false ); }
#line 1197 "parser.cpp"
    break;

  case 51: // expr: MENOS expr
#line 331 "Parser.y"
                            { yylhs.value.as < AbstractExpr* > () = new NT_Negacion(yystack_[0].value.as < AbstractExpr* > ());  }
#line 1203 "parser.cpp"
    break;

  case 52: // expr: NUMERO
#line 332 "Parser.y"
             { yylhs.value.as < AbstractExpr* > () = new T_Numero( QString::fromStdString(yystack_[0].value.as < std::string > ())); }
#line 1209 "parser.cpp"
    break;

  case 53: // expr: ID
#line 333 "Parser.y"
         { yylhs.value.as < AbstractExpr* > () = new T_ID( QString::fromStdString(yystack_[0].value.as < std::string > ())); }
#line 1215 "parser.cpp"
    break;

  case 54: // expr: STRING
#line 334 "Parser.y"
             { yylhs.value.as < AbstractExpr* > () = new T_String( QString::fromStdString(yystack_[0].value.as < std::string > ()));  }
#line 1221 "parser.cpp"
    break;

  case 55: // expr: FLOAT
#line 335 "Parser.y"
            { yylhs.value.as < AbstractExpr* > () = new T_Float( QString::fromStdString(yystack_[0].value.as < std::string > ()));  }
#line 1227 "parser.cpp"
    break;

  case 56: // expr: TRUE
#line 336 "Parser.y"
           { yylhs.value.as < AbstractExpr* > () = new T_Boolean( QString::fromStdString("true"));  }
#line 1233 "parser.cpp"
    break;

  case 57: // expr: FALSE
#line 337 "Parser.y"
            { yylhs.value.as < AbstractExpr* > () = new T_Boolean( QString::fromStdString("false"));  }
#line 1239 "parser.cpp"
    break;

  case 58: // tipo: INT
#line 340 "Parser.y"
           { yylhs.value.as < AbstractExpr* > () = new NT_Tipo( QString::fromStdString("Integer")); }
#line 1245 "parser.cpp"
    break;

  case 59: // tipo: STR
#line 341 "Parser.y"
          { yylhs.value.as < AbstractExpr* > () = new NT_Tipo( QString::fromStdString("String")); }
#line 1251 "parser.cpp"
    break;

  case 60: // tipo: FLO
#line 342 "Parser.y"
          { yylhs.value.as < AbstractExpr* > () = new NT_Tipo( QString::fromStdString("Float")); }
#line 1257 "parser.cpp"
    break;

  case 61: // tipo: BOOL
#line 343 "Parser.y"
           { yylhs.value.as < AbstractExpr* > () = new NT_Tipo( QString::fromStdString("Boolean")); }
#line 1263 "parser.cpp"
    break;


#line 1267 "parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  Parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // Parser::context.
  Parser::context::context (const Parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  Parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        int yychecklim = yylast_ - yyn + 1;
        int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }



  int
  Parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char Parser::yypact_ninf_ = -42;

  const signed char Parser::yytable_ninf_ = -1;

  const short
  Parser::yypact_[] =
  {
      60,    -5,   -41,   -17,    -1,    23,    42,    60,    53,    60,
      -3,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,    66,
     -42,   -42,   116,   116,   116,    54,   -42,   -42,    -2,   -42,
      -3,   -42,   -42,   -42,   -42,   -42,   -42,     6,   -42,   -28,
     -42,   -42,   122,   -42,   -42,   116,    55,    62,   116,   -42,
      13,   186,    26,    29,    65,    -3,   -42,   -42,   116,   -42,
     -42,   122,    40,    13,   -42,   -42,    -6,   135,   116,   116,
     122,   122,   122,   122,   122,   -42,   -42,   -42,   -42,   -42,
     -42,   122,    30,    37,   116,   -42,   129,   -42,   -42,   -42,
      69,   -12,   -12,    40,    40,    40,   182,    60,    60,    -3,
       2,     9,     4,    78,   -42,    63,    46,   -13,    48,    60,
     -42,    60,    51,    58,   -42,   -42
  };

  const signed char
  Parser::yydefact_[] =
  {
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      24,    10,    11,    12,     8,     9,     7,     5,     6,     0,
      19,    21,     0,     0,     0,     0,    18,    20,     0,     1,
      24,    23,     4,    58,    59,    60,    61,    25,    52,    53,
      54,    55,     0,    56,    57,     0,     0,     0,     0,    27,
      28,    34,     0,     0,     0,    24,    22,     3,     0,    48,
      50,     0,    51,    31,    47,    49,     0,    34,     0,     0,
       0,     0,     0,     0,     0,    38,    39,    37,    40,    36,
      35,     0,     0,     0,     0,    26,     0,    32,    46,    30,
      29,    41,    42,    43,    44,    45,    33,     0,     0,    24,
       0,     0,     0,    15,    14,     0,     0,     0,     0,     0,
      17,     0,     0,     0,    16,    13
  };

  const short
  Parser::yypgoto_[] =
  {
     -42,   -42,    -4,    -9,   -42,   -42,     1,    10,   -42,   -42,
     -29,    86,   -42,   -19,   -25,   -42,   131,   -42
  };

  const signed char
  Parser::yydefgoto_[] =
  {
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      32,    17,    18,    49,    50,    81,    51,    37
  };

  const signed char
  Parser::yytable_[] =
  {
      30,    57,     1,    28,    52,    53,     1,     2,   105,    19,
      59,    60,    68,     1,    23,    72,    73,    74,     2,    30,
      63,     3,     2,    66,     4,     3,    84,    26,     4,     2,
      69,    68,     3,    20,    21,     4,     5,     6,    24,    85,
       5,     6,     5,    89,    90,   109,    27,     5,     6,    69,
      87,    31,    22,    29,    25,     1,     7,    56,    54,    64,
       7,   103,     1,    58,     1,    99,    65,     7,   104,    74,
     102,     2,    33,    34,     3,    35,    36,     4,     2,    19,
       2,     3,    82,     3,     4,    83,     4,    68,    97,     5,
       6,    30,    30,   100,   101,    98,     5,     6,     5,     6,
     107,    20,   108,    30,    30,   112,   111,   113,   110,     7,
     114,    55,   106,     0,     0,     0,     7,   115,     7,    38,
      39,    40,     0,     0,    41,    38,    39,    40,    42,     0,
      41,     0,    43,    44,    42,    45,     0,     0,    43,    44,
      70,    71,     0,     0,     0,     0,    70,    71,     0,     0,
       0,     0,     0,     0,    46,    47,    72,    73,    74,     0,
      46,    47,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    48,     0,    62,     0,     0,     0,    61,     0,    67,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,    88,    86,    70,    71,     0,     0,    70,    71,     0,
       0,    91,    92,    93,    94,    95,     0,     0,     0,    72,
      73,    74,    96,    72,    73,    74,    75,    76,    77,    78,
      79,    80
  };

  const signed char
  Parser::yycheck_[] =
  {
       9,    30,     4,     7,    23,    24,     4,    20,     4,    14,
      38,    39,    18,     4,    55,    27,    28,    29,    20,    28,
      45,    23,    20,    48,    26,    23,    55,     4,    26,    20,
      36,    18,    23,    38,    39,    26,    38,    39,    55,    58,
      38,    39,    38,    68,    69,    58,     4,    38,    39,    36,
      56,    54,    57,     0,    55,     4,    58,    59,     4,     4,
      58,    59,     4,    57,     4,    84,     4,    58,    59,    29,
      99,    20,     6,     7,    23,     9,    10,    26,    20,    14,
      20,    23,    56,    23,    26,    56,    26,    18,    58,    38,
      39,   100,   101,    97,    98,    58,    38,    39,    38,    39,
      22,    38,    56,   112,   113,   109,    58,   111,   107,    58,
      59,    25,   102,    -1,    -1,    -1,    58,    59,    58,     3,
       4,     5,    -1,    -1,     8,     3,     4,     5,    12,    -1,
       8,    -1,    16,    17,    12,    19,    -1,    -1,    16,    17,
      11,    12,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    27,    28,    29,    -1,
      38,    39,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    55,    -1,    42,    -1,    -1,    -1,    55,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    56,    61,    11,    12,    -1,    -1,    11,    12,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    27,
      28,    29,    81,    27,    28,    29,    30,    31,    32,    33,
      34,    35
  };

  const signed char
  Parser::yystos_[] =
  {
       0,     4,    20,    23,    26,    38,    39,    58,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    76,    77,    14,
      38,    39,    57,    55,    55,    55,     4,     4,    67,     0,
      68,    54,    75,     6,     7,     9,    10,    82,     3,     4,
       5,     8,    12,    16,    17,    19,    38,    39,    55,    78,
      79,    81,    78,    78,     4,    76,    59,    75,    57,    38,
      39,    55,    81,    79,     4,     4,    79,    81,    18,    36,
      11,    12,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    80,    56,    56,    75,    78,    81,    56,    56,    79,
      79,    81,    81,    81,    81,    81,    81,    58,    58,    78,
      67,    67,    75,    59,    59,     4,    72,    22,    56,    58,
      71,    58,    67,    67,    59,    59
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    65,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    70,    71,    71,    71,    72,    72,
      73,    73,    74,    75,    75,    76,    76,    77,    78,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      82,    82
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,    11,     7,     7,    11,     9,     2,     2,
       2,     2,     3,     1,     0,     3,     5,     3,     1,     3,
       3,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const Parser::yytname_[] =
  {
  "END", "error", "\"invalid token\"", "NUMERO", "ID", "STRING", "INT",
  "STR", "FLOAT", "FLO", "BOOL", "SUMA", "MENOS", "DIM", "AS", "IMPR",
  "TRUE", "FALSE", "AND", "NOT", "IF", "THEN", "ELSE", "WHILE", "PRINT",
  "PRINTF", "FOR", "MULTIPLICACION", "DIVISION", "EXPONENCIAL",
  "MENOR_IGUAL", "MAYOR_IGUAL", "IGUAL_IGUAL", "DIFERENTE", "MENOR",
  "MAYOR", "OR", "INTERROGACION", "INCREMENT", "DECREMENT", "DOT",
  "LEFT_BRACKET", "RIGHT_BRACKET", "VECTOR", "PUSH_FRONT", "DOT_PUSH_BACK",
  "STRUCT", "REMOVE", "MEDIAN", "IOTA", "MEAN", "SIZE", "ATOI", "GET",
  "';'", "'('", "')'", "'='", "'{'", "'}'", "'['", "']'", "'.'", "NEG",
  "','", "$accept", "s", "lSentencia", "sentencia", "ciclo_for",
  "ciclo_while", "ins_if", "aumento", "decremento", "bloque", "z",
  "declaracion_var", "asignacion_var", "x", "cond", "oprel", "expr",
  "tipo", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  Parser::yyrline_[] =
  {
       0,   180,   180,   199,   203,   211,   212,   214,   215,   216,
     217,   218,   219,   222,   225,   229,   230,   232,   239,   242,
     246,   249,   262,   264,   265,   269,   271,   276,   282,   285,
     286,   287,   288,   289,   304,   306,   307,   308,   309,   310,
     311,   313,   314,   315,   316,   317,   318,   319,   322,   325,
     328,   331,   332,   333,   334,   335,   336,   337,   340,   341,
     342,   343
  };

  void
  Parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  Parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1831 "parser.cpp"

#line 346 "Parser.y"

void yy::Parser::error(const yy::location& l, const std::string& m)
{
    std::cerr << l << ": " << m << std::endl;
}

