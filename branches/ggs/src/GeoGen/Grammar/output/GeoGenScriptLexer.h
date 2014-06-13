/** \file
 *  This C header file was generated by $ANTLR version null
 *
 *     -  From the grammar source file : D:\\Users\\matej_000\\Desktop\\GeoGen GGS\\src\\GeoGen\\Grammar\\GeoGenScript.g
 *     -                            On : 2014-06-13 05:41:12
 *     -                 for the lexer : GeoGenScriptLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer 
GeoGenScriptLexer

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pGeoGenScriptLexer, which is returned from a call to GeoGenScriptLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 *
 * The methods in pGeoGenScriptLexer are  as follows:
 *
 *  - 
 void
      pGeoGenScriptLexer->LEFT_BRACKET(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->RIGHT_BRACKET(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->LEFT_SQUARE_BRACKET(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->RIGHT_SQUARE_BRACKET(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->LEFT_CURLY_BRACKET(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->RIGTH_CURLY_BRACKET(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->TRUE_LIT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->FALSE_LIT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->COMMA(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->SEMICOLON(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->COLON(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->METADATA(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->ENUM(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->FUNCTION(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->VAR(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->GLOBAL(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->RETURN(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->YIELD(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->AS(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->SWITCH(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->DEFAULT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->CASE(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->IF(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->ELSE(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->FOR(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->WHILE(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->BREAK(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->CONTINUE(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_DOT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_INCREMENT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_DECREMENT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_NOT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_TIMES(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_DIVIDE(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_MODULO(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_PLUS(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_MINUS(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_LSHIFT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_RSHIFT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_LESS_THAN(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_GREATER_THAN(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_LESS_THAN_OR_EQUAL_TO(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_GREATER_THAN_OR_EQUAL_TO(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_EQUAL_TO(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_NOT_EQUAL_TO(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_BIT_AND(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_BIT_XOR(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_BIT_OR(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_REL_AND(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_REL_OR(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_EXPR_IF(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_PLUS(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_MINUS(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_TIMES(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_DIVIDE(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_MODULO(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_LSHIFT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_RSHIFT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_AND(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_XOR(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_ASSIGN_OR(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_IS(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->OPERATOR_RELATIVE(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->COMMENT(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->IDENTIFIER(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->INTEGER(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->NUMBER(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->QUOTE(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->STRING(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->ESCAPED(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->WHITESPACE(pGeoGenScriptLexer)
 *  - 
 void
      pGeoGenScriptLexer->Tokens(pGeoGenScriptLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_GeoGenScriptLexer_H
#define _GeoGenScriptLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

	#include <memory>
	#include <stdexcept>

	#include "../../GeoGen.hpp"
	using namespace std;
	using namespace geogen;
	using namespace geogen::compiler;
	
	void handleLexerError (pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_UINT8 * tokenNames);


#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct GeoGenScriptLexer_Ctx_struct GeoGenScriptLexer, * pGeoGenScriptLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for 
GeoGenScriptLexer

 */
struct GeoGenScriptLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;

     void
     (*mLEFT_BRACKET)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mRIGHT_BRACKET)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mLEFT_SQUARE_BRACKET)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mRIGHT_SQUARE_BRACKET)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mLEFT_CURLY_BRACKET)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mRIGTH_CURLY_BRACKET)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mTRUE_LIT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mFALSE_LIT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mCOMMA)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mSEMICOLON)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mCOLON)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mMETADATA)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mENUM)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mFUNCTION)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mVAR)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mGLOBAL)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mRETURN)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mYIELD)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mAS)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mSWITCH)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mDEFAULT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mCASE)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mIF)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mELSE)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mFOR)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mWHILE)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mBREAK)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mCONTINUE)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_DOT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_INCREMENT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_DECREMENT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_NOT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_TIMES)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_DIVIDE)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_MODULO)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_PLUS)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_MINUS)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_LSHIFT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_RSHIFT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_LESS_THAN)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_GREATER_THAN)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_LESS_THAN_OR_EQUAL_TO)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_GREATER_THAN_OR_EQUAL_TO)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_EQUAL_TO)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_NOT_EQUAL_TO)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_BIT_AND)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_BIT_XOR)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_BIT_OR)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_REL_AND)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_REL_OR)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_EXPR_IF)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_PLUS)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_MINUS)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_TIMES)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_DIVIDE)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_MODULO)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_LSHIFT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_RSHIFT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_AND)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_XOR)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_ASSIGN_OR)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_IS)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mOPERATOR_RELATIVE)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mCOMMENT)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mIDENTIFIER)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mINTEGER)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mNUMBER)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mQUOTE)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mSTRING)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mESCAPED)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mWHITESPACE)	(struct GeoGenScriptLexer_Ctx_struct * ctx);

     void
     (*mTokens)	(struct GeoGenScriptLexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct GeoGenScriptLexer_Ctx_struct * ctx);
    void	    (*free)   (struct GeoGenScriptLexer_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pGeoGenScriptLexer GeoGenScriptLexerNew         (
pANTLR3_INPUT_STREAM
 instream);
ANTLR3_API pGeoGenScriptLexer GeoGenScriptLexerNewSSD      (
pANTLR3_INPUT_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
lexer
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define AS      4
#define BLOCK      5
#define BREAK      6
#define CASE      7
#define COLLECTION      8
#define COLON      9
#define COMMA      10
#define COMMENT      11
#define CONDITION_EXPRESSION      12
#define CONTINUE      13
#define COORDINATE      14
#define DECLARATIONS      15
#define DEFAULT      16
#define ELSE      17
#define ENUM      18
#define ESCAPED      19
#define FALSE_LIT      20
#define FOR      21
#define FUNCTION      22
#define GLOBAL      23
#define IDENTCHAIN      24
#define IDENTIFIER      25
#define IF      26
#define INCREMENT_EXPRESSION      27
#define INITIALIZATION_EXPRESSION      28
#define INTEGER      29
#define LEFT_BRACKET      30
#define LEFT_CURLY_BRACKET      31
#define LEFT_SQUARE_BRACKET      32
#define METADATA      33
#define NUMBER      34
#define OPERATOR_ASSIGN      35
#define OPERATOR_ASSIGN_AND      36
#define OPERATOR_ASSIGN_DIVIDE      37
#define OPERATOR_ASSIGN_LSHIFT      38
#define OPERATOR_ASSIGN_MINUS      39
#define OPERATOR_ASSIGN_MODULO      40
#define OPERATOR_ASSIGN_OR      41
#define OPERATOR_ASSIGN_PLUS      42
#define OPERATOR_ASSIGN_RSHIFT      43
#define OPERATOR_ASSIGN_TIMES      44
#define OPERATOR_ASSIGN_XOR      45
#define OPERATOR_BIT_AND      46
#define OPERATOR_BIT_OR      47
#define OPERATOR_BIT_XOR      48
#define OPERATOR_CALL      49
#define OPERATOR_DECREMENT      50
#define OPERATOR_DECREMENT_POST      51
#define OPERATOR_DECREMENT_PRE      52
#define OPERATOR_DIVIDE      53
#define OPERATOR_DOT      54
#define OPERATOR_EQUAL_TO      55
#define OPERATOR_EXPR_IF      56
#define OPERATOR_GREATER_THAN      57
#define OPERATOR_GREATER_THAN_OR_EQUAL_TO      58
#define OPERATOR_INCREMENT      59
#define OPERATOR_INCREMENT_POST      60
#define OPERATOR_INCREMENT_PRE      61
#define OPERATOR_IS      62
#define OPERATOR_LESS_THAN      63
#define OPERATOR_LESS_THAN_OR_EQUAL_TO      64
#define OPERATOR_LSHIFT      65
#define OPERATOR_MINUS      66
#define OPERATOR_MINUS_UN      67
#define OPERATOR_MODULO      68
#define OPERATOR_NOT      69
#define OPERATOR_NOT_EQUAL_TO      70
#define OPERATOR_PLUS      71
#define OPERATOR_PLUS_UN      72
#define OPERATOR_RELATIVE      73
#define OPERATOR_REL_AND      74
#define OPERATOR_REL_OR      75
#define OPERATOR_RSHIFT      76
#define OPERATOR_SUBSCRIPT      77
#define OPERATOR_TIMES      78
#define PARAMETERS      79
#define QUOTE      80
#define RETURN      81
#define RIGHT_BRACKET      82
#define RIGHT_SQUARE_BRACKET      83
#define RIGTH_CURLY_BRACKET      84
#define SCRIPT      85
#define SEMICOLON      86
#define STRING      87
#define SWITCH      88
#define TRUE_LIT      89
#define VALUES      90
#define VAR      91
#define WHILE      92
#define WHITESPACE      93
#define YIELD      94
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for GeoGenScriptLexer
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
